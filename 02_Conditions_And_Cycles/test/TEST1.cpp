#include <iostream>
using namespace std;

int main() {
    long long int n, product;
    long long int product7 = 1;
    int sum = 0;
    int counter3 = 0;
    int lsdgcoun = 0; // last digit counter
    int evencounter = 0;
    int summore5 = 0;
    int sum05 = 0; // counter of 0 and 5 in n

    cin >> n; 

    int firstDigit = n % 10;
     

    while (n > 0) {
        sum = n % 10;
        n /= 10;
        
        if (sum == 3) {
            counter3 += 1;
        }
        
        if (sum == firstDigit) {
            lsdgcoun += 1;
                
        }

        if (sum % 2 == 0) {
            evencounter += 1;
        }

        if (sum > 5) {
            summore5 += sum;
        }

        if (sum > 7) {
            product7 *= sum;
        }

        if (sum == 0 or sum == 5) {
            sum05 += 1;
            
        }
    }
    cout << counter3 << endl;
    cout << lsdgcoun << endl;
    cout << evencounter << endl;
    cout << summore5 << endl;
    cout << product7 << endl;
    cout << sum05 << endl;
}
