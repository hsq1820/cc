#include <iostream>
using namespace std;

int h(int x,int n){
    int h0=1;
    int h1=2*x;
    int h2=2*x*h1-2*(n-1)*h0;
    for(int i=0;i<n-2;i++){
        h0=h1;
        h1=h2;
        h2=2*x*h1-2*(n-1)*h0;
    }
    return h2;
}
int main(){
    int x,n;
    cin>>x>>n;
    cout<<h(x,n);
    return 0;
}