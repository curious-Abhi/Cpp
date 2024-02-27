#include<iostream>
using namespace std;

//CREATING  A CLASS
class MyClass {
    public:
      int myNum;
      string myString;
};

int main(){
    MyClass myObj;  //CREATING A OBJECT
    
    // Access attributes and set values
  myObj.myNum = 15; 
  myObj.myString = "Some text";

  // Print attribute values
  cout << myObj.myNum << "\n";
  cout << myObj.myString;

  return 0;

}
