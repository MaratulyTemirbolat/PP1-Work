#include<iostream>

using namespace std;

int main(){
    // Factorial of the number 
    long long n;
    cin>>n;
    long long FacTor = 1;
    if(n == 1){
        cout<<1;
    }
    else if(n == 2){
        cout<<2;
    }
    else if(n>2){
        for(long long k=1;k<=n;k++){
            FacTor *=k; // Factor = Factoe* k;
        }
        cout<<FacTor<<endl;
    }
    return 0;
}