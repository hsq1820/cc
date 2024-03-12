#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    double sum;
    for(int i=1;i<2*n;i+=2){
        sum+=1.0/i;
    }
    cout.precision(6);
    cout<<fixed<<"Enter n: sum="<<sum;
}