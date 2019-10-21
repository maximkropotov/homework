#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
string f(double &x)
{
	string res;
	if (x >= 0)
	{
		res = "True";
		x = sqrt(x);
	}
	else res = "False";
	return res;
}

int main()
{
	setlocale(LC_ALL, "rus");
	int i;
	double x;
	cout << fixed << setprecision(5);
	for (i = 1; i <= 3; i++)
	{
		cout << "Введите число: ";
		cin >> x;
		cout << f(x) << ", " << x << endl;
	}
	return 0;
}
