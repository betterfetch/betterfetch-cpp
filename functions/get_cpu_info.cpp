#include <fstream>
#include <iostream>
#include <string>

std::string getCPUInfo() {
  std::ifstream cpuFile("/proc/cpuinfo");
  std::string line, cpuModel;

  if (cpuFile.is_open()) {
    while (std::getline(cpuFile, line)) {
      if (line.find("model name") != std::string::npos) {
        cpuModel = line.substr(line.find(":") + 2);
        break;
      }
    }
    cpuFile.close();
  }

  return cpuModel.empty() ? "Unknown CPU" : cpuModel;
}


// DONE getCPUInfo Works!