#include<iostream>
using namespace std;

// 最大公約数（greatest common divisor）
int GCD(int m, int n) {
    if (n == 0) return m;

    return GCD(n, m % n);
}

int main() {
    cout << GCD(51, 15) << endl;
    cout << GCD(15, 51) << endl;
}
