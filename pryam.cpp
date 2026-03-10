#include <iostream>
#include <cmath>

using namespace std;

double area(double a,double b) {
    return a * b;
}
double perimetr(double a, double b){
    return 2 * (a+b);
}
double diagonal(double a,double b){
    return sqrt(a*a + b*b);
}