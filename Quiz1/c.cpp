#include <iostream>
using namespace std;
int main(){
int coin = 0;
int n;
cin>>n; 
if(coin==0){
coin+=n;
if (coin%2==0){
cout<<"Eagle    ";
}
else {
cout<<"Tails    ";
}
}
return 0; 

}
