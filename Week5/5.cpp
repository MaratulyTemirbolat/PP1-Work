#include<iostream>

using namespace std;

// 5
//1 2 3 4 5
//15

int main(){
    int n;
    cin>>n;
    int array[n];
    for(int k=0;k<n;k++){
        cin>>array[k];
    }
    int sum=0;
    for(int k =0 ;k<n;k++){
        sum+=array[k]; // sum = sum + array[k];
    }
    cout<<sum<<endl;
    return 0;
}