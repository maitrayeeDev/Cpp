// general purpose language
// game development, embedded systems, system programming, high perfomance computing
// statically typed language

#include <iostream>

// A simple function to add two numbers
int add(int a, int b) {
    return a + b;
}

class Calculator {
public:
    int multiply(int a, int b) {
        return a * b;
    }
};

int main() {
    int x = 5;
    int y = 3;

    int sum = add(x, y);
    std::cout << "Sum: " << sum << std::endl;

    Calculator calc;
    int product = calc.multiply(x, y);
    std::cout << "Product: " << product << std::endl;

    return 0;
}