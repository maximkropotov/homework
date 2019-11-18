// С помощью дин. массива прочитать N элементов и заменить три последних на "-1" и вывести в обратном порядке
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int N, i,s;
	cin >> N;
	if (N >= 3) {
		int* a = new int[N];
		for (i = 0; i < N; ++i) cin >> a[i];
		s = N - 3;
		for (i = s; i < N; ++i) a[i] = -1;
		for (i = N - 1; i >= 0; --i) cout << a[i] << " ";
	}
	else cout << "Error.";
	return 0;
}
