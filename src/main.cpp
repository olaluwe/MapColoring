#include "../include/MapColoring.h"  // Make sure this class has the necessary methods
#include "../include/Constants.h"

int main() {
    // Since Constants' members are static, access them directly without an instance
    std::vector<std::string> states = Constants::States;
    std::vector<std::string> colors = Constants::Colors;
    std::map<std::string, std::vector<std::string>> adjacency = Constants::Adjacency;

    std::map<std::string, std::string> assignment;

    // Initialize assignment map
    for (const std::string& state : states) {
        assignment[state] = "None";
    }
  
    MapColoring mapColoring;  // Assuming MapColoring class can handle the coloring task
    // recursively call cartographicColoring in order to color the map
    if (mapColoring.cartographicColoring(0, states, colors, assignment, adjacency)) {
        // If coloring succeeded, print the results
        std::cout << "The provided map can be colored as follows: " << std::endl;
        for (const auto& entry : assignment) {
            std::cout << entry.first << " - " << entry.second << std::endl;
        }
    } else {
        std::cout << "Failed to color the map." << std::endl;
    }

    return 0;
}
