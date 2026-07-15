#include <iostream>
#include <iomanip>

double calculate(int iterations, double param1, double param2) {
    double result = 1.0;
    for (int i = 1; i <= iterations; ++i) {
        double j1 = i * param1 - param2;
        double j2 = i * param1 + param2;
        result -= (1.0 / j1);
        result += (1.0 / j2);
    }
    return result;
}

int main() {
    double result = calculate(10000000, 4, 1) * 4;
    std::cout << std::fixed << std::setprecision(12) << result << std::endl;
    return 0;
}