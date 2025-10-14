/**
 * @file 1011.cpp
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Esfera
 * @version 0.1
 * @date 2025-10-08
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <iostream>
#include <iomanip>

int main() {

    const double PI = 3.14159;
    double raioEsfera, volumeEsfera;

    std::cin >> raioEsfera;

    volumeEsfera = ((4.0 / 3.0) * PI * (raioEsfera * raioEsfera * raioEsfera));

    std::cout << "VOLUME = " << std::fixed << std::setprecision(3) 
              << volumeEsfera << std::endl;

    return 0;
}