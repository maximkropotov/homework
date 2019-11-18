// Поменять местами 2 средних члена в массиве или удвоить, если он один
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	unsigned int N, i,s;
	int a[1000];
	cin >> N;
	for (i = 0; i < N; ++i) {
		cin >> a[i];
	}
	s = N / 2;
	if (N % 2 != 0) a[s] *= 2;
	else swap(a[s-1], a[s]);	
	for (i = 0; i < N; ++i) {
		if (i < (N-1)) cout << a[i] << "; ";
		else cout << a[i];
	}
	return 0;
}
