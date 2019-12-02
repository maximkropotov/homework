// Вывести отрицательные по столбцам.
#include <iostream>

using namespace std;

int main() {
	int N, M, i, j;
	cin >> N >> M;
	int** a = new int* [N];
	for (i = 0; i < N; ++i)
		a[i] = new int[M];
	for (i = 0; i < N; ++i)
		for (j = 0; j < M; ++j)
			cin >> a[i][j];
	for (j = 0; j < M; ++j)
		for (i = 0; i < N; ++i)
			if (a[i][j] < 0) cout << a[i][j] << " ";
	return 0;
}
