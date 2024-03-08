#include <iostream>
using namespace std;

int main(){
    for (int i=1;i<1001;i++){
        int fac=0;
        int fa[1000];
        int count=0;
        for (int j=1;j<i;j++){
            if(i%j==0){
                fac+=j;
                fa[count]=j;
                count++;
            }
        }
        if(fac==i){
            printf("%d its factors are ", i);
            for(int j=0;j<count;j++){
                printf("%d",fa[j]);
                if(j<count-1){
                    printf(",");
                }
            }
            printf(".\n");
        }
    }
    return 0;
}