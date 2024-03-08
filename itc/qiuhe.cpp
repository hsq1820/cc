#include <iostream>
using namespace std;
int main(){
    int n,sum,b;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>b;
        sum+=b;
    }
    cout<<sum;
    return 0;
}