#include<iostream>

using namespace std;

int main(){
    int n;
    long long sum =1;
    bool ok = true;
    while(ok){
        cin>>n;
        if(n == 0){
            ok = false;
        }
        else{
            sum*=n; // sum = sum * n;
        }
    }
    cout<<sum<<endl;
    return 0;
}