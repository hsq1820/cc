#include <iostream>
using namespace std;
int main(){
    int i,sum=0;
    do{
        cin>>i;
        sum+=i;
    }while(i);
    cout<<sum;
    return 0;
}