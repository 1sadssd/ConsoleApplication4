#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main() 
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    string s;
    int m, n;

    cout << "Введіть рядок: ";
    getline(cin, s);
    cout << "Введіть m та n: ";
    cin >> m >> n;  

    s.erase(m - 1, n - m + 1);
    cout << "Результат: " << s << endl;
}


     







