// Lab_03_4.cpp 
// Лазенко Юрій 
// Лабораторна робота № 3.4 
// Розгалуження, задане плоскою фігурою. 
// Варіант 12 
#include <iostream> 
using namespace std;
int main()
{
    double x; // вхідний аргумент 
    double y; // вхідний параметр 
    double R;
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    cout << "R = "; cin >> R;


    // розгалуження в повній формі 
    if ((pow(x + R, 2) + pow(y - R, 2) >= pow(R, 2) && y >= 0) || (pow(x - R, 2) + pow(y + R, 2) >= pow(R, 2) && y <= 0))
        cout << "yes" << endl;
    else
        cout << "no" << endl;
    cin.get();
    return 0;
}
