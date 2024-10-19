#include <iostream>
#include "Std2DArrays.h"

void fillArray(int** arr, int rows, int cols) {
    int num = 1;

    // Fill the array horizontally, alternating the direction for each row
    for (int i = 0; i < rows; i++) {
        if (i % 2 == 0) { // Even row index: fill left to right
            for (int j = 0; j < cols; j++) {
                arr[i][j] = num++;
            }
        } else { // Odd row index: fill right to left
            for (int j = cols - 1; j >= 0; j--) {
                arr[i][j] = num++;
            }
        }
    }
}

