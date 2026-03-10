#include <iostream>
#include "triangle.h"
#include "trapezoid.h"
#include "pryam.h"

using namespace std;


int main(){
    cout << "task 2" << endl;
    triangle();
 

    //------ПРЯМОУГОЛЬНИК---------
    double a,b;
    cout << "Введите первую сторону прямоугольника ";
    cin >> a;
     cout << "Введите вторую сторону прямоугольника ";
    cin >> b;
    if(a <= 0 || b <=0){
        cout << "Строны должны быть больше 0";
        return 1;
    }
    cout << "---------Прямоугольник-------" << endl;
    cout << "Площадь:  " << area(a,b) << endl;
    cout << "Периметр: " << perimetr(a,b) << endl;
    cout << "диагональ: " << diagonal(a,b) << endl;
    
    //------ТРАПЕЦИЯ---------
    cout << "task 3" << endl;
    trapezoid();
  

}
