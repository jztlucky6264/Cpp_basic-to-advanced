#include <iostream>
using namespace std;

void getPrint(int arr[],int n, int start=3){
    for (int i=start; i<n; i++){
        cout<<arr[i]<<endl;
    }
    {
        /* code */
    }
    
}

int main(int argc, char const *argv[])
{
    int arr[5]={1,2,3,4,5};
    int size=5;
    getPrint(arr,size);
    return 0;
}
