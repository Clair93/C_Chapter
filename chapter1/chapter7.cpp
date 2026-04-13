
// chapter7 형성평가01
#include <stdio.h>

int main()
{
	int a;
	scanf("%d", &a);

	for (int i = 1; i <= a; i++) {
		printf("JUNGOL\n");
	}
	return 0;
}


// chapter7 형성평가02

#include <stdio.h>

int main()
{
	int a, b, min, max;

	scanf("%d %d", &a, &b);

	min = (a < b) ? a : b;
	max = (a > b) ? a : b;

	for (int i = min; i <= max; i++) {
		printf("%d ", i);
	}
	return 0;
}


// chapter7 형성평가03
#include <stdio.h>

int main()
{
	int a;
	int sum = 0;

	scanf("%d", &a);

	for (int i = 1; i <= a; i++) {
		if (i % 5 == 0) {
			sum += i;
		}
	}
	printf("%d", sum);

	return 0;
}


// chapter7 형성평가04
#include <stdio.h>

int main()
{
	int a, b;
	int sum = 0;
	double avg = 0;

	scanf("%d", &a);

	for (int i = 1; i <= a; i++) {
		scanf("%d", &b);
		sum += b;
	}
	avg = (double)sum / a;
	
	printf("%.2f", avg);

	return 0;
}


// chapter7 형성평가05
#include <stdio.h>

int main()
{
	int a;
	int even = 0, odd = 0;

	for (int i = 1; i <= 10; i++) {
		scanf("%d", &a);
		if (a % 2 == 0) {
			even++;
		}
		else {
			odd++;
		}
	}
	printf("even : %d\n", even);
	printf("odd : %d\n", odd);

	return 0;
}


// chapter7 형성평가06
#include <stdio.h>

int main()
{
	int a, b, min, max;
	int sum = 0, cnt = 0;
	double avg = 0;

	scanf("%d %d", &a, &b);

	min = (a < b) ? a : b;
	max = (a > b) ? a : b;

	for (int i = min; i <= max; i++) {
		if ((i % 3 == 0) || (i % 5 == 0)) {
			sum += i;
			cnt++;
		}
	}
	avg = (double)sum / cnt;

	printf("sum : %d\n", sum);
	printf("avg : %.1f", avg);

	return 0;
}


// chapter7 형성평가07
#include <stdio.h>

int main()
{
	int a;
	int sum = 0;

	scanf("%d", &a);

	for (int i = 1; i <= 10; i++) {
		sum = a * i;
		printf("%d ", sum);
	}
	return 0;
}


// chapter7 형성평가08
#include <stdio.h>

int main()
{
	int a, b;

	scanf("%d %d", &a, &b);

	for (int i = 1; i <= a; i++) {
		for (int j = 1; j <= b; j++) {
			printf("%d ", i * j);
		}
		printf("\n");
	}
	return 0;
}


// chapter7 형성평가09
#include <stdio.h>

int main()
{
	int a;

	scanf("%d", &a);

	for (int i = 1; i <= a; i++) {
		for (int j = 1; j <= a; j++) {
			printf("(%d, %d)", i, j);
		}
		printf("\n");
	}
	return 0;
}


// chapter7 형성평가10
#include <stdio.h>

int main()
{
	int a, b, min, max;

	scanf("%d %d", &a, &b);

	min = (a < b) ? a : b;
	max = (a > b) ? a : b;

	for (int i = 1; i <= 9; i++) {
		if (a == min) {
			for (int j = min; j <= max; j++) {
				printf("%d * %d = %2d   ", j, i, j * i);
			}
			printf("\n");
		}
		else {
			for (int j = max; j >= min; j--) {
				printf("%d * %d = %2d   ", j, i, j * i);
			}
			printf("\n");
		}
	}
	return 0;
}