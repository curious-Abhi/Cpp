#include <iostream>
//#include <vector>
using namespace std;

//typedef

/*typedef std::string myname;
int main() {
myname name="abhishek";
std::cout<<name<<'\n';
}*/

/*typedef int num;
int main(){
num age=45;
cout<<age;
}*/

// replace typedef by using

/*using text_t=std::string;
using number=int ;
int main(){
    text_t name="abhishek";
    number age=45;
    cout<<name<<'\n';
    cout<<age;
}*/

//TYPE CONVERSION:- converting value of one data type to another
//                 Implicit=Automatic
//                 Explicit=precede value with new data type(int)

int main(){
   

   // int x=3.14;
   //double x=3.14;
  // double x = (int) 3.14;  //due to type conversion its OUTPUT IS 3.
  //cout<<x;

  //BEST EXAMPLE
 // int correct=8;
 // int question=10;
  //double score=correct/question*100;
  // above output is zero due to int questions 

  // now type conversion ke baad
  //double score=correct/(double)question*100;
  // output is 80
 
  //cout<<score<<"%";
  //taking input from user

 /* std::string name="what is your name";
  int age;
  cout<<name;
  cin>>name;
  cout<<"hello  "  <<name<<'\n';
  
  cout<<"what is your age?";
  cin>>age;
  cout<<"i am "<<age<<"years old.";
*/

/* std::string name;
int age;
cout<<"what's your name?";
cin>>name;

cout<<"what's your age?";
cin>>age;

cout<<"hello "<<name<<'\n';
cout<<"i am "<<age<<" years old";  */

/*std::string name;
int age;

cout<<"what's your age?";
cin>>age;

cout<<"what's your name?";
cin>>name;



cout<<"hello "<<name<<'\n';
cout<<"i am "<<age<<" years old";
*/


/* std::string name;
int age;
cout<<"what's your full name?";
//cin>>name;                     // TO AVOID THIS    
getline(cin,name);            

cout<<"what's your age?";
cin>>age;

cout<<"hello "<<name<<'\n';
cout<<"i am "<<age<<" years old"; */                      // OUTPUT
 //                                                               what's your full name? ABHISHEK KUMAR
 //                                                               what's your age?hello ABHISHEK
 //
 //                                                                i am 0 years old

// lets move second to first 

/*std::string name;
int age;

cout<<"what's your age?";  // at first 
cin>>age;


cout<<"what's your full name?";
getline(cin>>ws,name);            



cout<<"hello "<<name<<'\n';
cout<<"i am "<<age<<" years old";  */


    
    return 0;
}

