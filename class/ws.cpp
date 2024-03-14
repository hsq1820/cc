#include <iostream>
using namespace std;

int main(){
    int n,ws=0,b,in=1;
    cin>>n;
    for(int i=1;;i++){
        in*=10;
        b=n%in/(in/10);
        if(b==0){
            break;
        }else
        {
            ws++;
        }
    }
    cout<<ws;
    return 0;
}