// Каждый нечетный по номеру элемент заменить на сумму его и предыдущего элемента
#include <iostream>

using namespace std;

int main() {
	int N, i, s, max;
	cin >> N;
	int* a = new int[N];
	for (i = 0; i < N; ++i)	cin >> a[i];
	for (i = 0; i < N; ++i) {
		if (i % 2 != 0) a[i] += a[i-1];
		cout << a[i] << " ";
	}		
	return 0;
}
