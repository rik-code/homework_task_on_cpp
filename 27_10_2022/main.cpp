#include <iostream>

using namespace std;

int randint (int min, int max) {
    return rand() % (max - min) + min; // эту формулу нужно просто запомнить
}

// задача №1
void task_1()
{
    int n, sum = 0;
    cin >> n ;
    for (int i=0; i<=n; i++)
    {
        sum+=i;
    }
    cout << sum << endl;
}

// задача №2
void task_2() {
    int array[100];
    int neg = 0, pos = 0, even = 0;
    for (int i = 0; i < 100; i++) {
        array[i] = randint(-20, 100);
        cout << array[i] << endl;
    }
    cout << endl;
    for (int i = 0; i < 100; i++) {
        if (array[i] < 0) {
            neg++;
        }
        if (array[i] > 0){
            pos++;
        }
        if (array[i] % 2 == 0) {
            even++;
        }
    }
    cout << neg << endl;
    cout << pos << endl;
    cout << even << endl;
}

// задача №3
void task_3() {
    int array[100];
    int sum=0;
    for (int i = 0; i < 100; i++) {
        array[i] = randint(-20, 100);
        cout << array[i] << endl;
    }
    for (int i = 0; i < 10; i++) {
        sum+=array[i];
    }
    cout << sum << endl;
}