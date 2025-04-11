#include "calculator.h"
#include <stdexcept>
#include <limits>

int Calculator::add(int a, int b) {
    long long res = static_cast<long long>(a) + static_cast<long long>(b);
    if (res > std::numeric_limits<int>::max() || res < std::numeric_limits<int>::min()) {
        throw std::overflow_error("Addition overflow");
    }
    return static_cast<int>(res);
}

int Calculator::sub(int a, int b) {
    long long res = static_cast<long long>(a) - static_cast<long long>(b);
    if (res > std::numeric_limits<int>::max() || res < std::numeric_limits<int>::min()) {
        throw std::overflow_error("Subtraction overflow");
    }
    return static_cast<int>(res);
}

int Calculator::mul(int a, int b) {
    long long res = static_cast<long long>(a) * static_cast<long long>(b);
    if (res > std::numeric_limits<int>::max() || res < std::numeric_limits<int>::min()) {
        throw std::overflow_error("Multiplication overflow");
    }
    return static_cast<int>(res);
}

int Calculator::div(int a, int b) {
    if (b == 0) {
        throw std::invalid_argument("Division by zero");
    }
    if (a == std::numeric_limits<int>::min() && b == -1) {
        throw std::overflow_error("Division overflow");
    }
    return a / b;
}
