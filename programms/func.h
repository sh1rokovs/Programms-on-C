#pragma once
#include <stdio.h>
#include <iostream>
#include <random>
#include <math.h>
#include <random>

using namespace std;

void calc(float x, float y)
{
	float sum;
	sum = x + y;
	cout << sum << endl;
	sum = x * y;
	cout << sum << endl;
}

void bit_op(unsigned int x, unsigned int y)
{
	x = x << 1;
	y = y >> 1;
	cout << x << endl;
	cout << y << endl;
}

void x_ord(float x, float y)
{
	cout << y << "=k" << x << "+b" << endl;
}

void random_sim()
{
	int a;
	cout << -100 + rand() % 100 << endl;
	float r2 = static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / 12.5));
	cout << r2 << endl;
	static char c = 'a' + rand() % 12;
	cout << c << endl;
	cout << 12 % 5 << endl;
}

void alph_num(char a, char b)
{
	//char a[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n',
				 // 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
}

void chisla_num() //++
{
	int p;
	cout << "--------------------------" << endl;
	for (int i = 2; i < 10; i++)
	{
		p = 0;
		for (int j = 2; j < 100; j++)
		{
			if (j % i == 0)
			{
				p += 1;
			}
		}
		cout << "In diapazon 2-99:" << p << "numbers krat " << i << endl;
	}
}

void chisla_nml()
{
	cout << "---------------------------" << endl;
	unsigned int size;
	int a[10] = { 8, 3, 15, 6, 4, 2};
	int b[10] = {0, 0, 0, 0, 0, 0};
	for (int i = 0; i < 6; i++)
	{
		if (a[i] % 2 == 0)
		{
			b[i] = i;
			cout << b[i] << endl;
		}
	}
}

void chisla_msl()
{
	cout << "--------------------------" << endl;
	int max = 0;
	int in_max = 0;
	int min = 0;
	int in_min = 0;
	int c = 0;
	unsigned int size = 5 + rand() % 20;
	int *a = new int[size];
	int *b = new int[size];
	for (int i = 0; i < size; i++)
	{
		a[i] = 1 + rand() % 100;
		b[i] = 1 + rand() % 100;
	}
	for (int i = 0; i < size; i++)
	{
		if (a[i] > a[0])
		{
			max = a[i];
			in_max = i;
		}
		if (a[i] < a[0])
		{
			min = a[i];
			in_min = i;
		}
	}
	cout << "Max number " << max << " on position " << in_max << endl;
	cout << "Min number " << min << " on  position " << in_min << endl;
	c = a[in_max];
	a[in_max] = a[in_min];
	a[in_min] = c;
	for (int i = 0; i < size; i++)
	{
		cout << a[i] << endl;
	}
	for (int i = 0; i < size; i++)
	{
		if (b[i] > b[0])
		{
			max = b[i];
			in_max = i;
		}
		if (b[i] < b[0])
		{
			min = b[i];
			in_min = i;
		}
	}
	cout << "Max number " << max << " on position " << in_max << endl;
	cout << "Min number " << min << " on  position " << in_min << endl;
	c = b[in_max];
	b[in_max] = b[in_min];
	b[in_min] = c;
	for (int i = 0; i < size; i++)
	{
		cout << b[i] << endl;
	}
}
