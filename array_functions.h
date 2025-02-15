#ifndef ARRAY_FUNCTIONS_H
#define ARRAY_FUNCTIONS_H

#include <iostream>

using namespace std;

const int MAX_SIZE = 150;

void readDataFromFile(const string& filename, int arr[], int& size);
int findIndex(int arr[], int size, int value);
void modifyValue(int arr[], int size, int index, int newValue);
void addElement(int arr[], int& size, int value);
void removeElement(int arr[], int& size, int index);

#endif
