#include <iostream>
#include <vector>
//#include <string>

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
    do {
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
            planet = std::stoi(planetInput) - 1;
            validInput = true;

            // Check if user input is within valid range
            if (planet < 0 || planet > 6) {
                validInput = false;
                std::cout << "Invalid input. Please enter a value between 1 and 7.\n";
            }
        }     

        // Catch exceptions and give the user a retry prompt
        catch (const std::exception& e) {
            std::cout << "Invalid input. Please enter a valid integer.\n";
        }
    } while (!validInput);

    std::vector<std::string> planetName = {"Mercury", "Venus", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    std::vector<float> multiplier = {0.38, 0.91, 0.38, 2.34, 1.06, 0.92, 1.19};


    std::cout << "Your weight on " << planetName[planet] << " would be: " << earthbw * multiplier[planet] << "kg\n";

}
