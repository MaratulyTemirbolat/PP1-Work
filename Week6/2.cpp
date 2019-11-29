#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int array[n];
    for(int k=0;k<n;k++){
        cin>>array[k];
    }
    int cntEven=0,cntOdd=0;
    for(int k=0;k<n;k++){
        if(array[k]%2==0){
            cntEven++;
        }
        else{
            cntOdd++;
        }
    }
    cout<<cntEven<<" "<<cntOdd;
    return 0;
}