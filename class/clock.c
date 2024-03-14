#include <stdio.h>
#include <windows.h>
int main(){
    for(int i=0;i<59;i++){
        for(int j=0;j<59;j++){
            for(int n=0;n<59;n++){
                Sleep(1000);
                printf("%d :%d :%d\n",i,j,n);
            }
        }
    }
}