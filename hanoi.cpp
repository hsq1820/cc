#include <iostream>
using namespace std;

void move(int n, char a, char c){
    cout<<n<<a<<">"<<c<<endl;
}
void hanoi(int n, char a, char b, char c){
    if(n == 1) move(n,a,c);
    else{
        hanoi(n-1,a,c,b);
        move(n,a,c);
        hanoi(n-1,b,a,c);
    }
}
int main (){
    int n;
    cin>>n;
    hanoi(n,'a','b','c');
    return 0;
}