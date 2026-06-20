#include <iostream>

using namespace std;

int main() {
    int n = 0;
    cin >> n;

    int P = n / 100;       // Сотни
    int p = (n / 10) % 10; // Десятки
    int O = n % 10;        // Единицы

    // Вычисляем значение
    int result = (P + O) * p - (P * O);

    cout << "Эффективная высота для " << n << " м: " << result << " у.е." << endl;
    
    return 0;
}
