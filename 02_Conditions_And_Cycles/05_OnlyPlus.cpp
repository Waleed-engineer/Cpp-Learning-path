#include <iostream>
using namespace std;

int main() {
   
    double h1, h2, h3; 
    double counter = 0.0; 

    cin >> h1 >> h2 >> h3; 

    if (h1 > 0) {
        counter += h1;
    }    
    if (h2 > 0) {
        counter += h2;
    }
    if (h3 > 0) {
        counter += h3;
    }    

    
    cout << counter << endl; 

    return 0;
}
