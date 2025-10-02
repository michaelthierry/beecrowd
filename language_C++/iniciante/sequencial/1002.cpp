/**
 * @file 1002.cpp
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Area do Circulo
 * @version 0.1
 * @date 2025-09-30
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <iostream>
#include <iomanip>

int main() {
    const double PI = 3.14159;
    double raio, area;

    std::cin >> raio;

    area = PI * (raio * raio);
    
    std::cout << "A=" << std::fixed << std::setprecision(4) << area << std::endl;

    return 0;
}   