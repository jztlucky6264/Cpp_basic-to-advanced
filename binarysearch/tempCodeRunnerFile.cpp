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
                      total++;
                 }
             }
         }
     }
     
     return total;
      
}
int main()
{
    int n=7;
   int d=3;
   int arr[7] = {1, 2, 4, 5, 7, 8, 10};
   

int answer=Beautiful(arr,n,d);
cout<<answer<<endl;  
    return 0;
}
