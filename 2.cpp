#include <iostream>
#include <iomanip>

using namespace std;
double P(double x)
{
	return 4*x;
}

double S(double x)
{
	return x*x;
}
int main ()
{
	setlocale(LC_ALL, "rus");
	int n,i;
	double a;
	cout << fixed << setprecision(5);
	cout << "Введите число квадратов: ";
		cin >> n;
	for (i=1; i<=n; i++)
	{
		cout << "\nВведите сторону квадрата: ";
		cin >> a;
		cout << "Периметр квадрата равен: " << P(a) << "\nПлощадь квадрата равна: " << S(a);
	}
	return 0;
}
