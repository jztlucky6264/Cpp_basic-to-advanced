#include<iostream>
using namespace std;
 int main(){
     
   
float n1,n2;
cout << " enter two numbers " << endl;
cin>> n1 >> n2;

char op;
cout<<"input a operator sign :";
cin >> op;

switch (op)
{
case '+':
    std::cout << n1+n2 << std::endl;
    break;
    case '-':
    std::cout << n1-n2 << std::endl;
    break;
    case '*':
    std::cout << n1*n2 << std::endl;
    break;
    case '/':
    std::cout << n1/n2 << std::endl;
    break;

default:
std::cout << "please enter valid sign !" << std::endl;
    break;
}

    return 0;
}

