#include <iostream>
using namespace std;

int main() {
    int arr[] = {12, 5, 8, 7, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++) {
        int minIndex = i;  // should be minIndex, not mainIndex
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; // use << not <
    }

    return 0;
}
