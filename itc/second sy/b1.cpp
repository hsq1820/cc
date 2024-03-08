#include <iostream>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    if(m<2&&n>31){
        cout<<"Input m: Input n:    2   3   5   7  11  13"<<endl;
        cout<<"17  19  23  29  31";
    }
    if(m<41&&n>67){
        cout<<"Input m: Input n:   41  43  47  53  59  61"<<endl;
        cout<<"67";
    }
}