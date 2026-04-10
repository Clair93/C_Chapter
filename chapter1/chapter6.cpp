
// chapter6 형성평가01

#include <stdio.h>

int main()
{
	int a;
	int b = 1;

	scanf("%d", &a);

	while (b<=a) {
		printf("%d ", b++);
	}

	return 0;
}


// chapter6 형성평가02
#include <stdio.h>

int main()
{
	int a;
	int odd = 0, even = 0;

	while (1) {
		scanf("%d", &a);
		if (a == 0) break;
		if (a % 2 == 0) {
			even++;
		}
		else {
			odd++;
		}
	}
	printf("odd : %d\n", odd);
	printf("even : %d\n", even);

	return 0;
}


// chapter6 형성평가03
#include <stdio.h>

int main()
{
	int a;
	int sum = 0, cnt = 0;
	double avg = 0;

	while (1) {
		scanf("%d", &a);
		if (a >= 0 && a <= 100) {
			sum += a;
			cnt++;
		}
		else {
			break;
		}
	}
	avg = (double)sum / cnt;

	printf("sum : %d\n", sum);
	printf("avg : %.1f\n", avg);

	return 0;
}


// chapter6 형성평가04
#include <stdio.h>

int main()
{
	int a;
	int cnt = 0;

	while (1) {
		scanf("%d", &a);
		if (a == 0) break;
		if (a % 3 == 0 || a % 5 == 0) continue;
		else {
			cnt++;
		}
	}
	printf("%d", cnt);

	return 0;
}


// chapter6 형성평가05
#include <stdio.h>

int main()
{
	int base, height;
	char ch;
	double width = 0;

	do {
		printf("Base = ");
		scanf("%d", &base);

		printf("Height = ");
		scanf("%d", &height);

		width = (double)base * height / 2;
		printf("Triangle width = %.1f\n", width);
		
		printf("Continue? ");
		scanf(" %c", &ch);
	} while ((ch == 'Y' || ch == 'y'));
	return 0;
}

