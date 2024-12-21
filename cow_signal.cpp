#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;

int main() {

    freopen("cowsignal.in", "r", stdin);
    freopen("cowsignal.out", "w", stdout);

    int m, n, k;
    scanf("%d %d %d", &m, &n, &k);

    vector<string> signal(m);
    for(int i = 0; i < m; i++) {
        cin >> signal[i];
    }

    for(int i = 0; i < k * m; i++) {
        for(int j = 0; j < k * n; j++) {
            int originalRow = i / k;
            int originalCol = j / k;

            cout << signal[originalRow][originalCol];
        }
        cout << endl;
    }
}
