#include <iostream>
#include <cstdlib>
#include <windows.h>

int main() {
    system("start alist.exe");
    Sleep(2000);
    system("start alist-update.exe");
    return 0;
}