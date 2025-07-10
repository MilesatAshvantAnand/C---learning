#include <iostream>
using namespace std;
/*
int main(){
    cout << "Please enter you favorite number";// stream insertion operator
    double  x = 0;
    int y = 0;
    cin >> x >> y;// >> stream extraction operator, with multiple inputs

    cout << x + y;
    return 0;
    
}*/

int main(){
    cout << "enter value in fahrenheit ";
    double farenheit;
    cin >> farenheit;
    double celcius = (farenheit-32)*5/9;
    cout << "this is celcius" << celcius << endl;

    return 0;
}