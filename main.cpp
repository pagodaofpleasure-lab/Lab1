#include <iostream>
#include "triangle.h"
#include "trapezoid.h"
#include "pryam.h"

using namespace std;


int main(){

    cout << "task 1" << endl;
        //------ПРЯМОУГОЛЬНИК---------
    double a,b;
    cout << "Введите первую сторону прямоугольника " << endl;
    cin >> a;
     cout << "Введите вторую сторону прямоугольника " << endl;
    cin >> b;
    if(a <= 0 || b <=0){
        cout << "Строны должны быть больше 0";
        return 1;
    }
    cout << "---------Прямоугольник-------" << endl;
    cout << "Площадь:  " << area(a,b) << endl;
    cout << "Периметр: " << perimetr(a,b) << endl;
    cout << "диагональ: " << diagonal(a,b) << endl;


     //------Треугольник---------
    cout << "task 2" << endl;
    cout << "---------Треугольник-------" << endl;
    triangle();

    
    //------ТРАПЕЦИЯ---------
    
    cout << "task 3" << endl;
     cout << "---------ТРАПЕЦИЯ-------" << endl;
    trapezoid();
  

}
