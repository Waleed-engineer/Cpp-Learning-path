#include <iostream>
using namespace std;

int main() {
    float averageGrade;
    float attendancePercentage;

    cin >> averageGrade;
    cin >> attendancePercentage;

    if (averageGrade >= 4.5) {
        if (attendancePercentage >= 90) {
            cout << "Поздравляю, ты получишь стипендию!" << endl;
        } else {
            cout << "К сожалению, стипендия не светит." << endl;
        }
    } else {
        cout << "К сожалению, стипендия не светит." << endl;
    }

    return 0;
}
