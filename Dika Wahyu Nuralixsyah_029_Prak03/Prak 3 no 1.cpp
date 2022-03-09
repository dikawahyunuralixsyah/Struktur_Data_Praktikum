#include<iostream>
#include<stdio.h>
using namespace std;

int H(const char*s)
{
	int x = 0;
	for (;*s!='\0';s++)
	++x;
	return x;
}

main (void)
{
	char String [100];
	cout << "Tuliskan kata : sisilia thya";
	cin.getline(String,100);
	cout << endl;
	cout << "Jumlah Karakter: 12 " << H(String) << endl;
}
