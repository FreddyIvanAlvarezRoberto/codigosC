#include <iostream>

int main() {
    double result = 5 + 2 / (1 / (1 + 2 / (2 - 1.0 / 4))); // realizamos el c�lculo
    std::cout << "Operaci�n: 5 + 2/(1/(1 + 2/(2 - 1/4)))" << std::endl; // mostramos la operaci�n
    std::cout << "Resultado: " << result << std::endl; // mostramos el resultado
    return 0;
}
