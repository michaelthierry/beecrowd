/**
 * @file 1004.cpp
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Produto Simples
 * @version 0.1
 * @date 2025-10-01
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <iostream>

int main() {

    int primeiroValor, segundoValor, produto;

    std::cin >> primeiroValor >> segundoValor;

    produto = (primeiroValor * segundoValor);

    std::cout << "PROD = " << produto << std::endl;

    return 0;
}