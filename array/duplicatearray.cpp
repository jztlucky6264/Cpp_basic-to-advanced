#include <iostream>
using namespace std;

void duplicateElement(int arr[],int n){
int m=1;

    for (int i = 0; i < n; i++)
    {

       for (int j=m; j < n; j++)
       {
           if ( arr[j]==arr[i])
           {
             
             cout<<arr[i]<<endl;
           }
       }
       m++;
    }
    
}

int main() {

 int arr[5]={1,3,3,4,3};

duplicateElement(arr,5);
    return 0;
}