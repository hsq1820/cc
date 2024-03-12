#include <iostream>
using namespace std;
int main(){
    int n,num=0;
    cin>>n;
    for(int i=2;i<n;i++){
        int p=0;
        for(int j=2;j<i;j++){
            if(i%j==0){
                p=1;
                break;
            }
        }
        if (p==0)
        {
            num++;
            if(num%6!=0){
                cout<<i<<"\t";
            }else
            {
                cout<<i<<endl;
            }
            
        }
    }
    return 0;
}