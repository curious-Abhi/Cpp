#include<iostream>
using namespace std;

int main(){
    string x="HRITHIK";
    string y="ABHISHEK";

    cout<<"X:"<<x<<"\n";
    cout<<"Y:"<<y<<"\n";
    cout<<"after swapping\n";
    
    string temp;
    temp=x;
    x=y;
    y=temp;
    cout<<"X:"<<x<<"\n";
    cout<<"Y:"<<y<<"\n";
    return 0;
}