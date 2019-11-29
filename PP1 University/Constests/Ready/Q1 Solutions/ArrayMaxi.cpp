#include<iostream>
#include<cmath>

using namespace std;

//Iput: 5
//      1 2 4 6 7
//Output: 7
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int k=0;k<n;k++){
        cin>>array[k];
    }
    int Maxi = array[0];
    for(int k=0;k<n;k++){
        Maxi = max(Maxi,array[k]);
    }
    cout<<Maxi;
    return 0;
}