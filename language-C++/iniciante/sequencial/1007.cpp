/**
 * @file 1007.cpp
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Diferenca
 * @version 0.1
 * @date 2025-10-01
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <iostream>

int main() {

    int primeiroValor, segundoValor, terceiroValor, quartoValor, diferenca;

    std::cin >> primeiroValor >> segundoValor >> terceiroValor >> quartoValor;

    diferenca = ((primeiroValor * segundoValor) - (terceiroValor * quartoValor));

    std::cout << "DIFERENCA = " << diferenca << std::endl;

    return 0;
}