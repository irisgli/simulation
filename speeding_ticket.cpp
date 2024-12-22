#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>

using namespace std;

int main() {
    freopen("speeding.in", "r", stdin);
    freopen("speeding.out", "w", stdout);

    int n, m;
    scanf("%d %d", &n, &m);

    vector <int> road_limit(100, 0);
    vector <int> bessie_speed(100, 0);

    int index = 0;
    for(int i = 0; i < n; i++){
        int length, speed;
        scanf("%d %d", &length, &speed);
        for (int j = 0; j < length; j++) {
            road_limit[index++] = speed;
        }
    }

    index = 0;
    for (int i = 0; i < m; i++) {
        int length, speed;
        scanf("%d %d", &length, &speed);
        for (int j = 0; j < length; j++) {
            bessie_speed[index++] = speed;
        }
    }

    int max_over_speed = 0;
    for (int i = 0; i < 100; i++) {
        if(bessie_speed[i] > road_limit[i]) {
            max_over_speed = std::max(max_over_speed, bessie_speed[i] - road_limit[i]);
        }
    }
    
    cout << max_over_speed;
}

