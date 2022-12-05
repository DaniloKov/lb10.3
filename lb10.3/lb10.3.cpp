// lb10.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Написати програму, яка обчислює вирази за двома формулами. Попередньо підготуйте тестові приклади для другої формули з допомогою калькулятора (результати обчислення за двома формулами мають співпадати).
//завдання 15 
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    //"виводимо формулу на екран"
    cout << "Данно дві формули(дивитись в 3 завданні під номером 15)"<<endl;
    //запросимо b змінну
    double b, z1, z2;
    cout << "задайте значення b:";
    cin >> b;
    z1 = sqrt(2 * b + 2 * sqrt(pow(b, 2) - 4)) / (sqrt(pow(b, 2) - 4) + b + 2);
    z2 = 1 / (sqrt(b + 2));
    cout << "z1=" << z1 << endl;
    cout << "z2=" << z2 << endl;
    cout << "Як бачимо відповіді у нас збігаються";
    
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
