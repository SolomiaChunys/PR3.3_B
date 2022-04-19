#include <iostream>
#include <iomanip>
#include "Pair.h"
#include "Money.h"
#include <sstream>

using namespace std;

int main()
{
	Money m(0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Pair l;

	cout << "Division : " << Division(m,l) << endl;
	cout << "FracDivision: " << FracDivision(m, l) << endl;

	if (ComparisionGreat(m, l))
		cout << "FirstSum > SecondSum" << endl;
	if (ComparisionLess(m, l))
		cout << "FirstSum < SecondSum" << endl;
	if (ComparisionEqual(m, l))
		cout << "FirstSum = SecondSum" << endl;

	return 0;
}
