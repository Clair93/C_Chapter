
// chapter8 자가진단 01
#include <stdio.h>

int main()
{
	int a;
	int sum = 0, cnt = 0;

	scanf("%d", &a);

	for (int i = 1;; i+=2) {
		sum += i;
		cnt++;
		if (sum >= a) break;
	}
	printf("%d %d", cnt, sum);
}


// chapter8 자가진단 02
#include <stdio.h>

int main()
{
	int a;

	scanf("%d", &a);

	for (int i = 1; i <= a; i++) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}


// chapter8 자가진단 03
#include <stdio.h>

int main()
{
	int n;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= (n - i) + 1; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}


// chapter8 자가진단 04
#include <stdio.h>

int main()
{
	int n;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i - 1; j++) {
			printf(" ");
		}
		for (int j = 1; j <= n - i + 1; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}


// chapter8 자가진단 05
#include <stdio.h>

int main()
{
	int n;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i - 1; j++) {
			printf(" ");
		}
		for (int j = 1; j <= (n - i) * 2 + 1; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}


// chapter8 자가진단 06
#include <stdio.h>

int main()
{
	int n;
	char ch = 'A';

	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n - i + 1; j++) {
			printf("%c", ch++);
		}
		printf("\n");
	}
	return 0;
}


// chapter8 자가진단 07
#include <stdio.h>

int main()
{
	int n;
	int a = 1;
	char ch = 'A';

	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n-i+1; j++) {
			printf("%d ", a++);
		}
		for (int j = 1; j <= i; j++) {
			printf("%c ", ch++);
		}
		printf("\n");
	}
	return 0;
}


// chapter8 형성평가 01
#include <stdio.h>

int main()
{
	int n;
	int sum = 0, cnt = 0, avg = 0;;
	
	for (int i = 1; i <= 20; i++) {
		scanf("%d", &n);
		if (n == 0) break;
		sum += n;
		cnt++;
	}
	avg = sum / cnt;

	printf("%d %d", sum, avg);

	return 0;
}


// chapter8 형성평가 02
#include <stdio.h>

int main()
{
	int n, N;

	scanf("%d", &n);

	for (int i = 1;; i++) {
		N = n * i;
		if (N > 100) break;
		printf("%d ", N);
		if (N % 10 == 0) break;
		
	}
	return 0;
}


// chapter8 형성평가 03
#include <stdio.h>

int main()
{
	int n;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = 1; i <= n-1; i++) {
		for (int j = 1; j <= n-i; j++) {
			printf("*");
		}
		printf("\n");
	}
}


// chapter8 형성평가 04
#include <stdio.h>

int main()
{
	int n;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i - 1; j++) {
			printf(" ");
		}
		for (int j = 1; j <= (n - i) * 2 + 1; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = 1; i <= n-1; i++) {
		for (int j = 1; j <= n-i-1; j++) {
			printf(" ");
		}
		for (int j = 1; j <= i * 2 + 1; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}


// chapter8 형성평가 05
#include <stdio.h>

int main()
{
	int n;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= (n - i) * 2; j++) {
			printf(" ");
		}
		for (int j = 1; j <= i * 2 - 1; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}


// chatper8 형성평가 06
#include <stdio.h>

int main()
{
	int n;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= (n - i) * 2; j++) {
			printf(" ");
		}
		for (int j = 1; j <= i; j++) {
			printf("%d ",j);
		}
		printf("\n");
	}
	return 0;
}


// chapter8 형성평가 07
#include <stdio.h>

int main()
{
	int n;
	int a = 0;
	char ch = 'A';

	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n - i + 1; j++) {
			printf("%c ", ch++);
		}
		for (int j = 1; j <= i-1; j++) {
			printf("%d ", a++);
		}
		printf("\n");
	}
	return 0;
}


// chapter8 형성평가 08
#include <stdio.h>

int main()
{
	int n;
	int N = 1;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i*2 - 2; j++) {
			printf(" ");
		}
		for (int j = 1; j <= n - i + 1; j++) {
			printf("%d ", N++);
		}
		printf("\n");
	}
	return 0;
}


// chapter8 형성평가 09
#include <stdio.h>

int main()
{
	int n;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			printf("# ");
		}
		printf("\n");
	}
	for (int i = 1; i <= n - 1; i++) {
		for (int j = 1; j <= i * 2; j++) {
			printf(" ");
		}
		for (int j = 1; j <= n - i; j++) {
			printf("# ");
		}
		printf("\n");
	}
	return 0;
}


// chapter8 형성평가 10
#include <stdio.h>

int main()
{
	int n;
	int num = 1;
	
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			printf("%d ", num);
			num += 2;
			if (num > 10) num -= 10;
		}
		printf("\n");
	}
	return 0;
}