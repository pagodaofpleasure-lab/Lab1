#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double r, a;
    const double PI = 3.14;

    cout << "Введите радиус и угол сектора";
    cin >> r >> a;
    if (r <= 0){
        cout << "Ошибкa" << endl;
    }
    else if (a <= 0 || a > 360) {
        cout << "Ошибка:" << endl;
    } 
    else {
        cout << "Длина окружности: " << 2 * PI * r << endl;
        cout << "Площадь круга: " << PI * r * r << endl;
        cout << "Площадь сектора: " << (PI * r * r * a) / 360.0 << endl;
    }

    return 0;
}
