#include <iostream>
using namespace std;

int sumofarray(int arr[],int n){
int sum=0;
for (int i = 0; i <n; i++)
{
 sum = sum+arr[i];  
}

return sum;
}

int main() {
    
int size;
cin>>size;
    int num[100];

    for (int i = 0; i <size; i++)
    {
   cin>>num[i];
    }
    
cout<<" The sum of given array is " << sumofarray(num,size); 



    return 0;
}