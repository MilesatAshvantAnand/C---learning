#include <iostream>
using namespace std;

int main(){
    /*
    int a = 16;
    int b = 13;
    //to print int a = 16 to the console we can
    cout << "int a = " << a << endl //endl starts a new line 
         << "int b = " << b;

    cout << endl;
    return 0;*/

    // exersize
    const double sales = 95000;

    cout << "sales = " << sales << endl
         << "state tax = " << (sales*0.04) << endl
         << "county tax = " << (sales*0.02) << endl;
    return 0;
}