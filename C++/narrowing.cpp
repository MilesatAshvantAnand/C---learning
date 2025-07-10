//narrowing is making larger data types into smaller ones
#include <iostream>
using namespace std;

int main (){
    int million = 1'000'000;
    short mill = million;// results in 16890 which is 2 bytes
    short mil { million}; // compile error
    cout << mill << endl; 
    return 0;
}