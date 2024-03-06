#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float a,b,c,p,area;
    cin>>a>>b>>c;
    p=(a+b+c)/2.0;
    area=p*(p-a)*(p-b)*(p-c);
    if(area>0){
        cout.precision(0);
        cout<<fixed<<sqrt(area)<<endl;
        return 0;
    }else
    {
        return 0;
    }
}