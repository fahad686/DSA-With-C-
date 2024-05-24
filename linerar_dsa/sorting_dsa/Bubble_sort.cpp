#include <iostream>

using namespace std;
//Declare function
void bubbleSort(int arr[], int n);
int main() {
    int arr[] = {5, -5, 8, 3, 1, 6, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);

    std::cout << "Sorted array: ";
    for (int i = 0; i  < n; i++) {
        std::cout << arr[i] << " ";
    }
    return 0;
}

 void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
 }
