/* #include <iostream>
using namespace std;

void uniqueElement(int arr[],int n){
  

for (int i = 0; i < n; i++)
{
      int count=0;
    for (int j =0; j <n; j++)
    {
        if (arr[j]==arr[i])
        {
           count++;
        }
        
    }
    if (count==1)
    {
       cout<<arr[i]<<endl;
    }
}


  

}


int main() {

 int arr[15]={1,1,13,13,15,15,15,15,15,13,14,14,14,3,2};

    uniqueElement(arr,15);

    return 0;
} */
#include <iostream>
using namespace std;

void uniqueElement(int arr[],int n){
  int countArr[10];

for (int i = 0; i < n; i++)
{
     int count=0; 
    for (int j =0; j <n; j++)
    {
        if (arr[i]==arr[j])
        {
           count++;
        }
    }
    cout<<count<<" ";
 cin >> countArr[count];
    }
    int inc;
    for (int Z = 0; Z <10; Z++)
    {
      cout<<countArr[Z]<<" ";
  for (int X = 0; X <10; X++)
  {
  if (countArr[Z]==countArr[X])
  {
    inc++;
  }
  
  }
    }
    
    if (inc==0)
  {
    cout<<"true"<<endl;
  }else{
    cout<<"false"<<endl;
  }
    
}


int main() {

 int arr[10]={1,2,2,3,3,3,7,7,7,7};

    uniqueElement(arr,10);

    return 0;
}