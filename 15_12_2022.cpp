#include <iostream>
using namespace std;

void task() {
    char arr[100];
    char symbol;
    int i = 0;
    while (symbol != '\n') {
        symbol = getchar();
        arr[i] = symbol;
        i++;
    }
    cout << arr << endl;

    int letters = 0, punct = 0, nums = 0;

    for (int j = 0; j < strlen(arr); j++) {
        if (isdigit(arr[i])) {
            nums++;
        } else if (isalpha(arr[i])) {
            letters++;
        } else if (ispunct(arr[i])) {
            punct++;
        }
    }
    cout << nums << endl;
    cout << letters << endl;
    cout << punct << endl;
}