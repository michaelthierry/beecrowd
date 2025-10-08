/**
 * @file 1008.cpp
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Salario
 * @version 0.1
 * @date 2025-10-06
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <iostream>
#include <iomanip>

int main() {

    int numeroFuncionario, quantidadeHoras;
    double valorHora, salario;

    std::cin >> numeroFuncionario >> quantidadeHoras >> valorHora;

    salario = (quantidadeHoras * valorHora);

    std::cout << "NUMBER = " << numeroFuncionario 
              << "\nSALARY = U$ " << std::setprecision(2) 
              << std::fixed << salario << std::endl;

    return 0;

}