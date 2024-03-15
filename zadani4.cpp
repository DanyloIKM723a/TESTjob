// Searching for an element in an array in C++

#include <iostream>
#include <vector>

using namespace std;

// A function for searching an element in an array
bool contains(const vector<int>& arr, int element) {
    // Search for an element in arr using the find algorithm
    return find(arr.begin(), arr.end(), element) != arr.end();
}

int main() {
    // Array size
    int n;

    // Entering the size of the array
    do {
        cout << "Enter array size (positive number): ";
        cin >> n;
    } while (n <= 0);

    // Creating an array
    vector<int> arr(n);

    // Entering array elements
    for (int i = 0; i < n; i++) {
        while (true) {
            cout << "Enter " << i + 1 << "-th element (integer): ";
            cin >> arr[i];
            if (cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid format. Try again." << endl;
            }
            else {
                break;
            }
        }
    }

    // Item to find
    int element;

    // Enter the item you want to find
    cout << "Enter the item you want to find: ";
    cin >> element;

    // Search for an item
    bool found = contains(arr, element);

    // Outputting the result
    if (found) {
        cout << "Element " << element << " found in array." << endl;
    }
    else {
        cout << "Element " << element << " not found in array." << endl;
    }

    return 0;
}