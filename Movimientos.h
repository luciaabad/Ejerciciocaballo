//
// Created by Lucia Abad on 31/10/24.
//

#ifndef MOVIMIENTOS_H
#define MOVIMIENTOS_H

#include <vector>

class Movimientos {
public:
    Movimientos();
    int contarMovimientos(int movimientos);

private:
    void calcularMovimientos(int posicion, int movimientosRestantes, int& totalMovimientos);
    std::vector<std::vector<int>> grafoMovimientos;
};


#endif //MOVIMIENTOS_H
