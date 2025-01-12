#include <iostream>
#include <vector> 
#include <string>

using namespace std;

int main() {
    freopen("cowsignal.in", "r", stdin);
    freopen("cowsignal.out", "w", stdout);

    int m, n, k;
    cin >> m >> n >> k;
    vector<string> signal(m);
    vector<string> new_signal(k*n);

    for(int i = 0; i < n; i++) {
        cin >> signal[i];
    }

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(signal[i][j] == 'X') {
                new_signal.push_back("X");
            }
            else {
                if(signal[i][j] == '.') {
                    new_signal.push_back(".");
                }
            }
            cout << new_signal[i][j];
        }
        cout << endl;
    }
}