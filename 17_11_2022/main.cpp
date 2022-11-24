#include <iostream>
using namespace std;

int randint(int start, int end) {
    int num = start + rand() % (end - start + 1);
    return num;
}

void task_1() {
    const int size = 20;
    int array[size];

    srand(time(NULL));
    for (int i = 0; i < size; i++) {
        array[i] = randint(-20, 20);
        cout << array[i] << ", ";
    }
    cout << endl;

    int sum = 1;
    for (int i = 0; i < size; i+=2) {
        sum*=array[i];
    }
    cout << "composition: " << sum << endl;

    int sum1 = 0;
    for (int i = 0; i < size; i+=2) {
        sum1+=array[i];
    }

    cout << "sum: " << sum1 << endl;
}