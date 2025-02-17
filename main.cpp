#include "functions/load.hpp"
#include <iostream>

int main() {
  displayAsciiArt("ascii.txt");
  std::cout << "CPU: " << getCPUInfo() << std::endl;
  return 0;
}
