// Number system.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include <string>
#include <math.h>
using namespace std;


double calc(int base, int num, int power)
{
	double bp = pow(base, power);
	 bp = bp * num;
	return bp;
}

bool search(string str, char ch)
{

	for (int i = 0; i <= ((str.length()) - 1); i++)
	{
		if (ch == str[i])
		{
			return true; 
		}
	}
	return false; 
}

int indexes(string str, char ch)
{
	for (int i = 0; i <= ((str.length()) - 1); i++)
	{
		if (ch == str[i])
		{
			return i;
		}
	} 
}

int  chartoint(char cha)
{
	if (cha == '0')
	{
		return 0; 
	}
	else if (cha == '1')
	{
		return 1; 
	}
	else if (cha == '2')
	{
		return 2;
	}
	else if (cha == '3')
	{
		return 3;
	}
	else if (cha == '4')
	{
		return 4;
	}
	else if (cha == '5')
	{
		return 5;
	}
	else if (cha == '6')
	{
		return 6;
	}
	else if (cha == '7')
	{
		return 7;
	}
	else if (cha == '8')
	{
		return 8;
	}
	else if (cha == '9')
	{
		return 9;
	}
	else if (cha == 'A')
	{
		return 10; 
	}
	else if (cha == 'B')
	{
		return 11;
	}
	else if (cha == 'C')
	{
		return 12;
	}
	else if (cha == 'D')
	{
		return 13;
	}
	else if (cha == 'E')
	{
		return 14;
	}
	else if (cha == 'F')
	{
		return 15;
	}
}

void b2tb10()
{
	string number;
	cout << "Enter the number : ";
	cin >> number;
	if (search(number, '.')) {
		int x = indexes(number, '.');
		string num = ""; 
		for (int i = 0; i < x; i++)
		{
			num = num + number[i]; 

	     }
		double sum = 0;
		int j = ((num.length()) - 1);
		for (int i = 0; i <= ((num.length()) - 1); i++, j--)
		{
			sum = sum + calc(2, chartoint(num[i]), j);

		}

		string num1 = "";
		for (int i =( x + 1); i <= ((number.length()) -1); i++)
		{
			num1 = num1 + number[i];
		}
		j = -1; 
		for (int i = 0; i <= ((num1.length()) - 1); i++, j--)
		{
			sum = sum + calc(2, chartoint(num1[i]), j);

		}
		cout << "Answer : " << sum << endl; 

	}
	else
	{
		int sum = 0;
		int j = ((number.length()) - 1);
		for (int i = 0; i <= ((number.length()) - 1); i++, j--)
		{
			sum = sum + calc(2, chartoint(number[i]), j);

		}
		cout << "Answer  : " << sum << endl;
	}
}

void b8tb10()
{
	string  number;
	cout << "Enter the Number : ";
	cin >> number;
	if (search(number, '.')) {
		int x = indexes(number, '.');
		string num = "";
		for (int i = 0; i < x; i++)
		{
			num = num + number[i];

		}
		double sum = 0;
		int j = ((num.length()) - 1);
		for (int i = 0; i <= ((num.length()) - 1); i++, j--)
		{
			sum = sum + calc(8, chartoint(num[i]), j);

		}

		string num1 = "";
		for (int i = (x + 1); i <= ((number.length()) - 1); i++)
		{
			num1 = num1 + number[i];
		}
		j = -1;
		for (int i = 0; i <= ((num1.length()) - 1); i++, j--)
		{
			sum = sum + calc(8, chartoint(num1[i]), j);

		}
		cout << "Answer : " << sum << endl;

	}
	else
	{
	int sum = 0;
	int j = ((number.length()) - 1);
	for (int i = 0; i <= ((number.length()) - 1); i++, j--)
	{
		sum = sum + calc(8, chartoint(number[i]), j);

	}
	cout << "Answer  : " << sum << endl;
}
}


