#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double a,b,c,drta,x1,x2;
    cin>>a>>b>>c;
    drta=b*b-4*a*c;
    if (drta>=0) {
        x1=(sqrt(drta)-b)/2/a;
        x2=(-sqrt(drta)-b)/2/a;
        printf("x1 = %f\n",x1);
        printf("x2 = %f",x2);
    }else
    {
        printf("NO");
    }
    return 0;
}