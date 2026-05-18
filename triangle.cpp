#include <iostream>
#include <cmath>

using namespace std;

int triangle() {
    double a, b, c;
    cout << "Введите три стороны треугольника: ";
    cin >> a >> b >> c;
    // проверка существования треугольника
    if (a + b > c && a + c > b && b + c > a) {
        double perimeter = a + b + c;
        double p = perimeter / 2;
        double area = sqrt(p * (p - a) * (p - b) * (p - c));
	
        cout << "Периметр: " << perimeter << endl;
        cout << "Площадь: " << area << endl;

	//апрверка равнобндренности
        if (a == b || b == c || a == c)
            cout << "Треугольник равнобедренный" << endl;
        else
            cout << "Треугольник не равнобедренный" << endl;
    } else {
        cout << "треугольник не существует" << endl;
    }
    return 0;
}
