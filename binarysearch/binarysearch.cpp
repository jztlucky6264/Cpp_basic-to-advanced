#include <iostream>
using namespace std;

int BinarySearch(int arr[],int size , int key){

    int start=0,end=size-1;
    int mid=start/2 + end/2;
    while (start<=end)
    {
        if (arr[mid]==key)
        {
    return mid;
        }
        if (key>arr[mid])
        {
        start=mid+1;
        }else{
            end=mid-1;
        }
        mid=start/2 + end/2;
        
    }
  return -1;
}


int main()
{
    int arr[7]={1,2,3,7,8,9,19};
    
    int index= BinarySearch(arr,7,6);
cout<< "Index of key is " <<index<<endl;
    return 0;
}
