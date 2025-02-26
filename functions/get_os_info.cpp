#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <sys/utsname.h>
#include <unistd.h>


std::string getOSInfo() {
    struct utsname buffer;
    if (uname(&buffer) == 0) {
        return std::string(buffer.sysname) + " " + buffer.release;
    }
    return "Unknown";
}

// DONE! getOSInfo works