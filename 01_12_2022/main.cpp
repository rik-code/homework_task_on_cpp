#include <iostream>

using namespace std;

struct Advertising {
    int time = 0;
    int per = 0;
    double money = 0;
};

void number_1 () {
    string pon;
    getline(cin, pon);
    int prep = 0;

    cin >> pon;
    for (int i = 0; i < pon.length(); i++) {
        if (pon[i] == '.') {
            prep++;
        }
        if (pon[i] == ',') {
            prep++;
        }
        if (pon[i] == '!') {
            prep++;
        }
        if (pon[i] == '?') {
            prep++;
        }
        if (pon[i] == ':') {
            prep++;
        }
        if (pon[i] == ';') {
            prep++;
        }
    }
    cout << prep << endl;
}

void number_2 () {
    Advertising b;

    cin >> b.time;
    cin >> b.per;
    cin >> b.money;

    cout << b.time << endl;
    cout << b.per << endl;
    cout << b.money << endl;


    cout << endl;

    cout << b.money * b.per * b.time << endl;
}
