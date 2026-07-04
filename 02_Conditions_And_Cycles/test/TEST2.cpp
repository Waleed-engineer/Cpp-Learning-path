#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int Num_Of_Levels;
    cin >> Num_Of_Levels;
    
    double height;
    int difficulty;
    double height_counter = 0;
    long long int stamina = 1000;
    int counter = 0;

    bool flag = true;

    while (flag) {
        cin >> height >> difficulty;
        
        if (difficulty == 10) {
            cout << "Уровень " << counter + 1 << " слишком сложный. Пропускаем." << endl;
            
            counter += 1; 
            
            
            if (counter == Num_Of_Levels) {
                flag = false;
                cout << "Поздравляем! Вы достигли вершины!" << endl;
                cout << "Общая высота: " << fixed << setprecision(2) << height_counter << " м" << endl;
                cout << "Остаток выносливости: " << stamina << " единиц" << endl;
            }
            
            continue; 
        }
        
        stamina -= difficulty * 10;
        
        if (stamina <= 0) {
            cout << "Восхождение прервано на уровне " << counter + 1 << "." << endl;
            cout << "Пройдено высоты: " << fixed << setprecision(2) << height_counter << " м" << endl;
            flag = false;
        }    

        
        if (flag) {
            height_counter += height;
        }
        
        counter += 1;
        if (counter == Num_Of_Levels && flag) {
            flag = false;
            cout << "Поздравляем! Вы достигли вершины!" << endl;
            cout << "Общая высота: " << fixed << setprecision(2) << height_counter << " м" << endl;
            cout << "Остаток выносливости: " << stamina << " единиц" << endl;
        }
    }
    return 0;
}
