#include <iostream>
#include "Movimientos.h"

int main() {
    Movimientos mv;

    int movimientos;
    std::cout << "Ingrese la cantidad de movimientos a realizar: ";
    std::cin >> movimientos;

    int totalMovimientos = mv.contarMovimientos(movimientos);

    std::cout << "Total de movimientos válidos: " << totalMovimientos << std::endl;

    return 0;
}