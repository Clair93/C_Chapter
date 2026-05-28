
// chapter17 형성평가 01
/*
#include <stdio.h>

int main()
{
	int a;
	double b;

	printf("%p %p", &a, &b);

	return 0;
}
*/
// chapter17 형성평가 02
/*
#include <stdio.h>

int main()
{
	int i, n;
	int* p;

	scanf("%d", &n);
	p = new int[n];

	for (i = 0; i < n; i++) {
		printf("*");
	}
	return 0;
}
*/
// chapter17 형성평가 03
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* p1 = new int; 
	int* p2 = new int;
	int* p3 = new int;

	scanf("%d %d", p1, p2);

	*p3 = *p1 - *p2;
	printf("%d", abs(*p3));

	delete p1;
	delete p2;
	delete p3;
	return 0;
}
*/
// chapter17 형성평가 04
/*
#include <stdio.h>

int main()
{
	int arr[10];
	int* p = arr;
	int i, odd = 0, even = 0;
	
	for (i = 0; i < 10; i++) {
		scanf("%d", &p[i]);
	}

	for (i = 0; i < 10; i++) {
		if (*(p + i) % 2 == 0) even++;
		else odd++;
	}

	printf("odd : %d\n", odd);
	printf("even : %d\n", even);

	return 0;
}
*/
// chapter17 형성평가 05

#include <stdio.h>

int main()
{
	int i, n;
	int* p;

	scanf("%d", &n);
	p = new int[n];

	for (i = 0; i < n; i++) {
		scanf("%d", &p[i]);
	}

	for (i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (p[i] < p[j]) {
				int tmp = p[i];
				p[i] = p[j];
				p[j] = tmp;
			}
		}
	}
	printf("max : %d\n", *p);
	printf("min : %d\n", *(p + (n-1)));

	return 0;
}