void b16tb10()
{
	string  number;
	cout << "Enter the Number : ";
	cin >> number;
	if (search(number, '.')) {
		int x = indexes(number, '.');
		string num = "";
		for (int i = 0; i < x; i++)
		{
			num = num + number[i];

		}
		double sum = 0;
		int j = ((num.length()) - 1);
		for (int i = 0; i <= ((num.length()) - 1); i++, j--)
		{
			sum = sum + calc(16, chartoint(num[i]), j);

		}

		string num1 = "";
		for (int i = (x + 1); i <= ((number.length()) - 1); i++)
		{
			num1 = num1 + number[i];
		}
		j = -1;
		for (int i = 0; i <= ((num1.length()) - 1); i++, j--)
		{
			sum = sum + calc(16, chartoint(num1[i]), j);

		}
		cout << "Answer : " << sum << endl;

	}
	else
	{
	int sum = 0;
	int j = ((number.length()) - 1);
	for (int i = 0; i <= ((number.length()) - 1); i++, j--)
	{
		sum = sum + calc(16, chartoint(number[i]), j);

	}
	cout << "Answer  : " << sum << endl;
}
}


void fabtb10()
{
	int base; 
	cout << "1.binary\n2.octal\n3.hexadecimal" << endl; 
	cin >> base;
	if (base == 1)
	{
		b2tb10();
	}
	else if (base == 2)
	{
		b8tb10(); 
	}
	else if (base == 3)
	{
		b16tb10(); 
	}
}

void arr(int base, int num ,bool endline)
{
	int x = 0;
	int arra[32768] = { 0 };
	while (num != 0)
	{
		int r = num % base;
		arra[x] = r;
		num = num / base;
		x++;
	}
	for (int i = x-1; i >= 0; i--)
	{
		if (arra[i] == 10)
		{
			cout << "A";
		}
		else if (arra[i] == 11)
		{
			cout << "B";
		}
		else if (arra[i] == 12)
		{
			cout << "C";
		}
		else if (arra[i] == 13)
		{
			cout << "D";
		}
		else if (arra[i] == 14)
		{
			cout << "E";
		}
		else if (arra[i] == 15)
		{
			cout << "F";
		}
		else
		{
			cout << arra[i];
		}
		
	}
	if (endline == true)
	{
		cout << endl;
	}
}


void arrafloat(int base, double num)
{
	cout << ".";
	int de[11];
	double eleven[11] = { 0 };
	bool first = true;
	bool end = false;
	int x = 0;
d:
	double multi = base * num;
	int multii = multi;
	de[x] = multii;
	num = multi - multii;
	x++;

	if (num == 0)
	{
		de[x] = 0;
			x++;
			end = true; 
	}
	else
	{
		string nstr = std::to_string(num);
		int y = indexes(nstr, '.');
		int t = chartoint(nstr[y + 1]);
		eleven[x] = chartoint(nstr[y + 1]);
		for (int i = x - 2; i >= 0; i++)
		{
			if (first == true)
			{
				first = false;
				break;
			}
			else
			{
				if (eleven[i] == t)
				{
					end = true;
					break;
				}
			}
		}
	}
		if (end == false)
		{

			goto d;
		}
		else {
			for (int y = 0; y <= x - 1;y++)
			{
				if (de[y] == 10)
				{
					cout << "A";
				}
				else if (de[y] == 11)
				{
					cout << "B";
				}
				else if (de[y] == 12)
				{
					cout << "C";
				}
				else if (de[y] == 13)
				{
					cout << "D";
				}
				else if (de[y] == 14)
				{
					cout << "E";
				}
				else if (de[y] == 15)
				{
					cout << "F";
				}
				else
				{
					cout << de[y];
				}

			}
			cout << endl;
		}
	}


