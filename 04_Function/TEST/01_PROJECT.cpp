#include <iostream>
#include <cmath>
#include <string>

bool isPrime(long long int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    
    for (long long int g = 3; g * g <= n; g += 2) {
        if (n % g == 0) return false; 
    }
    return true;
}

std::string cycle(long long a, long long b) {
    std::string easy = "";
    long long int temp = 0;
    
    for (long long int i = a; i <= b; i++) {
        temp = i;
        int counter = 0;
        if (not isPrime(temp)) {
            continue;
        }
        
        while (temp > 0) {
            temp /= 10;
            
            if (temp > 0 && not isPrime(temp)) {
                counter += 1;
                break;
            }
        }
        
        if (counter == 0) {
            easy += std::to_string(i); 
            easy += " ";
        }
    } 
    return easy;
}

int main() {
    long long int a, b;
    std::cin >> a >> b;
    
    if (cycle(a, b) == "") {
        std::cout << 0 << std::endl;
    }
    else {
        std::cout << cycle(a, b) << std::endl;
    }
    return 0;
}
