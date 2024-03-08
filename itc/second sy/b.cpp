#include <iostream>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    cout<<"Input m: ";
    cout<<"Input n: ";
    for(int i=m+1;i<n;i++){
        int t=0;
        for(int j=2;j<i;j++){
            if(i%j==0){
                t++;
            }
        }
        if(t==0){
            if(i==13||i==61){
                printf("  %4d\n",i);
            }
            else
            {
                if(i<10){
                    printf("   %4d",i);
                }else
                {
                    printf("  %4d",i);
                }
                
                
            }
        }
    }
    return 0;
}