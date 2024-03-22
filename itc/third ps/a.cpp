#include <iostream>
using namespace std;

void y1(){
    int n,z=0,f=0;
    cin>>n;
    int a[n*n];
    for(int i=0;i<n*n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        z+=a[(i-1)*n+i-1];
        f+=a[i*(n-1)];
    }
    cout<<z<<" "<<f;
}
void y2(){
    int n,z=0,f=0;
    cin>>n;
    int a[n];
    int a2[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a2[i][j];
        }
    }
    for(int i=0;i<n;i++){
        z+=a2[i][i];
        f+=a2[i][n-i-1];
    }
    cout<<z<<" "<<f;
}
int main(){
    y2();
}