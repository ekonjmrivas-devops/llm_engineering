#include <iostream>
#include <chrono>
#include <iomanip>

double calculate(long iterations, long param1, long param2) {
    double result = 1.0;
    for (long i = 1; i <= iterations; ++i) {
        long j = i * param1 - param2;
        result -= 1.0 / j;
        j = i * param1 + param2;
        result += 1.0 / j;
    }
    return result;
}

int main() {
    long iterations = 10000000;
    long param1 = 4;
    long param2 = 1;

    auto startTime = std::chrono::high_resolution_clock::now();
    double result = calculate(iterations, param1, param2) * 4;
    auto endTime = std::chrono::high_resolution_clock::now();

    std::cout << std::fixed << std::setprecision(12) << result << std::endl;
    std::cout << "Elapsed time in microseconds: "
              << std::chrono::duration_cast<std::chrono::microseconds>(endTime - startTime).count()
              << std::endl;

    return 0;
}