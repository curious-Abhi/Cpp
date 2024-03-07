#include <iostream>
// Forward declaration of class B
class B;
// Class A declaration
class A
{
private:
    int privateMemberA = 10;
    // Declaring class B as a friend
    friend class B;

public:
    void display()
    {
        std::cout << "Class A: privateMemberA = " << privateMemberA << std::endl;
    }
};

// Class B declaration
class B
{
public:
    void accessPrivateMemberOfA(A &objA)
    {
        // Accessing private member of class A
        std::cout << "Class B accessing private member of class A: " << objA.privateMemberA << std::endl;
    }
};
int main()
{
    A objA;
    B objB;

    objA.display(); // Display the initial value of privateMemberA

    // Attempt to access private member of class A from class B
    objB.accessPrivateMemberOfA(objA);
    return 0;
}
