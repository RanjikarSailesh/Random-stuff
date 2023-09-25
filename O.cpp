#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Open the input file containing the template introduction
    std::ifstream inputFile("template.txt");

    // Create the output file where the updated introduction will be saved
    std::ofstream outputFile("output.txt");

    // Check if the input file was successfully opened
    if (!inputFile) {
        std::cerr << "Error: Unable to open the input file." << std::endl;
        return 1; // Exit with an error code
    }

    // Check if the output file was successfully created
    if (!outputFile) {
        std::cerr << "Error: Unable to create the output file." << std::endl;
        inputFile.close(); // Close the input file
        return 1; // Exit with an error code
    }

    std::string line;

    // Iterate through each line in the input file
    while (std::getline(inputFile, line)) {
        size_t pos;

        // Replace placeholder {{name}} with user's name
        while ((pos = line.find("{{name}}")) != std::string::npos) {
            std::cout << "Enter your name: ";
            std::string name;
            std::cin >> name;
            line.replace(pos, 8, name);
        }

        // Replace placeholder {{age}} with user's age
        while ((pos = line.find("{{age}}")) != std::string::npos) {
            std::cout << "Enter your age: ";
            std::string age;
            std::cin >> age;
            line.replace(pos, 7, age);
        }

        // Write the updated line to the output file
        outputFile << line << std::endl;
    }

    // Close both the input and output files
    inputFile.close();
    outputFile.close();

    std::cout << "Introduction updated and saved to output.txt." << std::endl;

    return 0; // Exit with success
}
