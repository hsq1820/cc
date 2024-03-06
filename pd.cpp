#include <iostream>
using namespace std;
int main(){
    char i;
    i = getchar();
    if (i>47&&i<=57) printf("数字字符");
    else if (i==char(32))
    {
        printf("空格");
    }else if (i>=65&&i<=90)
    {
        printf("大写字母");
    }else if (i>96&&i<123)
    {
        printf("小写字母");
    }else printf("其他字符");
    return 0;
}