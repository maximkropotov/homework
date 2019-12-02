// Дано 2 массива. В первом заменить нулями элементы с индексами, перечисленными во втором массиве. 
#include <iostream>

using namespace std;

int main() {
	int N, K, i;
	cin >> N;
	int* a = new int[N];
	for (i = 0; i < N; ++i)	cin >> a[i];
	cin >> K;
	int* b = new int[K];
	for (i = 0; i < K; ++i)	cin >> b[i];
	for (i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j)	if (i == b[j]) a[i] = 0;
		cout << a[i] << " ";
	}
	return 0;
}
