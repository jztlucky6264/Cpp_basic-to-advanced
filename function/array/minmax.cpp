#include <iostream>
#include <climits>
using namespace std;

int  main() {

  int n;
  cin>>n;

  int array[n];

  for (int i = 0; i <n; i++)
  {
     cin>>array[i];
  }
  
int minNo=INT_MAX;
int maxNo=INT_MIN;

for (int i = 0; i < n; i++)
{

    maxNo=max(maxNo,array[i]);
    minNo=min(minNo,array[i]);
}

cout<<maxNo<<" "<<minNo;
   return 0;
}