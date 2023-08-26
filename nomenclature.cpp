#include <iostream>
#include <vector>

std::vector<std::vector<std::string>> binomialNomenclature(int n) {
    std::vector<std::vector<std::string>> binomial;

    for (int i = 0; i <= n; ++i) {
        std::vector<std::string> row(i + 1);

        for (int j = 0; j <= i; ++j) {
            if (j == 0 || j == i) {
                row[j] = "1";
            } else {
                row[j] = binomial[i - 1][j - 1] + " + " + binomial[i - 1][j];
            }
        }

        binomial.push_back(row);
    }

    return binomial;
}

int main() {
    int n;
    std::cout << "Enter the number of rows for binomial nomenclature: ";
    std::cin >> n;

    std::vector<std::vector<std::string>> result = binomialNomenclature(n);

    // Print binomial nomenclature
    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j <= i; ++j) {
            std::cout << result[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
