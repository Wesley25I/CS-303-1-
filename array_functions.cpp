#include "array_functions.h"
#include <fstream>
#include <stdexcept> // exception handling

using namespace std;

// Function to read data from file
void readDataFromFile(const string& filename, int arr[], int& size) {
    ifstream file(filename);
    if (!file) {
        cerr << "Error opening file!" << endl;
        return;
    }
    size = 0;
    while (file >> arr[size] && size < MAX_SIZE) {
        size++;
    }
    file.close();
}

// Function to find index of an element
int findIndex(int arr[], int size, int value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            return i;
        }
    }
    return -1; // Not found
}

// Function to modify value at a given index
void modifyValue(int arr[], int size, int index, int newValue) {
    if (index < 0 || index >= size) {
        throw out_of_range("Index is out of bounds!");
    }
    cout << "Old Value: " << arr[index] << ", New Value: " << newValue << endl;
    arr[index] = newValue;
}

// Function to add element to array
void addElement(int arr[], int& size, int value) {
    if (size >= MAX_SIZE) {
        throw overflow_error("Array is full!");
    }
    arr[size++] = value;
}

// Function to remove element at a given index
void removeElement(int arr[], int& size, int index) {
    if (index < 0 || index >= size) {
        throw out_of_range("Index is out of bounds!");
    }
    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;
}
