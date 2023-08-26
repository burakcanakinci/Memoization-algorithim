#include <iostream>
#include <unordered_map>

// Function to calculate the factorial of a number using memoization
unsigned long long factorial(int n, std::unordered_map<int, unsigned long long>& memo)
{
    if (n <= 1)
        return 1;

    if (memo.find(n) != memo.end())
        return memo[n];

    // Calculate the factorial using recursive calls
    unsigned long long fact = n * factorial(n - 1, memo);
    memo[n] = fact;

    return fact;
}

int main()
{
    int n;

    // Get input from the user
    std::cout << "Enter a positive integer to calculate its factorial: ";
    std::cin >> n;

    // Validate user input
    if (n < 0) {
        std::cerr << "Error: Input must be a positive integer." << std::endl;
        return 1; // Indicate error with a non-zero exit code
    }

    // Create a memoization map to store computed factorials
    std::unordered_map<int, unsigned long long> memo;

    // Calculate the factorial using the factorial function
    unsigned long long result = factorial(n, memo);

    // Display the calculated factorial
    std::cout << "The factorial of " << n << " is: " << result << std::endl;

    return 0;
}
