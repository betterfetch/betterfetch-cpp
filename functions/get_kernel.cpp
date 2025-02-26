#include <sys/utsname.h>

std::string getKernelVersion() {
   struct utsname buffer;
    if (uname(&buffer) != 0) {
        return "Unknown";
    }
    return buffer.release;
} 


// TODO -- FIXME Write the getKernelVersion later