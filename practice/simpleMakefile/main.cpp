#include <iostream>
#include "functions.h"

using namespace std;

// g++ main.cpp hello.cpp factorial.cpp -o hello
// надо поискать что-нибудь по созданию makefile
int main(){
    print_hello();
    cout << endl;
    cout << "The factorial of 5 is " << factorial(5) << endl;
    return 0;
}