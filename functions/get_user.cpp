#include <iostream>
#include <string>
#include <sys/utsname.h>
#include <unistd.h>

std::string getUserName() {
    char* username = getenv("USER");
    if (username) {
        return std::string(username);
    }
    return "Unknown";
}

std::string getHostName() {
    char hostname[256];
    if (gethostname(hostname, sizeof(hostname)) == 0) {
        return std::string(hostname);
    }
    return "Unknown";
}