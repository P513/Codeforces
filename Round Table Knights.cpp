#include <iostream>
#include <string>
using namespace std;
int arr[101010];
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> *(arr + i);
	}
	// sn%i==0이면 n/i는 간격, i는 개수
	for (int i = 3; i <= n; i++) {
		if (n % i == 0) {
			int cnt = 0;
			for (int j = 0; j < n / i; j++) {
				int tmp = j;
				while (cnt < i) {
					if (arr[tmp] == 1) {
						cnt++;
						tmp += n / i;
					}
					else {
						cnt = 0;
						break;
					}
				}
				if (cnt == i) {
					printf("YES");
					return 0;
				}
			}
		}
	}
	printf("NO");
	return 0;
}