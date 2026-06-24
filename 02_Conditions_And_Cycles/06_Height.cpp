#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    long long int h1, h2;
    
    cin >> h1 >> h2;
    
    cout << fixed << setprecision(2); 
    
    if (h1 > h2) {
        cout << "Наименьшая высота: " << h2 << endl;
    }
    else {
        cout << "Наименьшая высота: " << h1 << endl;
    }
}
