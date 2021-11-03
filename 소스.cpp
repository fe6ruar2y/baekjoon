#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int init, n;
	int count = 0;
	cin >> init;

	n = init;
	do {
		n = (n % 10) * 10 + ((n / 10) + (n % 10)) % 10;
		count++;
	} while (init != n);

	cout << count << '\n';
	return 0;
}