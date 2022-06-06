#include <iostream>
using namespace std;

void updatepointer(int **p1){
 
    //p1=p1+1;
    //kuch change hoga - NO

    //*p1=*p1+1;
    //kuch change hoga -yes

    **p1=**p1+1;
    //kuch change hoga 
}


int main()
{
    int i=5;
    int* p=&i;
    int** p1=&p;
//address of i
/* cout<<"address  "<<&i<<endl;
cout<<"address  "<<p<<endl;
cout<<"address  "<<*p1<<endl; */

//value of i
/* cout<<"address  "<<i<<endl;
cout<<"address  "<<*p<<endl;
cout<<"address  "<<**p1<<endl; */

//adress of p
/* cout<<"address  "<<&p<<endl;
cout<<"address  "<<p1<<endl; */

cout<<"address  "<<i<<" "<<*p<<" "<<**p1<<endl;
cout<<"address  "<<p<<endl;
cout<<"address  "<<p1<<endl;
updatepointer(p1);
cout<<"address  "<<i<<" "<<*p<<" "<<**p1<<endl;
cout<<"address  "<<p<<endl;
cout<<"address  "<<p1<<endl;

    return 0;
}
