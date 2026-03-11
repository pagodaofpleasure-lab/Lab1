#include <iostream>

using namespace std;

int trapezoid() {
    double base1, base2, leg1, leg2, height;

    cout << "Введите основания трапеции: ";
    cin >> base1 >> base2;

    cout << "Введите боковые стороны: ";
    cin >> leg1 >> leg2;

    cout << "Введите высоту: ";
    cin >> height;

    

    if (base1 <= 0 || base2 <= 0 || leg1 <= 0 || leg2 <= 0 || height <= 0){
        cout << "Ошибка: все значения должны быть положительными" << endl;
        return 1;
    }
    if (base1+base2+leg1<leg2 || base1+base2+leg2<leg1 || base2+leg1+leg2 <base1 || base1+leg1+leg2<base2){
    	cout << "Ошибка: нарушено правило треугольника для трапеции" << endl;
        return 1;
    }
    if (height > leg1 || height > leg2) {
    	cout << "Ошибка: высота не может быть больше любой из боковых сторон" << endl;
        return 1;
    }

    double perimeter = base1 + base2 + leg1 + leg2;
    double middleLine = (base1 + base2) / 2;
    double area = middleLine * height;

    cout << "Периметр: " << perimeter << endl;
    cout << "Средняя линия: " << middleLine << endl;
    cout << "Площадь: " << area << endl;

    return 0;
}