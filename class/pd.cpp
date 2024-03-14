#include <iostream>
using namespace std;
int main(){
    char i;
    scanf("%c",&i);
    if (i>47&&i<=57) printf("Digit");
    else if (i==char(32))
    {
        printf("Blank Space");
    }else if (i>=65&&i<=90)
    {
        printf("Uppercase Letter");
    }else if (i>96&&i<123)
    {
        printf("Lowercase Letter");
    }else printf("Others");
    return 0;
}