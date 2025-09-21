#define _CRT_SECURE_NO_WARNINGS
#include"Date.h"

int main()
{
	date d1(2024, 7, 12);
	date d2 = d1 += 100;
	date d3 = d1 + 100;
	//Date d3(d1 + 100);
	d1.print();
	d2.print();
	d3.print();
	cout << d3 - d2 << endl;
	date d4, d5;
	cin >> d4 >> d5;
	cout << d5 - d4  << endl;
	cout << "You entered: " << d4 << d5 << endl;

	//d1 += 100;
	//d1.Print();

	/*d1 += 30000;
	d1.print();*/

	return 0;
}