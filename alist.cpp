#include <iostream>
#include <cstdlib>

int main() {
    std::string directory = "D:\\software\\alist";
    std::string command = "cd /d " + directory + " && alist server";
    system(command.c_str());
    return 0;
}