// Заменить каждый максимум на кол-во максимальных
#include <iostream>

using namespace std;

int main() {
	int N, i, s, max;
	cin >> N;
	max = -2147483647;
	s = 0;
	int* a = new int[N];
	for (i = 0; i < N; ++i) {
		cin >> a[i];
		if (a[i] > max) {
			max = a[i];
			s = 1;
		}
		else if (a[i] == max) ++s;
	}
	for (i = 0; i < N; ++i) {
		if (a[i] == max) a[i] = s;
		cout << a[i] << " ";
	}		
	return 0;
}
