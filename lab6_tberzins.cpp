#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <algorithm> // Required for std::sort


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

    int arrayNumber;
    std::array<int, 10> scoresArray;
    int total = 0;
    int highScore = 0;
    int lowScore = 100;
    for (int i =0; i<scoresArray.size(); i++){
    cout << "Enter a score once at a time: ";
    cin >> arrayNumber;
    if (arrayNumber < 0 || arrayNumber > 100) {
                cout << "Invalid score. Please enter a score between 0 and 100." << endl;
                i--; // Decrement i to repeat this iteration
                continue;
            }
            scoresArray[i] = arrayNumber;
            total += arrayNumber;
            if (arrayNumber > highScore) {
                highScore = arrayNumber;
            }
            if (arrayNumber < lowScore) {
                lowScore = arrayNumber;
            }
    }
    float average = total / scoresArray.size();
    cout << "The average is: " << average << endl;
    cout << "The highest score is: " << highScore << endl;
    cout << "The lowest score is: " << lowScore << endl;
    }


/**
 * @brief Calculates the average of the scores in the vector.
 * @param none 
 * @return Void
 */
void vectorSolution() {

    std::vector<int> scoresVector;
    int vectorNumber;
    int total = 0;
    int highScore = 0;
    int lowScore = 100;

    do {
        cout << "Enter a score (or -1 to finish): ";
        cin >> vectorNumber;
        if (vectorNumber != -1) {
            if (vectorNumber < 0 || vectorNumber > 100) {
                cout << "Invalid score. Please enter a score between 0 and 100." << endl;
                continue;
            }
            scoresVector.push_back(vectorNumber);
            total += vectorNumber;
            if (vectorNumber > highScore) {
                highScore = vectorNumber;
            }
            if (vectorNumber < lowScore) {
                lowScore = vectorNumber;
            }
        }
    } while (vectorNumber != -1);
    float average = total / scoresVector.size();
    cout << "The average is: " << average << endl;
    cout << "The highest score is: " << highScore << endl;
    cout << "The lowest score is: " << lowScore << endl;
    std::sort(scoresVector.begin(), scoresVector.end());

        // Print the sorted elements
    std::cout << "Sorted vector: ";
    for (int i = 0; i < scoresVector.size(); i++) {
        std::cout << scoresVector[i] << " ";
    }
    cout << endl;
}



/** 
 * @brief: Entry point of the program.
 * @param: None.
 * @return: 0 to indicate success.
 * @behavior: Calls arraySolution(). Calls vectorSolution().
*/
int main() {
    int choice;
    cout << "Choose an option:\n1. Use static array\n2. Use vector\nEnter your choice: ";
    cin >> choice;

    if (choice == 1) {
        arraySolution();
    } else if (choice == 2) {
        vectorSolution();
    } else {
        cout << "Invalid choice." << endl;
    }

    return 0;
}