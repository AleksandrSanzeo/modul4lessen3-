#include <stdio.h>
#include <iostream>
#include <locale.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");

	int N;
	cout << "������� ����� �������";
	cin >> N;
	switch (N)
	{
	case 1:
	{
		int a;
		cin >> a;
		for (int n = 1; n < 10; n++)
		{
			cout << "�������� � � ������� " << n << pow(a, n) << endl;
		}
	}
	break;
	case 2:
	{
		int pod;
		cout << "������� ��������� � ���� " << endl;
		cin >> pod;
		int kv = 0;
		int kolvoj = 0, total_ploshad = 0;
		int ploshad = 0, total_kolj = 0;
		for (int i = 1; i <= pod; i++)
		{
			cout << "������� ������� � �������� " << i << ": ";
			cin >> kv;

			for (int j = 1; j <= kv; j++)
			{
				cout << "������� ������� � �������� " << j << ": ";
				cin >> kolvoj;

				cout << "����� ������� ����� �������� "  ": ";
				cin >> ploshad;

				total_kolj = total_kolj + kolvoj;
				total_ploshad = total_ploshad + ploshad;
			}



			cout << "\n ����� ���������� ������� � " << i << " �������� = " << total_kolj << endl;
			cout << "\n ����� ���������� ������� � " << i << " �������� = " << total_ploshad << endl;
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
		cout << "���������" << factorial << " = " << endl;
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
		cout << sum_s << "����� ���������" << endl;
	}
	break;
	case 5:
	{
		int n, kol_vo = 1;
		cout << "������� n" << endl;
		cin >> n;
		for (int i = 1; i <= n; i++)
		{
			if (i % 3 == 0 && i % 5 != 0)
			{
				cout <<  "�����" << " ������ 3 � ������ 5" << endl;
			}
			else
			{
				kol_vo += kol_vo;
				cout << "�����" << " �� ������ 5 � �� ������ 3" << endl;
			}

		}
	}
	break;
	}




}