#include <iostream>
using namespace std;

bool isPossible(int arr[],int n,int m,int mid){
   
   int studentCount=1;
   int pagesum=0;

   for (int i = 0; i < n; i++)
   {
       if ((pagesum+arr[i]<=mid) )
       {
    pagesum = pagesum+arr[i];
    
       }else{
           studentCount++;
           if (studentCount > m || arr[i] > mid)
           {
               return false;
           }
           pagesum=0;
           pagesum+=arr[i];
       }
   }
          return true;
}

int Bookallocate(int arr[],int n,int m){
  int s=0;
  int sum=0;  

  for (int i = 0; i <n; i++)
  {
      sum=sum+arr[i];
  }

  int e=sum;
 int mid=s/2+e/2;
int ans=-1;
while (s<=e)
{
    if (isPossible(arr,n,m,mid)){
      ans=mid;
      e=mid-1;
      cout<<"hello"<<endl;
    }
    else{
        s=mid+1;
        cout<<"bye"<<endl;
    }

 mid=s+(e-s)/2;
}
return ans;
}


int main()
{
   int arr[4] = { 10,20 , 30, 40};
    int m=2;
    int answer=Bookallocate(arr,4,m);
cout<<answer<<endl;
    return 0;
}
