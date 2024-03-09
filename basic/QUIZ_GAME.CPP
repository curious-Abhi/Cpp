#include <iostream>
#include <string>
using namespace std;

int main()
{
    string questions[] = {
        "1. What is the difference between C and C++?",
        "2. What is the significance of the 'main' function in C++?",
        "3. Explain the concept of inheritance in C++.",
        "4. What are the access specifiers in C++?",
        "5. What is the use of 'this' pointer in C++?",
        "6. What is the purpose of the 'virtual' keyword in C++?",
        "7. Explain the concept of polymorphism in C++.",
        "8. What is a constructor in C++?",
        "9. What is the 'const' keyword used for in C++?",
        "10. What is a reference variable in C++?",
        "11. What are namespaces in C++?",
        "12. What is the difference between 'cout' and 'cin' in C++?",
        "13. What is the role of 'delete' operator in C++?",
        "14. Explain the purpose of 'static' keyword in C++.",
        "15. What is operator overloading in C++?",
        "16. What is the use of 'try', 'catch', and 'throw' in C++ exception handling?",
        "17. What is the purpose of 'friend' keyword in C++?",
        "18. What is the difference between stack and heap memory in C++?",
        "19. Explain the concept of function overloading in C++?",
        "20. What are templates in C++?",
        "21. What is the 'auto' keyword used for in C++11?",
        "22. What are smart pointers in C++?",
        "23. What is the purpose of 'nullptr' keyword in C++11?"};

    string options[][4] = {
        {"A. C Plus Plus", "B. Object Oriented", "C. C is procedural, C++ is object-oriented", "D. C++ is an older version of C"},
        {"A. It is the starting point of the program execution", "B. It is used for printing output", "C. It is optional", "D. It initializes all variables"},
        {"A. It allows a class to inherit properties and behavior from another class", "B. It is used for memory allocation", "C. It is used for exception handling", "D. It is used for file handling"},
        {"A. public, protected, private", "B. global, local, static", "C. constant, volatile, register", "D. base, derived, parent"},
        {"A. It refers to the current object", "B. It is a keyword in C++", "C. It is used for loop iteration", "D. It is used for dynamic memory allocation"},
        {"A. It is used to declare pure virtual functions", "B. It is used for function overloading", "C. It is used for input/output operations", "D. It is used to indicate that a function can be overridden in a derived class"},
        {"A. It refers to the ability of objects to take on multiple forms", "B. It is used for error handling", "C. It is used for database operations", "D. It is used for type conversion"},
        {"A. It is a function that is called automatically when an object is created", "B. It is used for conditional statements", "C. It is a keyword in C++", "D. It is a function that returns a value"},
        {"A. It is used to declare constant variables", "B. It is used for type casting", "C. It is used for loop control", "D. It is used for memory allocation"},
        {"A. It is an alias to another variable", "B. It is a variable declared inside a function", "C. It is used for input/output operations", "D. It is a keyword in C++"},
        {"A. They are used to organize code into logical groups", "B. They are used for memory management", "C. They are used for file handling", "D. They are used for loop iteration"},
        {"A. 'cout' is used for output, 'cin' is used for input", "B. 'cout' is used for input, 'cin' is used for output", "C. They are interchangeable", "D. They are both used for file handling"},
        {"A. It is used to deallocate memory allocated by 'new'", "B. It is used to remove an element from an array", "C. It is used for pointer arithmetic", "D. It is used to delete a file"},
        {"A. It is used to declare a variable that retains its value between function calls", "B. It is used for error handling", "C. It is used for type conversion", "D. It is used to declare constant variables"},
        {"A. It allows redefining the meaning of an existing operator", "B. It allows creating a new operator", "C. It is used for function overloading", "D. It is used for exception handling"},
        {"A. They are used to handle errors and exceptions", "B. They are used for input/output operations", "C. They are used for type casting", "D. They are used for database operations"},
        {"A. It is used to declare a function or class as a friend of another class", "B. It is used for memory allocation", "C. It is used for database operations", "D. It is used for loop iteration"},
        {"A. Stack memory is static, heap memory is dynamic", "B. Heap memory is static, stack memory is dynamic", "C. They are the same", "D. They are used for the same purpose"},
        {"A. It allows defining multiple functions with the same name but different parameters", "B. It allows creating a new function", "C. It is used for type conversion", "D. It is used to define class methods"},
        {"A. They are used for type-safe generic programming", "B. They are used for error handling", "C. They are used for input/output operations", "D. They are used for loop iteration"},
        {"A. It is used for type deduction", "B. It is used for automatic memory allocation", "C. It is used for dynamic memory allocation", "D. It is used for loop iteration"},
        {"A. They are pointers that automatically deallocate memory", "B. They are pointers used for pointer arithmetic", "C. They are used for dynamic memory allocation", "D. They are used for type casting"},
        {"A. It is used to indicate a null pointer", "B. It is used for type conversion", "C. It is used for loop iteration", "D. It is used for automatic memory allocation"}};

    char answer_key[] = {'C', 'A', 'B', 'A', 'C', 'A', 'B', 'A', 'A', 'A', 'A', 'B', 'A', 'A', 'B', 'A', 'A', 'A', 'A', 'A', 'B', 'A', 'A'};

    int size = sizeof(questions) / sizeof(questions[0]);
    char guess;
    int score;

    for (int i = 0; i < size; i++)
    {
        cout << "**********************************\n";

        cout << questions[i] << "\n";

        cout << "**********************************\n";
        for (int j = 0; j < sizeof(options[i]) / sizeof(options[i][0]); j++)
        {
            cout << options[i][j] << '\n';
        }
    }

    return 0;
}
