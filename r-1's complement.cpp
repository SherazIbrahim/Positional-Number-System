// r-1's complement.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include <string>
using namespace std;

int main()
{
	int base;
	cout << "1.Binary Number\n2.Decimal number\n3.Octal Number" << endl;
	cin >> base;
	if (base == 1)
	{
		int number;
		cout << "Enter the number : ";
		cin >> number;
		int num = number;
		int total = 0;
		while (num != 0)
		{
			int x = num % 10;
			num = num / 10;
			total++;
		}
		int subfrm = 0;
		for (int i = 1; i <= total; i++)
		{
			subfrm = subfrm * 10;
			subfrm = subfrm + 1;
		}
		cout << "Your answer = " << subfrm - number << endl;
	}
	else if (base == 2)
	{
		int number;
		cout << "Enter the number : ";
		cin >> number;
		int num = number;
		int total = 0;
		while (num != 0)
		{
			int x = num % 10;
			num = num / 10;
			total++;
		}
		int subfrm = 0;
		for (int i = 1; i <= total; i++)
		{
			subfrm = subfrm * 10;
			subfrm = subfrm + 9;
		}
		cout << "Your answer = " << subfrm - number << endl;
	}
	else if (base == 3)
	{
		int number;
		cout << "Enter the number : ";
		cin >> number;
		int num = number;
		int total = 0;
		while (num != 0)
		{
			int x = num % 10;
			num = num / 10;
			total++;
		}
		int subfrm = 0;
		for (int i = 1; i <= total; i++)
		{
			subfrm = subfrm * 10;
			subfrm = subfrm + 7;
		}
		cout << " Answer = " << subfrm - number << endl;
	}
	system("pause");
	return 0;
}

