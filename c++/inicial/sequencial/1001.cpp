/**
 * @file 1001.cpp
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Problema: 1001 - Extremamente Basico
 * @version 0.1
 * @date 2024-05-29
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>
using namespace std;

int main(){
    // variaveis
    int primeiroValor, segundoValor, total;
    // lendo do usuario
    cin >> primeiroValor;
    cin >> segundoValor;
    // calculando
    total = primeiroValor + segundoValor;
    // exibindo o resultado
    cout << "X = " << total << endl;
    // fim
    return 0;
}