#include <iostream>
using namespace std;
bool isPossible(int arr[], int n,int m,int mid){
    int sum=0;
    
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>=mid){
         sum +=arr[i]-mid;   
                   }
    }
   if (sum>=m)
   {
       return true;
   }else return false;
}
int Ekko(int arr[],int n,int m){
int start=0;
int maxNo=-1;
for (int  i = 0; i < n; i++)
{
    maxNo=max(maxNo,arr[i]);
}
int end=maxNo;
int mid= start+ (end-start)/2;
int ans=-1;
while (start<=end)
{
    if(isPossible(arr,n,m,mid)){
        ans=mid;
     start=mid+1;
    }else{
end=mid-1;  
    }
    mid= start+ (end-start)/2; 
}
return ans;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int m;
    cin>>m;
   cout<< Ekko(arr,4,m)<<endl;

    return 0;
}
