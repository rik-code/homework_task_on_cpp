#include <iostream>

using namespace std;

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

