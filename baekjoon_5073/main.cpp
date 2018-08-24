#include <cstdio>
#include <algorithm>

int n[3];
int main() {
	while (scanf_s("%d %d %d", &n[0], &n[1], &n[2]) && (n[0] || n[1] || n[2])) {
		std::sort(n, n + 3);
		if (n[2] < n[1]+n[0]) {
			if (n[0] == n[1] && n[1] == n[2]) printf("Equilateral\n");
			else if (n[0] == n[1] || n[1] == n[2] || n[0] == n[2]) printf("Isosceles\n");
			else printf("Scalene\n");
		}
		else printf("Invalid\n");
	}
	return 0;
}