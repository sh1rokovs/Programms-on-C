#pragma once
#include <stdio.h>
#include <iostream>
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
}

void alph_num(char a, char b)
{
	char a[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n',
				  'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
}