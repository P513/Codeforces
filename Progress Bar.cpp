#include <iostream>
#include <string>
using namespace std;
int arr[101];
int main() {
	int n, k, t;
	cin >> n >> k >> t;
	int p = n * k * t / 100;
	for (int i = 0; i < n; i++) {
		cout << (p > k ? k : p) << " ";
		p = (p - k > 0) ? p - k : 0;
	}
	return 0;
}
