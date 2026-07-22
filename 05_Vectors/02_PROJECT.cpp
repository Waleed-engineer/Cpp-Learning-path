#include <iostream>
#include <vector>
#include <string>

int main() {
    int N;
    std::cin >> N;
    std::vector<std::string> backpack = {};

    
    for (int i = 0; i < N; i++) {
        std::string word;
        std::cin >> word;
        backpack.push_back(word);
    }

    int K;
    std::cin >> K;
    for (int j = 0; j < K; j++) {
        int index;
        std::cin >> index;
        std::cout << backpack[index] << " " << std::flush;
    }

    
    return 0;
}
