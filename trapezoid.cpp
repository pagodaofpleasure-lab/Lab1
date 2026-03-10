#include <iostream>

using namespace std;

int trapezoid() {
    double a, b, c, d, h;

    cout << "Введите основания трапеции (a и b): ";
    cin >> a >> b;

    cout << "Введите боковые стороны (c и d): ";
    cin >> c >> d;

    cout << "Введите высоту (h): ";
    cin >> h;

    
    if (a <= 0 && b <= 0 && c <= 0 && d <= 0 && h <= 0) {
        cout << "Ошибка: все значения должны быть положительными" << endl;
        return 1;
    }

    double perimeter = a + b + c + d;
    double middleLine = (a + b) / 2;
    double area = middleLine * h;

    cout << "Периметр: " << perimeter << endl;
    cout << "Средняя линия: " << middleLine << endl;
    cout << "Площадь: " << area << endl;

    return 0;
}
