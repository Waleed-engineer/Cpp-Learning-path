#include <iostream>
#include <string>

using namespace std;

int main() {
    string password1;
    string password2;
    
    cin >> password1;
    cin >> password2;

    if (password1 == password2) {
        cout << "Пароль принят. Готовы к восхождению!" << endl;
    }else {
        cout << "Пароль не принят. Проверьте страховку!" << endl;
    }
    return 0;
}
