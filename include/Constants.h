#include <vector>
#include <string>
#include <map>

class Constants
{ 
public:
  static const std::vector<std::string> States;
  static const std::vector<std::string> Colors;
  static const std::map<std::string, std::vector<std::string>> Adjacency;
};

// Initialize static members outside the class definition
const std::vector<std::string> Constants::States = {
    "Western Australia", "North Territory", "South Australia", "Queensland",
    "New South Wales", "Victoria"
};

const std::vector<std::string> Constants::Colors = {"Red", "Green", "Blue"};

const std::map<std::string, std::vector<std::string>> Constants::Adjacency = {
    {"Western Australia", {"South Australia", "North Territory"}},
    {"North Territory", {"Queensland", "South Australia", "Western Australia"}},
    {"Queensland", {"New South Wales", "South Australia", "North Territory"}},
    {"South Australia", {"North Territory", "Western Australia", "Queensland", "New South Wales", "Victoria"}},
    {"New South Wales", {"Queensland", "South Australia", "Victoria"}},
    {"Victoria", {"South Australia", "New South Wales"}}
};
