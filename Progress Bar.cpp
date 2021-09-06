#include <iostream>
#include <string>
using namespace std;
int arr[101];
int main() {
	int n, k, t;
	cin >> n >> k >> t;
	int p = n * k * t / 100;
	int i = 0;
	while (p > 0) {
		arr[i] = p - k < 0 ? p : k;
		i++;
		p -= k;
	}
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}
