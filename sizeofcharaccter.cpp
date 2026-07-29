#include <iostream>
using namespace std;

int main() {
    cout << "Size of bool         : " << sizeof(bool) << " byte(s)" << endl;
    cout << "Size of char         : " << sizeof(char) << " byte(s)" << endl;
    cout << "Size of signed char  : " << sizeof(signed char) << " byte(s)" << endl;
    cout << "Size of unsigned char: " << sizeof(unsigned char) << " byte(s)" << endl;

    cout << "Size of short int    : " << sizeof(short int) << " byte(s)" << endl;
    cout << "Size of int          : " << sizeof(int) << " byte(s)" << endl;
    cout << "Size of long int     : " << sizeof(long int) << " byte(s)" << endl;
    cout << "Size of long long int: " << sizeof(long long int) << " byte(s)" << endl;

    cout << "Size of float        : " << sizeof(float) << " byte(s)" << endl;
    cout << "Size of double       : " << sizeof(double) << " byte(s)" << endl;
    cout << "Size of long double  : " << sizeof(long double) << " byte(s)" << endl;

    cout << "Size of wchar_t      : " << sizeof(wchar_t) << " byte(s)" << endl;
     

    return 0;
}