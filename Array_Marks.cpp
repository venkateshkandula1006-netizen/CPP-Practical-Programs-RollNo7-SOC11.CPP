#include <iostream>
using namespace std;

int main()
{
    int marks[5];

    cout << "Enter marks of 5 subjects:" << endl;

    cin >> marks[0];
    cin >> marks[1];
    cin >> marks[2];
    cin >> marks[3];
    cin >> marks[4];

    cout << "\nArray is:" << endl;

    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    cout << marks[4] << endl;

    return 0;
}
