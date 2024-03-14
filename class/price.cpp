#include <iostream>
using namespace std;
int main()
{
    double ss,hs;
    cin>>hs;
    ss = 5.0/9*(hs-32);
    cout<<"The C-temperature is:"<<ss<<endl;
    printf("The C-temperature is:%.9f",ss);
    return 0;
}