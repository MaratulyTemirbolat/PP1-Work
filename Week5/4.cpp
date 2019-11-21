#include<iostream>

using namespace std;

int main(){
    int array[5] = {2,5,3,10,11};
    array[4] = array[0];
    array[3] = 100;
    array[1] =  array[3];
    array[0] = array[1+1+1];
    array[0] = array[(1+1+1+1+1)%3];
    array[3] = array[0] + 5;
    array[array[0]] = array[4];
    for(int k=0;k<5;k++){
        cout<<array[k]<<" ";
    }
    return 0;
}