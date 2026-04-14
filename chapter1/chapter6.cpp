
// chapter6 자가진단01
#include <stdio.h>

int main()
{
	for (int i = 1; i <= 15; i++) {
		printf("%d ", i);
	}
	return 0;
}


// chapter6 자가진단02
#include <stdio.h>
int main()
{
	int a;
	int sum = 0, b = 1;

	scanf("%d", &a);

	while (b<=a) {
		sum += b;
		b++;
	}
	printf("%d", sum);

	return 0;
}


// chapter6 자가진단03
#include <stdio.h>

int main()
{
	int a;

	while (1) {
		printf("number? ");
		scanf("%d", &a);
		if (a == 0) break;
		if (a > 0) {
			printf("positive integer\n");
		}
		else {
			printf("negative number\n");
		}
	}
	return 0;
}


// chapter6 자가진단04
#include <stdio.h>

int main()
{
	int a;
	int sum = 0, cnt = 0;
	double avg = 0;

	while (1) {
		scanf("%d", &a);
		sum += a;
		cnt++;
		if (a == 100)break;
	}
	avg = (double)sum / cnt;

	printf("%d\n", sum);
	printf("%.1f", avg);

	return 0;
}


// chapter6 자가진단05
#include <stdio.h>

int main()
{
	int a;

	do {
		scanf("%d", &a);
		if (a % 3 != 0)continue;
		if (a % 3 == 0) {
			printf("%d\n", a / 3);
		}
	} while (a != -1);
	return 0;
}


// chapter6 자가진단06
#include <stdio.h>

int main()
{
	int a;

	do {
		printf("1. Korea\n");
		printf("2. USA\n");
		printf("3. Japan\n");
		printf("4. China\n");
		printf("number? ");
		scanf("%d", &a);

		switch (a)
		{
		case 1 :
			printf("\nSeoul\n\n");
			break;
		case 2:
			printf("\nWashington\n\n");
			break;
		case 3:
			printf("\nTokyo\n\n");
			break;
		case 4:
			printf("\nBeijing\n\n");
			break;
		default:
			printf("\nnone\n\n");
			break;
		}
		
	} while (a > 0 && a < 5);
}


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

