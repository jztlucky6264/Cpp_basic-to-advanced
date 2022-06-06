#include <iostream>
using namespace std;

bool isPossible(int arr[],int n,int mid, int k){

int painterCount=1;
int partitions=0;

for (int i = 0; i < n; i++)
{
  if (partitions+arr[i]<=mid)
  {
    partitions = partitions +arr[i];
  
  }
  else{
      painterCount++;
      if (painterCount > k || arr[i] > mid)
      {
          return false;
      }
    
      partitions+=arr[i];
  }
}
return true;
}

int Painters(int arr[],int n, int k){
int start=0;
int sum=0;
for (int i = 0; i <n; i++)
{
    sum += arr[i];
}
int end=sum;
int mid=start+ (end-start)/2;
int ans=-1;

while (start<=end)
{

if (isPossible(arr,n,mid,k))
{
         ans=mid;
         end=mid-1;         
}

else{
    start=mid+1;
}

 mid=start+ (end-start)/2;
}
return ans;
}

int main()
{
    int arr[4]={1 ,2 ,3 ,4};
 int k=2;
    cout<<Painters(arr,4,k)<<endl;
    return 0;
}
