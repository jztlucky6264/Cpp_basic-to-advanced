#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[6]={0 ,3 ,4, 7 ,10 ,9};
    int ans=-1;
    int maxNO=INT_MIN;
    int minNO=INT_MAX;

    for(int i=0; i<6;i++){
         maxNO = max(maxNO,arr[i]);
        minNO = min(minNO,arr[i]);
    }
    ans=maxNO-minNO;
  cout<<ans<<endl;

    return 0;
}
