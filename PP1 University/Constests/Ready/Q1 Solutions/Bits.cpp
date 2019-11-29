#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int array[4];
    for(int k=0;k<4;k++){
        array[k] = n%2;
        n/=2;
    }
    for(int k=0;k<4;k++){
        cout<<array[k]<<" ";
    }
    // Fininsh by yourself
    return 0;
}