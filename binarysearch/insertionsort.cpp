#include <iostream>
using namespace std;
int SelectionSort(int arr[],int n){
    int i=1;
    while (i<n)
    {
        int temp=arr[i];
        int j=i-1;
        while(j>=0){
            if (arr[j]>temp)
            {
                arr[j+1]=arr[j];
            }else{
                break;
            }
            j--;
        }
        arr[j+1]=temp;
        i++;
    }
    
}
int printArray(int arr[],int n){

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
 int arr[5]={10,20,30,40,4};
 int size=5;
 SelectionSort(arr,size);
printArray(arr,size);
    return 0;
}
