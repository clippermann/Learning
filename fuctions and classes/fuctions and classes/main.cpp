

#include <iostream>
#include <cmath>
#include "playwithclasses.hpp"
using namespace std;

int main(){
    /*
    double x = 2.5, y;
    y = pow(x,3.0); //2.5^3
    cout << y << endl;
    
    double a = 1, b, c;
    b = atan(a); //arctan
    cout << b << endl;
    c = b/3.1415;
    cout << c << endl;
    
    double ss, ls, angle;
    cout << "Please input lenth of shortside:" << endl;
    cin >> ss;
    cout << "Please input lenth of longside:" << endl;
    cin >> ls;
    angle = asin(ss/ls);
    cout << "The angle is " << angle/3.1415 << "π" << endl;
   */
    Area mo;
    mo.oneside=4;
    mo.anotherside=5;
    mo.Calculateare();
    double arctan;
    arctan=atan(mo.oneside/mo.anotherside); //public variable can be quoted?
    cout << arctan << endl;
    cout << "input a number" << endl;
    cin >> mo.oneside;
    cout << "input another number" << endl;
    cin >> mo.anotherside;
    mo.Calculateare();
}
