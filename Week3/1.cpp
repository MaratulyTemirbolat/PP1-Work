#include<iostream>
#include<cmath>

using namespace std;

int main(){
    double n;
    cin>>n;
    if(sqrt(n) == ceil(sqrt(n))){
        cout<<"The same number"<<endl;
    }
    else if(sqrt(n) == round(n)){
        cout<<"Equal";
    }
    else{
        cout<<"WRONG"<<endl;
    }
    return 0;
}