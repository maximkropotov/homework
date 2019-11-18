// Прочитать массив N не более 1000 и вывести через ;
#include <iostream>

using namespace std;

int main() {
	unsigned int N, i;
	int a[1000];
	cin >> N;
	for (i = 0; i < N; ++i) {
		cin >> a[i];
	}
	for (i = 0; i < N; ++i) {
		if (i < (N-1)) cout << a[i] << "; ";
		else cout << a[i];
	}
	return 0;
}
