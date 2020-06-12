#include <iostream>
#include <string>
using namespace std;
static int count = 10; /* Global variable */
const float PI_val = 3.14286;

float circle_area(int radius, float PI_val){
    float area;
    area = PI_val * radius * radius;
    cout << " The area of circle is  " << area << endl;
    return 0;
}

int main(){
    char op_type;
    char test;
    float length, width, height, radius, area;
    bool continue_op = true;
    while(continue_op){
        cout << "Enter the operation type" << endl;
        cout << "A. Area of circle" << endl;
        cout << "B. Area of square" << endl;
        cout << "C. Area of cube" << endl;
        cout << "D. Area of cuboid" << endl;
        cin >> op_type;

        switch (op_type)
        {
        case 'A':
            cout << "-------Circle-------" << endl;
            cout << "Enter the radius:" << endl;
            cin >> radius;
            area = PI_val * radius * radius;
            cout << "\n" << endl;
            cout << "The area of circle is: " << area << endl;
            break;
        case 'B':
            cout << "-------Square-------" << endl;
            cout << "Enter the length:" << endl;
            cin >> length;
            area = length * length;
            cout << "\n" << endl;
            cout << "The area of square is: " << area << endl;
            break;
        case 'C':
            cout << "-------Cube-------" << endl;
            cout << "Enter the length:" << endl;
            cin >> length;
            area = length * length * length;
            cout << "\n" << endl;
            cout << "The area of square is: " << area << endl;
            break;
        case 'D':
            cout << "-------Cuboid-------" << endl;
            cout << "Enter the length:" << endl;
            cin >> length;
            cout << "Enter the width:" << endl;
            cin >> width;
            cout << "Enter the height:" << endl;
            cin >> height;
            area = length * width * height;
            cout << "\n" << endl;
            cout << "The area of square is: " << area << endl;
            break;

        default:
            break;
        }
        cout << "Do you want to quit" << endl;
        cin >> test;
        if(test == 'Y'){
            continue_op = false;
        }else{
            continue_op = true;
        }
    }
    
    return 0;
}