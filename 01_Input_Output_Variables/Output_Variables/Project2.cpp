#include <iostream>

using namespace std;

int main() {
    int pin = 0;
    cin >> pin;
    int number1 = pin / 10;
    int number2 = pin % 10;
    cout << number1 + number2 << ' ' << number1 * number2 << endl;
    return 0;
}
