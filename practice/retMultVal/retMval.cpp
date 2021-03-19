#include <iostream>
#include <tuple>

using namespace std;

tuple<int, float, string> foo()
{
    return {129, 3.142, "Hello"};
}

int main()
{
    auto [value1, value2, value3] = foo();
    cout << value1 << ", " << value2 << ", " << value3 << endl;
    return -1;
}