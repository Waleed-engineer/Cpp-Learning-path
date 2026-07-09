#include <iostream>
using namespace std;

void draw_triangle() {
    for (int i = 1; i <= 10; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << '*';
        }
        cout << '\n';
    }
}

void draw_triangle();

int main() {
    draw_triangle();
    return 0;
}
