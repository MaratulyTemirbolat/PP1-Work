#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    if(n>6){
        n = 12 - n;
    }
    cout << n *30;
    return 0;
}