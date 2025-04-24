// ConsoleApplication27.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	int c;
	int s;
	cin >> s;
	cin >> c;
	int** array = new int* [c];
	for (int i = 0;i < c;i++) {
		array[i] = new int [s];
		
	}
	for (int i = 0;i < c;i++) {
		for (int j = 0;j < s;j++) {
			array[i][j] = i + j;
		}
	}
		for (int i = 0;i < c;i++) {
			for (int j = 0;j < s;j++) {
				cout<<array[i][j]<<"";
			}
			cout<<endl;
	}
		int summ = 0;
		for (int i = 0;i < c;i++) {
			for (int j = 0;j < s;j++) {
				summ += array[i][j];
			}
		}
		cout << "summ = " << summ;

		int sredneyye = c*s;
			  int average = summ / sredneyye;
		cout << "sredneyye arifmetik = " << average;

}