#include <iostream>

using namespace std;

int main() {
    long long int step;
    cin >> step;
    if (step % 2 == 0) {
        cout << "Чётный уступ. Можно двигаться уверенно!" << endl;
    }else {
        cout << "Нечётный уступ. Будьте осторожны!" << endl;
    }
}
