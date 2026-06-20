#include <iostream>

using namespace std;

int main() {
    int t = 0;
    int v = 0;
    
    cin >> t;
    cin >> v;
    int S = (t + 2 * v) * (t + 2 * v) - t * v;
    cout << "Контрольная сумма: " << S << endl;
    return 0;
}
    
