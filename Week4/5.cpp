#include<iostream>

using namespace std;

int main(){
    //Prime Number
    int n;
    cin>>n;
    bool Ok = true;
    for(int k=2;k<n;k++){
        if(n%k==0){
            Ok = false;
        }
    }
    if(Ok == true){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}