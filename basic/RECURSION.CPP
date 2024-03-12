#include <iostream>
using namespace std;

int factorial(int n);
int main()
{  
    int num;
    cout<<"enter any number to find factorial:";
    cin>>num;
    int result=factorial(num);
    cout<<"factorial of "<<num<<" is "<<result;
        return 0;
}
int factorial(int n)
{
   if(n>1){                     //RECURSIVELY OCCURING
    return n*factorial(n-1);
   }
   else{
    return 1;
   }
}