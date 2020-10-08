#include <iostream>
#include <vector>
using namespace std;

int main() {
    int bit = (1 << 2);
    cout << bit << endl;
    int N, W;
    cin >> N >> W;

    vector<int> a(N);
    for (int i = 0; i < N; i++) cin >> a[i];

    bool exist = false;
    /*
    * 1 << N は 2^N を表す
    * ex) 1 << N = 2^1 = 2, 1 << 2 = 2^2 = 4
    */
    for (int bit = 0; bit < (1 << N); bit++) {
        int sum = 0;
        for (int i = 0; i < N; i++) {
            /*
            * & はビットAND演算子
            * ex) bit = 11、1 << i = 8の場合
            * 11 = 00001011
            *  8 = 00001000
            * -------------
            *  8 = 00001000 = true
            *
            * ex) bit = 11、1 << i = 4の場合
            * 11 = 00001011
            *  4 = 00000100
            * -------------
            *  0 = 00000000 = false
            *
            * bit & (1 << i) で、どこに「1」があるのかを判定している
            */
            if (bit & (1 << i)) {
                sum += a[i];
            }
        }

        if (sum == W) exist = true;
    }

    if (exist) cout << "Yes" << endl;
    else cout << "No" << endl;
}
