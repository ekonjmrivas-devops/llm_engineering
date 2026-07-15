import numpy as np

def calculate(iterations, param1, param2):
    i = np.arange(1, iterations + 1, dtype=np.float64)
    j1 = i * param1 - param2
    j2 = i * param1 + param2
    result = 1.0 - np.sum(1.0 / j1) + np.sum(1.0 / j2)
    return result

result = calculate(10000000, 4.0, 1.0) * 4.0
print(f"{result:.12f}")