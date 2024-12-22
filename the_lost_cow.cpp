#include <iostream>
#include <cstdio>
#include <cmath> 

using namespace std;

int main() {
    freopen("lostcow.in", "r", stdin);
    freopen("lostcow.out", "w", stdout);

    int john, bessie;
    cin >> john >> bessie;

    int total_distance = 0;
    int current_position = john;
    int direction = 1; 
    int step_size = 1;

    while (true) {
        int next_position = john + direction * step_size;

        if ((direction == 1 && current_position <= bessie && bessie <= next_position) || 
            (direction == -1 && next_position <= bessie && bessie <= current_position)) {
            total_distance += abs(bessie - current_position);
            break;
        } else {
            total_distance += abs(next_position - current_position);
            current_position = next_position; 
            direction *= -1; 
            step_size *= 2; 
    }

    cout << total_distance << endl;
    return 0;
}
