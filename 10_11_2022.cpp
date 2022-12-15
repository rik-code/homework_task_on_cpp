#include <iostream>
#include <cmath>

using namespace std;

void n_1 () {
    int n, i = 1;
    cin >> n;
    while (i*i <= n) {
        cout << i << " ";
        }
        i++;
    }

void n_2 () {
    int i = 2, n;
    cin >> n;
    while (i <= n) {
        if (n % i == 0) {
            cout << i;
            break;
        }
        i++;
    }
}
