#include <iostream>
using namespace std;

void printArray(int arr[],int size){

/* cout<<" Printing the array"<<endl; */
for (int i = 0; i <size; i++)
{
   /*  cout<<arr[i]<<" "; */
    
}

}


int main() {
int n=15;
  int arr[10];

/*   cout <<arr[22]<<endl; */
 
  int second[15]={1,2,3,4};
 
  printArray(second,15);
  
 int third[15]={0};

 int secondsize= sizeof(third)/sizeof(int);

/*  cout<<" size of third is "<< secondsize<< endl; */

 printArray(third, 15);

 int fourth[15]={1};

 printArray(fourth,15);


    return 0;
}