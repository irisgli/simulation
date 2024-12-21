#include <iostream>
#include <vector>
#include <cstdio> 
#include <algorithm>
using namespace std;

int main() {
    freopen("mixmilk.in", "r", stdin);
    freopen("mixmilk.out", "w", stdout);

    vector <int> capacity(3);
    vector <int> milk(3);
    int new_amount, to, from; 

    for(int i = 0; i < 3; i++) {
        scanf("%d %d", &capacity[i], &milk[i]);
    }

    for(int i = 0; i < 100; i++){

        for(int i = 0; i < 100; i++) {
            int from = i % 3;
            int to = (i + 1) % 3;
        }
        new_amount = milk[from] + milk[to];
        
        if(new_amount <= capacity[to]){
            milk[to] = new_amount;
            milk[from] = 0;
        }
        else {
            milk[to] = capacity[to];
            milk[from] = new_amount - capacity[to];
        }
    }

    for(int i = 0; i < 3; i++) {
        printf("%d\n", milk[i]);
    }

}