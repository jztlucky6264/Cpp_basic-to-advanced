#include <iostream>
#include <vector>
using namespace std;

void mergeArray(int arr1[],int n, int arr2[],int m,int arr3[]){
   int i=0,j=0;
   int k=0;


while (i<n && j<m)
{
if (arr1[i]<arr2[j])
{
    arr3[k++]=arr1[i++];
}else{
    arr3[k++]=arr2[j++];
}
}

//copy remaining element of arr1

while (i<n)
{
arr3[k++]=arr1[i++];
}

//copy the remaining element of arr2

while (j<m)
{
    arr3[k++]=arr2[j++];
}
}

void PrintArray(int arr3[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr3[i]<<" ";
    }cout<<endl;
    
}



int main()
{
    int arr[5]={1,3,5,7,8};
    int arr2[3]={2,4,6};
    int arr3[8]={0};
  
  mergeArray(arr,5,arr2,3,arr3);
PrintArray(arr3,8);
    return 0;
}
