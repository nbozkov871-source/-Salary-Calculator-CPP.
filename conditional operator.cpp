#include <iostream>

double g(double x) {
    if (x >= 5) {
        return (x * x * x) + 2; 
    }
    else {
        return 2 * x;           
    }
}

int main() {
    double x;

    std::cout << "Въведете стойност за x: ";
    std::cin >> x;

    double rezultat = g(x);
    std::cout << "g(" << x << ") = " << rezultat << std::endl;

    return 0;
}
