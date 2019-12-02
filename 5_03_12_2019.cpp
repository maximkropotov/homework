// Посчитать кол-во отриц. элементов в двумерном массиве.
#include <iostream>

using namespace std;

int main() {
	int N, M, i, j, s;
	s = 0;
	cin >> N >> M;
	int** a = new int* [N];
	for (i = 0; i < N; ++i)
		a[i] = new int[M];
	for (i = 0; i < N; ++i)
		for (j = 0; j < M; ++j) {
			cin >> a[i][j];
			if (a[i][j] < 0) ++s;
		}
	cout << s;
	return 0;
}
