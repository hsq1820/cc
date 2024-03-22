#include <iostream>
using namespace std;
int main(){
    int a[10];
    for(int i=0;i<10;i++){
        cin>>a[i];
    }
    for(int i=1;i<=9;i++){
        cout<<a[i]-a[i-1]<<" ";
        if(i%3==0){
            cout<<endl;
        }
    }
    return 0;
}