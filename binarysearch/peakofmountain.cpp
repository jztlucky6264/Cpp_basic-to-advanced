#include <iostream>
using namespace std;
void peakIndex(int arr[],int n){

int start=0,end=n-1;
int mid=start + (end-start)/2;
while (start<end)
{
    if (arr[mid]<arr[mid+1])
    {
     start=mid+1;
    }else{
        end=mid;
    }
       mid=start + (end-start)/2;
  
}

cout<<start<<endl;
}
int main()
{
    int arr[4]={3,4,5,1};
    peakIndex(arr,4);
    return 0;
}
