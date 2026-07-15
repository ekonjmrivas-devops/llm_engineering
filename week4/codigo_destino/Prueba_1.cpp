#include <iostream>
#include <iomanip>

double calculate(int iterations, int param1, int param2) {
    double result = 1.0;
    for (int i = 1; i <= iterations; ++i) {
        int j = i * param1 - param2;
        result -= (1.0 / j);
        j = i * param1 + param2;
        result += (1.0 / j);
    }
    return result;
}

int main() {
    double result = calculate(10000000, 4, 1) * 4;
    std::cout << std::fixed << std::setprecision(12) << result << std::endl;
    return 0;
}