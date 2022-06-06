#include <iostream>
using namespace std;
void duplicate(int arr[],int n){
     int ans=0;
    for(int i=0; i<n; i++){ 
        ans=ans^arr[i];
    }
    for (int j = 1; j<n; j++)
    {
         ans=ans^j;
    }
    
   cout<< ans;
}
int main()
{
 int arr[3]={1,1,1};

    duplicate(arr,3);

    return 0;
}
