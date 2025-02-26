#include <fstream>
#include <iostream>
#include <string>

std::string getMemoryInfo() {
    std::ifstream meminfo("/proc/meminfo");
    std::string line;
    long totalMem = 0, freeMem = 0;
    while (std::getline(meminfo, line)) {
        if (line.find("MemTotal:") != std::string::npos) {
            totalMem = std::stol(line.substr(line.find(":") + 1));
        }
        if (line.find("MemAvailable:") != std::string::npos) {
            freeMem = std::stol(line.substr(line.find(":") + 1));
        }
    }
    return std::to_string((totalMem - freeMem) / 1024) + "MB / " + std::to_string(totalMem / 1024) + "MB";
}

// DONE! getMemoryInfo works!