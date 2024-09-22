 #include <iostream>
#include <vector>
#include <cstdlib> // for rand() function
#include <ctime>   // for time() function

using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int getRandomPivot(int low, int high) {
    // Generate a random index between low and high
    return low + rand() % (high - low + 1);
}

int partition(vector<int> &arr, int low, int high) {
    // Choose a random pivot
    int pivotIndex = getRandomPivot(low, high);

    // Move the pivot element to the beginning
    swap(arr[low], arr[pivotIndex]);

    int pivot = arr[low];
    int i = low + 1;
    int j = high;

    while (true) {
        while (i <= j && arr[i] <= pivot) {
            i++;
        }

        while (i <= j && arr[j] > pivot) {
            j--;
        }

        if (i <= j) {
            swap(arr[i], arr[j]);
        } else {
            break;
        }
    }

    swap(arr[low], arr[j]);

    return j;
}

void quicksort(vector<int> &arr, int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);

        quicksort(arr, low, pivotIndex - 1);
        quicksort(arr, pivotIndex + 1, high);
    }
}

int main() {
    // Seed for random number generation
    srand(static_cast<unsigned int>(time(0)));

    vector<int> arr;
    arr.push_back(4);
    arr.push_back(3);
    arr.push_back(7);
    arr.push_back(1);
    arr.push_back(9);
    arr.push_back(5);
    arr.push_back(2);

    cout << "Original Array: ";
    for (int i = 0; i < arr.size(); ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    quicksort(arr, 0, arr.size() - 1);

    cout << "Array after quicksort: ";
    for (int i = 0; i < arr.size(); ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

