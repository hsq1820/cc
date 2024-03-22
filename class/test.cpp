#include <iostream>
using namespace std;

void t1(int x){
    cout<<++x;
}
int main()
{
    int x=0;
    t1(x);
    t1(x);
    return 0;
}