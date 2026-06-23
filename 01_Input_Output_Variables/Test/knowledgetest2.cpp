#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    double R, r, h, d, PI;
    string name;
    cin >> R >> r >> h >> d;
    PI = 3.14159;
    cin.ignore();
    getline(cin, name);

    double V = 1.0 / 3.0 * PI * h * (pow(R, 2) + R * r + pow(r, 2));
    double l = sqrt(pow(h, 2) + pow(R - r, 2));
    double S = PI * (R + r) * l;
    long long int tent = S / d;

    cout << fixed << setprecision(2); 
    
    cout << "Горный склон:  " << endl;
    cout << "- Объём: "<< V << endl;
    cout << "- Площадь поверхности: " << S << endl;
    cout << "- Количество палаток: " << tent  << endl;
    cout << "- Гора: " << name << endl;
    
    return 0;
}
