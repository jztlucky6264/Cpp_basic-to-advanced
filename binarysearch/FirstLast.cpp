#include <iostream>
using namespace std;


    int FirstOcc(int arr[],int n,int key){

    int start=0,end=n-1;
    int  mid=start + (end-start)/2;
        int ans=-1;
        while (start<=end)
        {
            if(arr[mid]==key){
                ans=mid;
                end=mid-1;
            }
            else if (arr[mid]>key)
            {
                end=mid-1;
            
            }
            else if (arr[mid]<key)
            {
                
                start=mid+1;
            }
            mid=start + (end-start)/2;
        }     
    return ans;

    }

int LastOcc(int arr[],int n,int key){

int start=0,end=n-1;
  int mid=start/2 + end/2;
     int ans=-1;
     while (start<=end)
     {
        if(key==arr[mid]){
             ans=mid;
             start=mid+1;
        }
        else if (key<arr[mid])
        {
            end=mid-1;
        }
        else if (key>arr[mid])
        {
            start=mid+1;
        }
           mid=start/2 + end/2;
     }
     
return ans;

} 
int main()
{
    
int arr[9]={1,2,3,3,3,3,3,3,9};
   
   cout<<" The First occurence of key is "<<FirstOcc(arr,9,3)<<endl;
   cout<<" The Last occurence of key is "<<LastOcc(arr,9,3)<<endl;
  return 0;
}
