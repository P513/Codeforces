#include <iostream>
#include <string.h>
using namespace std;
int main() {
	int n;
	scanf("%d", &n);
	while (n--) {
		char word[1010] = "";
		scanf("%s", word);
		if (strlen(word) > 10) {
			printf("%c%d%c\n", word[0], strlen(word) - 2, word[strlen(word) - 1]);
		}
		else {
			printf("%s\n", word);
		}
	}
	return 0;
}