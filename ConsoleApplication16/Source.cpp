#include <stdio.h>
#include <iostream>
#include <locale.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");

	int N;
	cout << "введите номер задания";
	cin >> N;
	switch (N)
	{
	case 1:
	{
		int a;
		cin >> a;
		for (int n = 1; n < 10; n++)
		{
			cout << "возвести а в степень " << n << pow(a, n) << endl;
		}
	}
	break;
	case 2:
	{
		int pod;
		cout << "сколько подьездов в доме " << endl;
		cin >> pod;
		int kv = 0;
		int kolvoj = 0, total_ploshad = 0;
		int ploshad = 0, total_kolj = 0;
		for (int i = 1; i <= pod; i++)
		{
			cout << "сколько квартир в подьезде " << i << ": ";
			cin >> kv;

			for (int j = 1; j <= kv; j++)
			{
				cout << "сколько жителей в квартире " << j << ": ";
				cin >> kolvoj;

				cout << "какая площадь вашей квартиры "  ": ";
				cin >> ploshad;

				total_kolj = total_kolj + kolvoj;
				total_ploshad = total_ploshad + ploshad;
			}



			cout << "\n общее количество жителей в " << i << " подьезде = " << total_kolj << endl;
			cout << "\n общее количество площади в " << i << " подьезде = " << total_ploshad << endl;
		}



	}
	break;
	case 3:
	{
		int factorial = 1;

		for (int i = 1; i <= 9; i++)
		{
			factorial = factorial * i;

		}
		cout << "факториал" << factorial << " = " << endl;
	}
	break;
	case 4:
	{
		int sum_s = 0;
		int n;
		cin >> n;
		for(int i = 1; i < n; i++)
		{

			sum_s += pow(n, 2);

		}
		cout << sum_s << "сумма квадратов" << endl;
	}
	break;
	case 5:
	{
		int n, kol_vo = 1;
		cout << "введите n" << endl;
		cin >> n;
		for (int i = 1; i <= n; i++)
		{
			if (i % 3 == 0 && i % 5 != 0)
			{
				cout <<  "число" << " кратно 3 и кратно 5" << endl;
			}
			else
			{
				kol_vo += kol_vo;
				cout << "число" << " Не кратно 5 и Не кратно 3" << endl;
			}

		}
	}
	break;
	}




}