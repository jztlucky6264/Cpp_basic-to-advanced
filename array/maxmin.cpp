#include <iostream>
using namespace std;


int getMin(int arr[], int size){
  
  int minim=INT_MAX;
  for (int i = 0; i <size; i++)
  {
   
   minim=min(minim,arr[i]);
   
    /* if (arr[i]<min)
    {
        min=arr[i];
     } */
    
  }
  return minim;

}

int getMax(int arr[], int size){
  
  int maxim=INT_MIN;
  for (int i = 0; i <size; i++)
  {


maxim=max(maxim,arr[i]);

   /*  if (arr[i]>max)
    {
        max=arr[i];
     } */
    
  }
  return maxim;

}

int main() {
int size;
cin>>size;

int num[100];

for (int i = 0; i < size; i++)
{
    cin>>num[i];
}

cout<<" the max value of given array is "<<getMax(num,size)<<endl;
cout<<" the min value of given array is "<<getMin(num,size)<<endl;

    return 0;
}