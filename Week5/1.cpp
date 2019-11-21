#include<iostream>

using namespace std;

int main(){
   // 1-st syntax case: int array[5];

  // 2-nd syntax case:  int array[] = {9,4,6,2,5};

  //3-rd syntax case  int array[5] = {2,3,4,1,5};

  int array[5] = {9,4,6,2,5};
  int arr[5] = {1,2,3};
  cout<<array[0]<<endl;
  cout<<array[3]<<endl;
  cout<<array[4]<<endl;
  for(int k=0;k<5;k++){
    cout<<arr[k]<<" ";
  }
    return 0;
}