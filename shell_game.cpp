#include <iostream>
#include <cstdio>
#include <vector>
#include <fstream>
using namespace std;

int main() {
    freopen("shell.in", "r", stdin);
    freopen("shell.out", "w", stdout);

    int n;
    scanf("%d", &n);

    vector<int> shell_at_pos(3);
    for(int i = 0; i < 3; i++) {
        shell_at_pos[i]= i;
    }

    vector<int> counter(3);
    for(int i = 0; i < n; i++) {
        int a, b, g;
        scanf("%d %d %d", &a, &b, &g);

        a--, b--, g--;

        std::swap(shell_at_pos[a], shell_at_pos[b]);
        counter[shell_at_pos[g]]++;
    }
    printf("%d\n", std::max({counter[0], counter[1], counter[2]}));
} 

