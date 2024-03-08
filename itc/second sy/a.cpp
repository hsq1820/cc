#include <iostream>
using namespace std;
int reverse(int num);
int main(){
    int num;
    while(cin>>num){
        cout<<reverse(num)<<endl;
    }
    return 0;
}
int reverse(int num){
    int a=1;
    if(num<0){
        num=-num;
        a=-1;
    }
    float n=(float)num;
    num=(int)n;
    int b=num/1000;
    int c=num%1000/100;
    int d=num%100/10;
    int e=num%10;
    if(b!=0){
        return a*(e*1000+d*100+c*10+b);
    }else if (c!=0)
    {
        return a*(e*100+d*10+c);
    }else if (d!=0)
    {
        return a*(e*10+d);
    }else{
        return a*e;
    }
}