#include <iostream>
using namespace std;

int Sumup(int arr[],int s, int e){
    int sum=0;
    while (s<=e)
    {
        sum=sum+arr[s];
        s++;
    }
    return sum;    
}

int pivotIndex(int arr[],int n){    
int sum=0;

for (int i = 0; i <n; i++)
{
    sum=sum+arr[i];
}

for (int j = 0; j <n; j++)
{
     int beforeSum=Sumup(arr,0,j-1);
     int afterSum=sum-beforeSum-arr[j];
     if ( beforeSum==afterSum )
     {
         return j;
     }
     
}
return -1;
}


int main()
{
    int arr[3]={2,1,-1};
    cout<<pivotIndex(arr,3)<<" "<<endl;
    return 0;
}
