#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int array[n];
    for(int k=0;k<n;k++){
        cin>>array[k];
    }
    int cnt=0;
    for(int k=0;k<n;k++){
        if(array[k]>0){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}