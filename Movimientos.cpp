//
// Created by Lucia Abad on 31/10/24.
//

#include "Movimientos.h"
#include "Movimientos.h"

Movimientos::Movimientos() {
    // Grafo de movimientos del caballo en el teclado numérico
    grafoMovimientos = {
        {4, 6},     // Desde 0
        {6, 8},     // Desde 1
        {7, 9},     // Desde 2
        {4, 8},     // Desde 3
        {0, 3, 9},  // Desde 4
        {},         // Desde 5
        {1, 7, 0},  // Desde 6
        {2, 6},     // Desde 7
        {1, 3},     // Desde 8
        {2, 4},     // Desde 9
    };
}

int Movimientos::contarMovimientos(int movimientos) {
    int totalMovimientos = 0;
    for (int i = 0; i < grafoMovimientos.size(); ++i) {
        calcularMovimientos(i, movimientos, totalMovimientos);
    }
    return totalMovimientos;
}

void Movimientos::calcularMovimientos(int posicion, int movimientosRestantes, int& totalMovimientos) {
    if (movimientosRestantes == 0) {
        totalMovimientos++;
        return;
    }

    for (int movimiento : grafoMovimientos[posicion]) {
        calcularMovimientos(movimiento, movimientosRestantes - 1, totalMovimientos);
    }
}