/**
 * @file 1009.cpp
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Salario com Bonus
 * @version 0.1
 * @date 2025-10-06
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <iostream>
#include <iomanip>

int main() {

    char nome[30];
    double valorSalario, valorVendas, novoSalario;

    std::cin >> nome >> valorSalario >> valorVendas;

    novoSalario = valorSalario + (valorVendas * 0.15);

    std::cout << "TOTAL = R$ " << std::fixed << std::setprecision(2)
              << novoSalario << std::endl;

    return 0;
}