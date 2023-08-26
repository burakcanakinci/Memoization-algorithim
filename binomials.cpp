#include <iostream>
#include <ctime>
#include <cstdlib>

// Function to calculate factorial of a number
unsigned long long factorial(int n) {
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    // Seed the random number generator
    std::srand(std::time(nullptr));

    // Generate random values for n and k (n >= k)
    int n = std::rand() % 10 + 1; // Random number between 1 and 10
    int k = std::rand() % (n + 1); // Random number between 0 and n

    // Calculate the factorial binomial
    unsigned long long binomial = factorial(n) / (factorial(k) * factorial(n - k));

    // Output the results
    std::cout << "Randomly generated values: n = " << n << ", k = " << k << std::endl;
    std::cout << "Factorial binomial (n choose k): " << binomial << std::endl;

    return 0;
}
