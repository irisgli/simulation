#include <iostream>
#include <vector>

using namespace std;

const int MAX_TIME = 1000;

struct Cow {
    int start, end, buckets;
};

int main() {

    freopen("blist.in", "r", stdin);
    freopen("blist.out", "w",stdout);

    int n;
    cin >> n; 
    vector<Cow> cows(n);
    for (Cow &c : cows) {
        cin >> c.start >> c.end >> c.buckets;
    }

    int max_buckets = 0;

    for (int t = 1; t <= MAX_TIME; t++) {
        int curr_buckets = 0;
        for (const Cow &c : cows) {
            if (c.start <= t && t <= c.end) {
                curr_buckets += c.buckets;
            }
        }
        max_buckets = std::max(max_buckets, curr_buckets);
    }
    cout << max_buckets << endl;
}
