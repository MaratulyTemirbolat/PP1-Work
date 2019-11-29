#include<iostream>

using namespace std;

int main(){
    int a;
    int b;
    cin>>a>>b;
    int c = b %10;
    int d = b /100;
    cout<<a+c+d;
    return 0;
}