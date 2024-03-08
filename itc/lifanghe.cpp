#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    
    for(int n=100;n<1000;n++){
        a=n/100;
        b=n%100/10;
        c=n%10;
    
        if(n==a*a*a+b*b*b+c*c*c){
            cout<<n<<endl;
        }
    }
    
    return 0;
}