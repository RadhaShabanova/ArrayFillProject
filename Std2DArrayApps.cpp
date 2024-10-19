#include <iostream>
#include "Std2DArrays.h"

int main() {
    int rows = 4; // Set the number of rows
    int cols = 4; // Set the number of columns

    // Dynamically allocate a 2D array
    int** arr = new int*[rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols];
    }

    fillArray(arr, rows, cols);

    // Display the filled array
    std::cout << "Filled 2D Array (SW HOR):" << std::endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << arr[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    // Deallocate the 2D array
    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
