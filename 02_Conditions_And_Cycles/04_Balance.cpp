#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int one = n % 10;
    int two = (n / 10) % 10;
    int three = (n / 100) % 10;
    int four = (n / 1000) % 10;
    if (one + four == three - two) {
        cout << "ДА" << endl;
    }else{
        cout << "НЕТ" << endl;
    }
    return 0;
}  
