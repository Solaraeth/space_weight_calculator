#include <iostream>

int main() {

    // Store the user's body weight on Earth
    float earthbw;

    // Store a switch variable for the user's planet choice
    int planet;

    // Ask for user's Earth body weight
    std::cout << "Input Earth body weight (kg): ";
    std::cin >> earthbw;

    // Ask user for desired planet to convert body weight to
    std::cout << "Planets:\n" 
                "1 = Mercury\n"
                "2 = Venus\n"
                "3 = Mars\n"
                "4 = Jupiter\n"
                "5 = Saturn\n"
                "6 = Uranus\n"
                "7 = Neptune\n"
                "Input number for desired planet: ";
    std::cin >> planet;

    // Convert Earth body weight variable to equivalent mass on user's chosen planet
    switch(planet) {
        case 1 :
            std::cout << "Your weight on Mercury would be: " << earthbw * 0.38 << "kg\n";
            break;
        case 2 :
            std::cout << "Your weight on Venus would be: " << earthbw * 0.91 << "kg\n";
            break;
        case 3 :
            std::cout << "Your weight on Mars would be: " << earthbw * 0.38 << "kg\n";
            break;
        case 4 :
            std::cout << "Your weight on Jupiter would be: " << earthbw * 2.34 << "kg\n";
            break;
        case 5 :
            std::cout << "Your weight on Saturn would be: " << earthbw * 1.06 << "kg\n";
            break;
        case 6 :
            std::cout << "Your weight on Uranus would be: " << earthbw * 0.92 << "kg\n";
            break;
        case 7 :
            std::cout << "Your weight on Neptune would be: " << earthbw * 1.19 << "kg\n";
        default :
            std::cout << "Invalid Input\n";
            break;
    }
}