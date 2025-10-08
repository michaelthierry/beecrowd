/**
 * @file 1010.cpp
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Calculo Simples
 * @version 0.1
 * @date 2025-10-08
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <iostream>
#include <iomanip>

int main(){
    
    int codigoPeca1, quantidadePeca1, codigoPeca2, quantidadePeca2;
    double valorPeca1, valorPeca2, valorTotal;

    std::cin >> codigoPeca1 >> quantidadePeca1 >> valorPeca1
             >> codigoPeca2 >> quantidadePeca2 >> valorPeca2;

    valorTotal = (valorPeca1 * quantidadePeca1) + (valorPeca2 * quantidadePeca2);

    std::cout << "VALOR A PAGAR: R$ " << std::fixed << std::setprecision(2)
              << valorTotal << std::endl;

    return 0; 
}