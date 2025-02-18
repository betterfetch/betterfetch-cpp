#include <fstream>
#include <iostream>
#include <string>

void displayAsciiArt(const std::string &filename) {
  std::ifstream file(filename);
  if (!file) {
    std::cerr << "Error: Unable to open file: " << filename << std::endl;
    return;
  }

  std::string line;
  while (std::getline(file, line)) {
    std::cout << line << std::endl;
  } 
  file.close();
}
