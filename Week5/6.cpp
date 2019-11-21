#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int array[n];
    for(int k=0;k<n;k++){
        cin>>array[k];
    }
    for(int k=0;k<n;k++){
        if(k%2==1){
            cout<<array[k]<<" ";
        }
    }
    return 0;
}