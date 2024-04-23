#ifndef MAP_COLORING_H
#define MAP_COLORING_H

#include <string>
#include <map>
#include <vector>
#include <iostream>

class MapColoring {
public:
    MapColoring();  // Constructor
    ~MapColoring(); // Destructor

    // Checks if the current color assignment to a state is valid
    bool isAssignmentValid(const std::string& state, const std::string& color, 
                           const std::map<std::string, std::string>& stateColorAssignment,
                           const std::map<std::string, std::vector<std::string>>& stateAdjacency);

    // Attempts to color a map of states ensuring no two adjacent states share the same color
    bool cartographicColoring(int currentStateIndex, 
                              const std::vector<std::string>& states, 
                              const std::vector<std::string>& colors, 
                              std::map<std::string, std::string>& stateColorAssignment,
                              const std::map<std::string, std::vector<std::string>>& stateAdjacency);
};

#endif // MAP_COLORING_H
