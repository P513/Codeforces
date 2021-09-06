#include <iostream>
#include <string>
using namespace std;
int arr[101010];
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	// n%i==0�̸� n/i�� ����, i�� ����
	for (int i = 3; i <= n; i++) {
		if (n % i == 0) {
			int cnt = 0;
			for (int j = 0; j < n; j++) {
				int tmp = j;
				while (cnt < i && tmp < n) {
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