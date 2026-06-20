#include <iostream>

using namespace std;

int main() {
    int group = 0;
    
    cin >> group;

    cout << "Общее количество единиц снаряжения для группы из " << group << " человек:" << endl;
    
    cout <<"- Рюкзаки: "<< group << endl;
    cout <<"- Карабины: "<< group * 2 << endl;
    cout <<"- Палатки: "<< (group + 1)/2 << endl;
    cout <<"- Спальники: "<< group << endl;
    return 0;
}
