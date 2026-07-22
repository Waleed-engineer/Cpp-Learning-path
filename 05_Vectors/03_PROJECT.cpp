#include <iostream>
#include <vector>

bool isEven(int x) {
    return x % 2 == 0;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::vector<int> numbers;
    int num;

    // 1. Считываем числа до -1
    while (std::cin >> num && num != -1) {
        numbers.push_back(num);
    }

    if (numbers.empty()) {
        return 0;
    }

    int even_count = 0;
    int odd_count = 0;
  
    while (true) {
        even_count = 0;
        odd_count = 0;

        for (int x : numbers) {
            if (isEven(x)) {
                even_count++;
            } else {
                odd_count++;
            }
        }

        if (even_count == odd_count && !numbers.empty()) {
            numbers.pop_back();
        } else {
            break;
        }
    }

    if (even_count > odd_count) {
        for (int &x : numbers) {
            if (!isEven(x)) {
                x -= 1;
            }
        }
    } else if (odd_count > even_count) {
        for (int &x : numbers) {
            if (isEven(x)) {
                x += 1;
            }
        }
    }

    for (size_t i = 0; i < numbers.size(); ++i) {
        std::cout << numbers[i] << (i + 1 == numbers.size() ? "" : " ");
    }
    std::cout << "\n";

    return 0;
}
