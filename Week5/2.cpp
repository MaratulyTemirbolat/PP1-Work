#include<iostream>

using namespace std;

int main(){
    int array[4];
    array[0] = 3;
    array[2] = 4;
    array[1] = 2;
    array[3] = 7;
    for(int k=0;k<4;k++){
        cout<<array[k]<<" ";
    }
    return 0;
}