#include <iostream>
using namespace std;

void swapAlternate(int arr[],int n){
 
 int start=0;
 int end=1;
 
 while (end<=n-1)
 {
   int temp=arr[start];
   arr[start]=arr[end];
   arr[end]=temp;
     start= start+2;
     end=end+2;
 }
}
void printarray(int arr[] , int n){

  for (int i = 0; i < n; i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
 
}

int main() {

 int arr[6]={1,2,3,4,5,6};

  swapAlternate(arr,6);

  printarray(arr,6);
    return 0;
}