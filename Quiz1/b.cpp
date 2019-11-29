#include <iostream>
#include <cmath>
using namespace std;
int main(){
int g;
cin>>g;
if(g>0){
g*=30;
cout<<g;
}
else if (g>6) {
(g*=30)-=180;

cout<<g;
}
else {
cout<<"no";
}
return 0;

}