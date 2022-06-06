#include <iostream>
using namespace std;
void upadtepointer(int *p){
    *p=*p+1;
cout<<"Inside"<<*p<<endl;
}

int getSum(int *arr, int n){

    cout<<sizeof(arr)<<endl;
    int sum=0;
    for(int i=0; i<n; i++){
        sum +=arr[i];
    }
return sum;
}
int main(int argc, char const *argv[])
{
   /*  int value=5;
    int *p=&value;

cout<<"before"<<*p<<endl;
    upadtepointer(p);
cout<<"after"<<*p<<endl; */
int arr[6]={1,2,3,4,5,8};
  cout<<"Sum of "<<getSum(arr+3,3)<<endl;
    return 0;

}
