#include<iostream>

using namespace std;

int main(){
    //Accrding to the For
    for(int i=0;i<=10;i++){
        if(i%2==0){
            cout<<" Even "<<i;
        }
        else{
            cout<<" Odd "<<i;
        }
    }
    //Accrding to the While
     int k = 10;
    while(k>=0){
        if(k%2==0){
            cout<<k<<" ";
       }
       k--;
    }
     int j=0;
   do{
       if(j%2==0){
            cout<<j<<" ";
       }
        j++;
   }while(j<=10);
    return 0;
}