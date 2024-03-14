#include <iostream>
#include <cstdlib>

int main() {
    std::string url = "http://www.example.com"; // Replace with your desired URL
    std::string command = "start " + url;
    
    std::cout << "Opening web page in default browser: " << url << std::endl;
    system(command.c_str());
    
    return 0;
}