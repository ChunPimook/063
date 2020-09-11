#include <stdio.h>
int main() {
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);
	if (a >= 1000) {
		if (a >= 1000 && ((b < 3 && c < 60) || (b == 3 && c == 0))) {
			printf("Free 3 Hour");
		}
		else
		{
			if (a >= 1000 && b >= 3) {
				int d = b - 3;

				if (c != 0)
					d++;

				d *= 40;

				printf("%d", d);

			}
		}
	}
	else {
		if (a < 1000 && ((b < 1 && c < 60) || (b == 1 && c == 0))) {
			printf("Free 1 Hour");
		}
		else if (b >= 1 && c > 0) {
			int f = b * 40;
			
			if (f >= 160) {
				printf("%d", 150);
			}
			else {
				printf("%d", f);
			}
		}
	}
}

