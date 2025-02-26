#include <iostream>

std::string getShell() {
    char* shell = getenv("SHELL");
    if (shell) {
        return std::string(shell);
    }
    return "Unknown";
}