#include <iostream>

using namespace std;

int a, b;
int c;
float f;
short int i;
short unsigned int j;
int main(){
    a= 10; b=5;
    typedef int age;
    age senior = 55;
    j = 50000;
    i = j;
    enum color {red, green=5, blue};
    std::cout << "Hello World !!! Your age is " << senior << "\n";
    std::cout << "Size of char : " << sizeof(char) << endl;
    std::cout << "Size of int : " << sizeof(int) << endl;
    std::cout << "Size of short int : " << sizeof(short int) << endl;
    std::cout << "Size of long int : " << sizeof(long int) << endl;
    std::cout << "Size of float : " << sizeof(float) << endl;
    std::cout << "Size of double : " << sizeof(double) << endl;
    std::cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;
    std::cout << "Size of Blue : " << blue << endl << "Size of Red : " << red << endl;
    std::cout << "Size of A : " << a << endl << "Size of B : " << b << endl << i << endl;
    return 0;
}