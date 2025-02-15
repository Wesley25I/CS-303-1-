#include "array_functions.h"
#include <iostream>

using namespace std;

int main() {
    int arr[MAX_SIZE], size = 0;
    string filename = "A1input.txt";

    readDataFromFile(filename, arr, size);

    int choice, value, index;
    while (true) {
        cout << "\nMenu:\n1. Find Index\n2. Modify Value\n3. Add Element\n4. Remove Element\n5. Exit\nChoice: ";
        cin >> choice;

        try {
            switch (choice) {
                case 1:
                    cout << "Enter number to find: ";
                    cin >> value;
                    index = findIndex(arr, size, value);
                    if (index != -1) cout << "Found at index: " << index << endl;
                    else cout << "Not found\n";
                    break;
                case 2:
                    cout << "Enter index to modify: ";
                    cin >> index;
                    cout << "Enter new value: ";
                    cin >> value;
                    modifyValue(arr, size, index, value);
                    break;
                case 3:
                    cout << "Enter new element to add: ";
                    cin >> value;
                    addElement(arr, size, value);
                    cout << "Element added\n";
                    break;
                case 4:
                    cout << "Enter index to remove: ";
                    cin >> index;
                    removeElement(arr, size, index);
                    cout << "Element removed\n";
                    break;
                case 5:
                    return 0;
                default:
                    cout << "Invalid choice\n";
            }
        } catch (const exception& e) {
            cerr << "Error: " << e.what() << endl;
        }
    }
}
