#include <iostream>
using namespace std;

int main() {
    //initialize a variable by --Datatype Name = value--
    int a = 1;
    int b = 2;
    //cost variables cannot be altered later only at origin
    const int c = 32;
    c = 45;
    cout << c;
    return 0;
}