 #include <iostream>
 #include <string>

 using namespace std;

/**
 * @file Lab6_tberzins.cpp
 * @author Tali Berzins
 * @date 2026-10-12
 * @brief Compare static arrays and vectors for processing student scores.
 */




/**
 * @brief Calculates the average of the scores in the array.
 * @param none 
 * @return Void
 */
void arraySolution() {

 float arrayNumber;
 float scoresArray[10];
 float total = 0;
 for (int i =0; i<10; i++){
cout << "Enter a score once at a time";
cin >> arrayNumber;
        scoresArray[i] = arrayNumber;
        total += arrayNumber;
}
float average = total / 10;
cout << "The average is: " << average << endl;
}


/**
 * @brief Calculates the average of the scores in the vector.
 * @param none 
 * @return Void
 */
void vectorSolution() {


}
