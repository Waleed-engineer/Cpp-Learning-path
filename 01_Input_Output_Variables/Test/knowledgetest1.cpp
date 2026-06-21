#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
    double r, h, d;
    string name;

    cin >> r >> h >> d >> name;

    const double PI = 3.14159;
    double volume = PI * r * r * h;
    int place = (int)(volume / d);

    cout << "Объём бочки: " << fixed << setprecision(2) << volume 
         << ", фирмы: " << name << endl;
    cout << "Количество бутылок: " << place << endl;

    return 0;
}
