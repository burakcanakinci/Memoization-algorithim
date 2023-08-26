#include <iostream>
#include <algorithm>    // Include the algorithm library for sorting
#include <unordered_map> // Include the unordered_map library for memoization

// Define a memoization map to store computed results
std::unordered_map<std::string, int> memo;

// Function to sort an array and print the result
void sortAndPrint(int arr[], int size, bool ascending) {
    // Check if the array is empty
    if (size == 0) {
        std::cerr << "Array is empty!" << std::endl;
        return; // Early return, no need to sort an empty array
    }

    // Convert the ascending flag to a string for memoization
    std::string sortType = ascending ? "ascending" : "descending";

    // Check if the result is already computed
    if (memo.find(sortType) != memo.end()) {
        std::cout << "Using memoized result for " << sortType << " sort." << std::endl;
    } else {
        // Sort the array using the specified order
        if (ascending) {
            std::sort(arr, arr + size);
        } else {
            std::sort(arr, arr + size, std::greater<int>());
        }

        // Store the result in the memoization map
        memo[sortType] = 1;
        std::cout << "Computed and memoized result for " << sortType << " sort." << std::endl;
    }

    // Print the sorted array
    std::cout << "Sorted array in " << (ascending ? "ascending" : "descending") << " order: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};

    // Calculate the size of the array
    int size = sizeof(arr) / sizeof(arr[0]);

    // Perform sorting with memoization
    sortAndPrint(arr, size, true);  // Ascending order
    sortAndPrint(arr, size, false); // Descending order

    return 0;
}
