#include<iostream>

using namespace std;

int main(){
    // Find All numbers which are divisible by 3 from to "a" tp "b";
    //a = 0    b = 100
    // int a,b;
    // cin>>a>>b;
    // for(int k=a ; k<=b;k++){
    //     if(k%3==0)
    //         cout<<k<<" ";
    // }

    // n = 5   a = 0   b = 100
    //The number of dividers 
    int n,a,b;
    cin>>n>>a>>b;
    int cnt =0;
    while(a<=b){
        if(a%n==0 && a!=0)
            cnt++;
        a++;
    }
    cout<<cnt<<endl;
    return 0;
}