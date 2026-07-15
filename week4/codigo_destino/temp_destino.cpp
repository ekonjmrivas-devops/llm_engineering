#include <iostream>
#include <iomanip>

int main() {
    int iterations = 10'000'000;
    int param1 = 4;
    int param2 = 1;
    
    double result = 1.0;
    for (int i = 1; i <= iterations; ++i) {
        int j = i * param1 - param2;
        result -= (1.0 / j);
        j = i * param1 + param2;
        result += (1.0 / j);
    }
    
    result *= 4;
    
    std::cout << std::fixed << std::setprecision(12) << result << std::endl;
    
    return 0;
}