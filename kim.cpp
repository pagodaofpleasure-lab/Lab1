#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double r, a;
    const double PI = 3.1415926535;

    cout << "Введите радиус и угол сектора: ";
    cin >> r >> a;

    cout << "Длина: " << 2 * PI * r << endl;
    cout << "Площадь круга: " << PI * r * r << endl;
    cout << "Площадь сектора: " << (PI * r * r * a) / 360.0 << endl;
	//testing
    return 0;
}
