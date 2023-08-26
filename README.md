## Memoization Program in C++

This C++ program finds the Longest Common Subsequence (LCS) of two input strings using dynamic programming with memoization. The LCS problem is a classic algorithmic problem in computer science.

### Requirements

To compile and run this program, you need a C++ compiler, such as `g++` or `clang++`, and a standard C++ library.

### Usage

1. Clone the repository or copy the code into a C++ source file (e.g., `main.cpp`).
2. Compile the code using your C++ compiler:

   ```
   g++ -o lcs_finder main.cpp
   ```

   Alternatively, you can use `clang++` or any other C++ compiler.

3. Run the executable:

   ```
   ./lcs_finder
   ```

4. Enter two strings when prompted by the program.

### Implementation

The program utilizes a recursive function with memoization to find the LCS of the two input strings. The `longestCommonSubsequence` function takes two strings `str1` and `str2` along with their lengths `i` and `j` as input. The function returns the LCS using an `unordered_map` `memo` to store already computed subproblems, avoiding redundant calculations.

### Example

```
Enter the first string: ABCBDAB
Enter the second string: BDCABA
The Longest Common Subsequence would be: BCBA
```

### Developer Note

This is open to be modified by anyone who would be interested. I invite you to seek out other applications of dynamic programming, also. My program showcases an amatuer starting point for learning and using the Longest Common Subsequence algorithm using memoization in C++. Thank you.
