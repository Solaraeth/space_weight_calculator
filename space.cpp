#include <iostream>

int main() {

    double earthbw;
    int planet;

    // Ask for user's earth body weight
    std::cout << "Input Earth body weight (kg): ";
    std::cin >> earthbw;

    // Ask user for desired planet to convert bodyweight to
    std::cout << "Planets:\n";
    std::cout << "1 = Mercury\n";
    std::cout << "2 = Venus\n";
    std::cout << "3 = Mars\n";
    std::cout << "4 = Jupiter\n";
    std::cout << "5 = Saturn\n";
    std::cout << "6 = Uranus\n";
    std::cout << "7 = Neptune\n";
    std::cout << "Input number for desired planet: ";
    std::cin >> planet;

    // Convert earthbw variable to equivelant mass on user chosen planet
    switch(planet) {
        case 1 :
            std::cout << earthbw * 0.38 << "\n";
            break;
        case 2 :
            std::cout << earthbw * 0.91 << "\n";
            break;
        case 3 :
            std::cout << earthbw * 0.38 << "\n";
            break;
        case 4 :
            std::cout << earthbw * 2.34 << "\n";
            break;
        case 5 :
            std::cout << earthbw * 1.06 << "\n";
            break;
        case 6 :
            std::cout << earthbw * 0.92 << "\n";
            break;
        case 7 :
            std::cout << earthbw * 1.19 << "\n";
        default :
            std::cout << "Invalid Input\n";
            break;



    }



}