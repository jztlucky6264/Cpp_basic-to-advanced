#include <iostream>
using namespace std;

bool Pratha(int *arr,int n,int mid,int prathaGiven){

   int time=0;
   int pratha=0;

    for (int i = 0; i < n; i++)
    {
        time=arr[i];
        int count=2;
        while(time<=mid){
            pratha++;
       time=time+ (arr[i]*count);
       count++;
        }
    if(pratha>=prathaGiven){
        
        return 1;
    } 
    }
    return 0;
}

int PrathaMake(int *arr,int n,int prathaGiven){
    int start=0;
    int end=1e8;
    int mid=start+(end-start)/2;
int ans=0;
   while (start<=end)
   {
    if(Pratha(arr,n,mid,prathaGiven)){
        ans=mid;
        end=mid-1;
    }else{
        start=mid+1;
    }
   mid=start+(end-start)/2;
   }

  return ans;
}


int main()
{
    int prathaGiven;
    cin >>prathaGiven;
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
int answer=PrathaMake(arr,n,prathaGiven);
cout<<answer<<endl;
    return 0;
}
