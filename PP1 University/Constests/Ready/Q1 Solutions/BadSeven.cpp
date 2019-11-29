#include<iostream>

using namespace std;

int main(){
    int a;
    int b;
    cin>>a>>b;
    for(int k =a;k<=b;k++){
        if(k%7 == 1 || k%7 == 2 || k%7 == 5){
            cout<<k<<" ";
        }
    }
    return 0;
}