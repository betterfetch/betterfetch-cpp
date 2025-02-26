#include <iostream>
#include <fstream>

std::string getUptime() {
    std::ifstream file("/proc/uptime");
    double uptimeSeconds;
    if (file >> uptimeSeconds) {
        int hours = static_cast<int>(uptimeSeconds) / 3600;
        int minutes = (static_cast<int>(uptimeSeconds) % 3600) / 60;
        return std::to_string(hours) + "h " + std::to_string(minutes) + "m";
    }
    return "Unknown";
}

// DONE! getUpTime works