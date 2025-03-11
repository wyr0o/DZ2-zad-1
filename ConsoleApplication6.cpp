#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string text;
	cout << "Введите текст: "<< endl;
	getline(cin, text);
	cout << "Вы ввели: " << endl;
	cout << text;
}