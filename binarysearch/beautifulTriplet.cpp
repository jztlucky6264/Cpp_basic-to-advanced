#include <iostream>
using namespace std;
int Beautiful(int arr[],int n,int d){
int total=0;

     for (int i = 0; i <n; i++)
     {
         for (int j = i+1; i < n; j++)
         {
             if (arr[j]-arr[i]==d){
                 for (int k = j+1; k < n; k++)
                 {
                  if (arr[k]-arr[j]==d)  
                      total=total+1;
                 }
             }
         }
     }
     
     return total;
      
}
int main()
{
    int n;
    cin>>n;
   int d;
   cin>>d;
   int arr[n];
   for (int e = 0; e < n; e++)
   {
       cin>>arr[e];
   }
   
   

int answer=Beautiful(arr,n,d);
cout<<answer<<endl;  
    return 0;
}
