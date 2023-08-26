#include <iostream>
#include <type_traits>

template <int IntBits>
struct FloatType {
    using type = typename std::conditional<(IntBits <= 32), float,
                  typename std::conditional<(IntBits <= 64), double, long double>::type
                >::type;
};

int main() {
    // Change this value to test different cases
    constexpr int IntBits = 64;

    // Get the appropriate float type based on IntBits
    using Float = typename FloatType<IntBits>::type;

    // Test
    std::cout << "Size of Float: " << sizeof(Float) << " bytes\n";

    return 0;
}
