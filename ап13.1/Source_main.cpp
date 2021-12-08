#include<iostream>
#include<iomanip>
#include<cmath>

#include "dod.h"
#include "sum.h"
#include "var.h"

using namespace std;

using namespace nsDod;
using namespace nsSum;
using namespace nsVar;

int main(){
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "eps = "; cin >> eps;

	cout << fixed;
	cout << "-------------------------------------------------" << endl;
	cout << "|" << setw(5) << "x" << "     |" << setw(10) << "ln(x)" << "   |" << setw(7) << "S" << "      |" << setw(5) << "n" << "   |" << endl;
	cout << "-------------------------------------------------" << endl;

	x = xp;
	while (x <= xk)
	{
		sum();

		cout << "|" << setw(7) << setprecision(2) << x << "   |" << setw(10) << setprecision(5) << log((x + 1) / (x - 1)) << "   |" << setw(10) << setprecision(5) << s << "   |" << setw(5) << n << "   |" << endl << "-------------------------------------------------" << endl;

		x += dx;
	}

	return 0;
}
