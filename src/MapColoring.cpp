#include "../include/MapColoring.h"

MapColoring::MapColoring() {
    // Constructor - might be used to initialize internal data structures or state
}

MapColoring::~MapColoring() {
    // Destructor - perform any cleanup of resources if necessary
}

bool MapColoring::isAssignmentValid(const std::string& state, const std::string& color, 
                                    const std::map<std::string, std::string>& stateColorAssignment, 
                                    const std::map<std::string, std::vector<std::string>>& stateAdjacency) {
    for (const std::string& neighbor : stateAdjacency.at(state)) {
        auto it = stateColorAssignment.find(neighbor);
        if (it != stateColorAssignment.end() && it->second == color) {
            return false;
        }
    }
    return true;
}

bool MapColoring::cartographicColoring(int currentStateIndex, const std::vector<std::string>& states, 
                                       const std::vector<std::string>& colors, 
                                       std::map<std::string, std::string>& stateColorAssignment, 
                                       const std::map<std::string, std::vector<std::string>>& stateAdjacency) {
    if (static_cast<std::vector<std::string>::size_type>(currentStateIndex) == states.size()) {
        // for (const auto& a : stateColorAssignment) {
        //     std::cout << a.first << ": " << a.second << std::endl;
        // }
        return true;
    }

    const std::string& state = states[currentStateIndex];
    for (const std::string& color : colors) {
        if (isAssignmentValid(state, color, stateColorAssignment, stateAdjacency)) {
            stateColorAssignment[state] = color;
            if (cartographicColoring(currentStateIndex + 1, states, colors, stateColorAssignment, stateAdjacency)) {
                return true;
            }
            stateColorAssignment.erase(state); // Backtrack
        }
    }
    return false;
}