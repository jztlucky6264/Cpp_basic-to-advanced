#include <iostream>
using namespace std;

void SortArray(int arr[],int n){
int  low=0,high=n-1, mid=0;
while (mid<=high){

if (arr[mid]==0)
{
    swap(arr[mid],arr[low]);
    mid++;
    low++;
    continue;
}
if (arr[mid]==1)
{
    mid++;
    continue;
}
if(arr[mid]==2)
{
    swap(arr[mid],arr[high]);
    high--;
    continue;
}

}
}
void PrintArray(int arr[],int n){

    for (int i = 0; i <n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main()
{
    int arr[10]={0,2,2,1,0,1,1,0,2,2};

    SortArray(arr,10);
    PrintArray(arr,10);

    return 0;
}
