#include "functions/load.hpp"
#include <iostream>

int main() {
  displayAsciiArt("ascii.txt");
  std::cout << "User:  " << getUserName() << std::endl;
  std::cout << "Host:  " << getHostName() << std::endl;
  std::cout << "OS:  " << getOSInfo() << std::endl;
  std::cout << "Kernel:  " << getKernelVersion() << std::endl;
  std::cout << "CPU: " << getCPUInfo() << std::endl;
  std::cout << "Shell: " << getShell() << std::endl;
  std::cout << "Memory:  " << getMemoryInfo() << std::endl;
  std::cout << "GPU: " << getGPUInfo() << std::endl;
  std::cout << "Uptime:  " << getUptime() << std::endl;
  return 0;
}
