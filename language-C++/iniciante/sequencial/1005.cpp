/**
 * @file 1005.cpp
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Media 1
 * @version 0.1
 * @date 2025-10-01
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <iostream>
#include <iomanip>

int main() {
    
    float primeiraNota, segundaNota, media;

    std::cin >> primeiraNota >> segundaNota;

    media = ((primeiraNota * 3.5) + (segundaNota * 7.5)) / 11.0;

    std::cout << "MEDIA = " << std::setprecision(5) << std::fixed << media << std:: endl;
    
    return 0;

}