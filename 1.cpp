#include <iostream>

using namespace std;
string f(int x)
{
	string res;
	if (x % 2 == 0) res = "Yes";
	else res = "No";
	return res;
}
int main ()
{
	setlocale(LC_ALL, "rus");
	int n;
	cout << "Введите число: ";
	cin >> n;
	cout << f(n);
	return 0;
}
