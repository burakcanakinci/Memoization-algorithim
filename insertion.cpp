#include <iostream>
#include <algorithm>

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    std::sort(arr, arr + sizeof(arr) / sizeof(arr[0]));
    std::cout << "Sorted array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    return 0;
}
