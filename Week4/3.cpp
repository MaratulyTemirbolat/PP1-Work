#include<iostream>

using namespace std;

int main(){
    int k =0;
    // for(   ;   ;   ){ // Infinite Cycle (Whothout Condition)
    //     cout<<k<<endl; 
    //     k++;     
    // }

    // while(true){
    //     cout<<k<<endl;  // Infinite Cycle for While
    //     k++;
    // }

    do{
        cout<<k<<endl;
        k++;
    }while(true);   // Infinite Cycle for "DO While"
    return 0;
}