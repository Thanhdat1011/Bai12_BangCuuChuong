// Bai12_BangCuuChuong.cpp : This file contains the 'main' function. Program execution begins and ends there.
//                                           

#include <iostream>
using namespace std;
int main()
{
	for (int i = 1; i < 10; i++)
	{
		cout << i << endl;
	}
	cout << "Vong Lap DO...WHILE" << endl;
	int j = 0;
	while (j <= 10) {
		cout << j << endl;
		j++;
	}
	cout << "Vong lap DO...WHILE " << endl;
	int k = 0;
	do {
		cout << k << endl;
		k++;
	} while (k <= 10);
	// Bang cuu chuong
	// 2 x 1 = 2
	cout << "BANG CUU CHUONG" << endl;
	for (int i = 0; i < 10; i++)
	{
		for (int so = 0; so < 10; so++)
		{
			cout << so << "x" << i << "=" << so * i << "\t";
		}
		cout << endl;
	}
	return 0; 
}



