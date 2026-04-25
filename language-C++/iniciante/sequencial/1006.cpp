/**
 * @file 1006.cpp
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Media 2
 * @version 0.1
 * @date 2025-10-01
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <iostream>
#include <iomanip>

int main() {

    double primeiraNota, segundaNota, terceiraNota, media;

    std::cin >> primeiraNota >> segundaNota >> terceiraNota;

    media = ((primeiraNota * 2.0) + (segundaNota * 3.0) + (terceiraNota * 5.0)) / 10.0;

    std::cout << "MEDIA = " << std::setprecision(1) << std::fixed << media << std::endl;

    return 0;
}