void b10tb2() {
	string  number;
	cout << "Enter the Number : ";
	cin >> number;
	if (search(number, '.')) {
		int x = indexes(number, '.');
		string num = "";
		for (int i = 0; i < x; i++)
		{
			num = num + number[i];

		}
		int num1 = 0;
		for (int i = 0; i <= ((num.length()) - 1); i++)
		{
			num1 = (num1 * 10) + chartoint(num[i]);

		}
		arr(2, num1,false);

		string num2 = "";
		for (int i = (x + 1); i <= ((number.length()) - 1); i++)
		{
			num2 = num2 + number[i];
		}
		double num3 = 0; 
		int y = 0;
		for (int i = 0; i <= ((num2.length()) - 1); i++)
		{
			num3 = (num3 * 10) + chartoint(num2[i]);
			y++; 
		}
		int div = 1; 
		for (int g = 1; g <= y; g++)
		{
			div = div * 10; 
		}
		num3 = num3 / div; 
		arrafloat(2, num3); 
	}
	else
	{
		int num = 0;
		for (int i = 0; i <= ((number.length()) - 1); i++)
		{
			num = (num*10)+ chartoint(number[i]);

		}
		arr(2, num,true); 
	}
}
 
void b10tb8() {
	string  number;
	cout << "Enter the Number : ";
	cin >> number;
	if (search(number, '.')) {
		int x = indexes(number, '.');
		string num = "";
		for (int i = 0; i < x; i++)
		{
			num = num + number[i];

		}
		int num1 = 0;
		for (int i = 0; i <= ((num.length()) - 1); i++)
		{
			num1 = (num1 * 10) + chartoint(num[i]);

		}
		arr(8, num1, false);

		string num2 = "";
		for (int i = (x + 1); i <= ((number.length()) - 1); i++)
		{
			num2 = num2 + number[i];
		}
		double num3 = 0;
		int y = 0;
		for (int i = 0; i <= ((num2.length()) - 1); i++)
		{
			num3 = (num3 * 10) + chartoint(num2[i]);
			y++;
		}
		int div = 1;
		for (int g = 1; g <= y; g++)
		{
			div = div * 10;
		}
		num3 = num3 / div;
		arrafloat(8, num3);
	}
	else
	{
		int num = 0;
		for (int i = 0; i <= ((number.length()) - 1); i++)
		{
			num = (num * 10) + chartoint(number[i]);

		}
		arr(8, num,true);
	}
}

void b10tb16() {
	string  number;
	cout << "Enter the Number : ";
	cin >> number;
	if (search(number, '.')) {
		int x = indexes(number, '.');
		string num = "";
		for (int i = 0; i < x; i++)
		{
			num = num + number[i];

		}
		int num1 = 0;
		for (int i = 0; i <= ((num.length()) - 1); i++)
		{
			num1 = (num1 * 10) + chartoint(num[i]);

		}
		arr(16, num1, false);

		string num2 = "";
		for (int i = (x + 1); i <= ((number.length()) - 1); i++)
		{
			num2 = num2 + number[i];
		}
		double num3 = 0;
		int y = 0;
		for (int i = 0; i <= ((num2.length()) - 1); i++)
		{
			num3 = (num3 * 10) + chartoint(num2[i]);
			y++;
		}
		int div = 1;
		for (int g = 1; g <= y; g++)
		{
			div = div * 10;
		}
		num3 = num3 / div;
		arrafloat(16, num3);
	}
	else
	{
		int num = 0;
		for (int i = 0; i <= ((number.length()) - 1); i++)
		{
			num = (num * 10) + chartoint(number[i]);

		}
		arr(16, num,true);
	}
}

void fb10tab()
{
	int base;
	cout << "1.binary\n2.octal\n3.hexadecimal" << endl; 
	cin >> base; 
	if (base == 1)
	{
		b10tb2();
	}
	else if (base == 2)
	{
		b10tb8();
	}
	else if (base == 3)
	{
		b10tb16();
	}
}

int main()
{
	while (true)
	{
		int choice;
		cout << "1.From any other base to base 10 " << endl;
		cout << "2.From base 10 to anyother base " << endl;
		cin >> choice;
		if (choice == 1)
		{
			fabtb10();
		}
		else if (choice == 2)
		{
			fb10tab();
		}
	}
	system("pause");
    return 0;
}

