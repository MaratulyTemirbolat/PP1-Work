#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int cntEven =0,cntOdd=0;
    for(int k=0;k<n;k++){
        int a;
        cin>>a;
        if(a%2==0){
            cntEven++;
        }
        else{
            cntOdd++;
        }
    }
    cout<<cntEven<<" "<<cntOdd<<endl;
    return 0;
}