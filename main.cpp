#include <iostream>
#include <cmath>
#define USE_MATH_DEFINES               // M_PI  M_E - 2.71
using namespace std;

//                                                           pi     e
//Create a program that determines which number is greater: e  or pi

int main()
{
    double pi = 3.14159265359, result1, result, e = exp(1);
    result1 = pow(e,pi);
    result = pow(pi,e);

    if (result>result1) {
        cout<<"e raised pi is greater";
          }
    else {
        cout<<"pi raised e is greater";
         }
    return 0;
}
