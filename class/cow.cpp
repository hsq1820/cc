#include <iostream>

int countCows(int n) {
    if (n <= 3) {
        return 1;
    } else {
        int prev = 1;
        int current = 0;
        int total = 1;
        for (int i = 4; i <= n; ++i) {
            current = total;
            total += prev;
            prev = current;
        }
        return total;
    }
}

int main() {
    int n;
    std::cout << "请输入年数n：";
    std::cin >> n;

    int result = countCows(n);
    std::cout << "第" << n << "年有" << result << "头牛。" << std::endl;

    return 0;
}