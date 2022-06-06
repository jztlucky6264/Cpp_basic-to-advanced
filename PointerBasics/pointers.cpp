#include <iostream>
using namespace std;

int main()
{
   /*  int num=5;
   int *p=&num;
    cout<<num<<endl;
    cout<<" Address of num is : "<< &num <<endl;
    cout<<" Pointer of Address of num is : "<< *&num <<endl;
    cout<<"  "<< *p <<endl;
    cout<<"  "<< p <<endl;

//double type

double d=4.6;
double *ptr=&d;

    cout<<d<<endl;
    cout<<" Address of d is : "<< &d <<endl;
    cout<<" Pointer of Address of d is : "<< *&d <<endl;
    cout<<"  "<< *ptr <<endl;
    cout<<"  "<< ptr <<endl;

//size of data types and their pointers
cout<<" size of integer num  "<< sizeof(num) <<endl;
cout<<" size of double d  "<< sizeof(d) <<endl;
    cout<<" size of pointer of integer "<< sizeof(p) <<endl;
    cout<<" size of pointer of double "<< sizeof(ptr) <<endl;
    

 */
/* 
//num ki value dusre variable m copy kre ke usko ++ krde to num pe effect ayega ki nhi
int num=5;
int a=num;
cout<<"num before increment of a "<<num<<endl;
    a++;
cout<<"num after increment of a "<<num<<endl;


// if pointer ko hi dusre variable m copy kr ke uski value increment kre to
int *ptr=&num;
int dum=*ptr;
cout<<"num before increment of dum "<<num<<endl;
cout<<"num before increment of dum "<<ptr<<endl;
  dum++;
cout<<"num after increment of dum "<<num<<endl;
cout<<"num after increment of dum "<<ptr<<endl;
    
    //if pointer ki value ko inc. kre to
    int *p=&num;
cout<<"num before increment of p "<<num<<endl;
(*p)++;
cout<<"num after increment of p "<<num<<endl;


    //copying a pointer in new pointer

    int *q=p;
    cout<< q <<" - "<< p <<endl;
    cout<< *q <<" - "<< *p <<endl;

  //increase the pointer
 int sum =10;
  int *z=&sum;
cout<<"num before increment of z "<<z<<endl;
z++;
cout<<"num after increment of z "<<z<<endl;
 */
/* 
int firstvalue = 5, secondvalue = 15;
    char thirdvalue = 'a';
    int * p1, * p2;
    char * p3;
    p1 = & firstvalue; // p1 = address of firstvalue
    p2 = & secondvalue; // p2 = address of secondvalue 
    p3 = & thirdvalue; // p3 = address of thirdvalue
    * p1 = 10; // value pointed to by p1 = 10
    * p2 = * p1; // value pointed to by p2 = value pointed to by p1
    p1 = p2; // p1 = p2 (value of pointer is copied)
    * p1 = 20; // value pointed to by p1 = 20
    * p3 = 'b'; // value pointed to by p3 = ‘b ’
    cout << "firstvalue is " << firstvalue << endl;
    cout << "secondvalue is " << secondvalue << endl;
    cout << "thirdvalue is " << thirdvalue << endl;
    cout<<p1<<" "<<p2<<" "<<p3<<endl;
    cout<<*p1<<" "<<*p2<<" "<<*p3<<endl;
  */
/* float f = 10.5;
float p = 2.5;
float* ptr = &f;
(*ptr)++;
*ptr = p;
cout << *ptr << " " << f <<" "<< p;
 */
//new question

/* int *ptr = 0;
int a = 10;
*ptr = a;
cout << *ptr << endl; */
 
/*  int a[] = {1, 2, 3, 4};
cout << *(a) << " " << *(a+1); */
 
  /* char b[] = "xyz";
char *c = &b[0];
cout << *c << endl; */
    
    
   /*  
     char arr[20];
  int i;
  for(i = 0; i < 10; i++) {
    *(arr + i) = 65 + i;
  }
  *(arr + i) = '\0';
  cout << arr;
     */
    /*   char st[] = "ABCD";
  for(int i = 0; st[i] != '\0'; i++) {
     cout << st[i] << *(st)+i << *(i+st) << i[st];
  } */
/* int arr[5]={2,5,7,11,17};
  cout<< arr+1 <<endl;
  cout<< *(arr)+1<<endl;
  cout<< &arr[1]<<endl;
       */      
   
  /*  int temp[10];

   cout<<"size of temp "<<sizeof(temp)<<endl;
   cout<<"size of *temp "<<sizeof(*temp)<<endl;
   cout<<"size of &temp "<<sizeof(&temp)<<endl;

   cout<<"address of temp "<<&temp<<endl;

int *p=&temp[0];


   cout<<"size of p "<<sizeof(p)<<endl;
   cout<<"size of *p "<<sizeof(*p)<<endl;
   cout<<"size of &p "<<sizeof(&p)<<endl;
   cout<<"address of p "<<p<<" "<<&p<<endl;
 */
int arr[10];

//arr=arr+1 it is not possible due to arr is array type
/* 
int *p=&arr[0];
cout<<"pointer address "<<p<<endl;
p=p+1;
cout<<"pointer address "<<p<<endl;
     */
    char ch[6] = "abcde";
    cout<<ch<<endl;
    char *p=&ch[0];
    cout<<*p<<endl;
    p=p+1;
    cout<<*p<<endl;

    char temp = 'z';
    cout<<temp<<endl;
    
    char *ptr=&temp;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    ptr=ptr+1;
    cout<<*ptr<<endl;
    cout<<ptr<<endl;
    
    
    return 0;

}
