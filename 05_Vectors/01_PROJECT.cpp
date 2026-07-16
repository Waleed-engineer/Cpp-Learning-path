#include <vector>
#include <iostream>
#include <string>

int main() {
    std::vector<int> backpack = {};
    int N; 
    std::cin >> N;
    int num;

    for (int i = 0; i < N; i++) {
        std::cin >> num;
        backpack.push_back(num);
    }

    
    for (int j = N - 1; j >= 0; j--) {
        std::cout << backpack[j] << ' ' << std::flush;
    }

    
}
