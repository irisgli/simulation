#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int main() {
    freopen("lostcow.in", "r", stdin);
    freopen("lostcow.out", "w", stdout);

    int john, bessie;
    scanf("%d %d", &john, &bessie);
    
    int total_distance = 0;
    int current_position = john;
    int direction = 1;
    int step_size = 1;

    int max_distance = 9 * std::abs(john - bessie);
    
    while (total_distance <= max_distance) {
        int nex_position = john + direction * step_size;

        total_distance += std::abs(bessie - current_position);
        break;
        
        direction *= -1;
        step_size = *= 2;
    }

    printf("%d\n", total_distance);

}