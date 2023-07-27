#include <iostream>

int main() {
    // Store the user's body weight on Earth
    float earthbw;

    // Store a switch variable for the user's planet choice
    int planet;

    bool validInput = false;

    // Validate the user input
    while (!validInput) {
        // Ask for user's Earth body weight
        std::cout << "Input Earth body weight (kg): ";
        std::string weightInput;
        std::cin >> weightInput;

        // Try to convert the input string to a float
        try {
            earthbw = std::stof(weightInput);
            validInput = true;
        }     

        // Catch exceptions and give the user a retry prompt
        catch (const std::exception& e) {
            std::cout << "Invalid input. Please enter a valid floating-point number.\n";
        }
    }

    validInput = false;

    // Validate the user input
    while (!validInput) {
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
        std::string planetInput;
        std::cin >> planetInput;

        // Try to convert the input string to an integer
        try {
            planet = std::stoi(planetInput);
            validInput = true;
        }     

        // Catch exceptions and give the user a retry prompt
        catch (const std::exception& e) {
            std::cout << "Invalid input. Please enter a valid integer.\n";
        }
    }

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
        default:
            std::cout << "Your weight on Neptune would be: " << earthbw * 1.19 << "kg\n";                       
    }
}
