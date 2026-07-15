#include. No uses bloques de markdown (), no escribas ninguna palabra de explicación, ni antes ni después del código. Solo código C++ puro, listo para compilar.<|im_end|>
<|im_start|>assistant
#include <iostream>
#include <iomanip>
#include <cmath>
#include <chrono>

double calculate(int iterations, int param1, int param2) {
    double result = 1.0;
    for (int i = 1; i <= iterations; i++) {
        int j = i * param1 - param2;
        result -= (1.0 / j); // No puede ser int y double en la misma operación
        j = i * param1 + param2;
        result += (1.0 / j);
    }
    return result * 4.0;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout << std::fixed << std::setprecision(12);
    std::chrono::high_resolution_clock::time_point start_time = std::chrono::high_resolution_clock::now();
    double result = calculate(100000000, 4, 1);
    std::chrono::high_resolution_clock::time_point end_time = std::chrono::high_resolution_clock::now();
    std::cout << "Result: " << result << std::endl;
    std::cout << "Execution Time: " << std::chrono::duration_cast<std::chrono::microseconds>(end_time - start_time).count() / 1000.0 << " milliseconds" << std::endl;
    return 0;
}
