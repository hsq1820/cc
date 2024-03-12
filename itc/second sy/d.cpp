#include <iostream>
using namespace std;
double face(int n);
int main(){
    int n;
    printf("Enter n: ");
    cin>>n;
    face(n);
    return 0;
}
double face(int n){
    int s=1;
    for(int i=1;i<=n;i++){
        s*=i;
        cout<<i<<"!="<<s<<endl;
    }
}