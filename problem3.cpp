using namespace std;
#include <iostream>
#include <bits/stdc++.h>

int findMax(const int* arr, int size) {
    int maxi = arr[0];
    for (int i = 1; i < size; i++) {
        maxi = max(maxi, arr[i]);
    }
    return maxi;
}

void reverseArray(int* arr, size_t size) {
    size_t start = 0;            // Pointer to the beginning of the array
    size_t end = size - 1;       // Pointer to the end of the array

    while (start < end) {
        // Swap the elements at the start and end pointers
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move the pointers closer to the center
        ++start;
        --end;
    }
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

double calculateAverage(const int* arr, int size) {
    double average = 0.0;
    for (int i = 0; i < size; i++) {
        average += arr[i];
    }
    return (0.0+average) / size;
}
