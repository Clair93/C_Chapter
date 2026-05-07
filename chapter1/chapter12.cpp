
// chapter 12 형성평가 01
/*
#include <stdio.h>

void input(int a[], int b, int &c) {
	int i;
	scanf("%d", &c);

	for (i = 0; i < c; i++) {
		scanf("%d", &a[i]);
	}
}

void swap(int &a, int &b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void sort(int a[], int b, int c) {
	int i, j;

	for (i = 0; i < c - 1; i++) {
		for (j = i + 1; j < c; j++) {
			if (a[i] < a[j]) {
				swap(a[i], a[j]);
			}
		}
	}

}

void output(int a[], int b, int c) {
	int i;
	for (i = 0; i < c; i++) {
		printf("%d ", a[i]);
	}
}

int main()
{
	int arr[15], n;

	input(arr, 15, n);
	sort(arr, 15, n);
	output(arr, 15, n);

	return 0;
}
*/
// chapter 12 형성평가 02
/*
#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c, d;
	int i, min, max;
	scanf("%lf %lf", &a, &b);

	c = sqrt(a);
	d = sqrt(b);

	min = a < b ? ceil(c) : ceil(d);
	max = a > b ? floor(c) : floor(d);

	printf("%d",max - min + 1);

	return 0;
}
*/
// chapter 12 형성평가 03
/*
#include <stdio.h>
#include <math.h>

int main()
{
	int arr[5], i;
	int sum = 0;

	for (i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
		sum += abs(arr[i]);
	}
	printf("%d ", sum);

	return 0;
}
*/
// chapter 12 형성평가 04
/*
#include <stdio.h>
#include <math.h>

int main()
{
	double n;
	scanf("%lf", &n);

	printf("%.0f", pow(2, n));

	return 0;
}
*/
// chapter 12 형성평가 05
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define ROUND(x,y,z) round(x) + round(y) + round(z)

int main()
{
	double a[3];
	double sum = 0, avg = 0;
	double rsum = 0, ravg = 0;

	for (int i = 0; i < 3; i++) {
		scanf("%lf", &a[i]);
		sum += a[i];
	}
	avg = sum / 3;
	printf("%.0f\n", round(avg));

	rsum = ROUND(a[0], a[1], a[2]);
	ravg = rsum / 3;
	printf("%.0f", round(ravg));

	return 0;
}
*/
// chapter 12 형성평가 06
/*
#include <stdio.h>
#define N 7
#define	SWAP(x,y) {int z = x; x = y; y = z;}

void input(int a[]) {
	for (int i = 0; i < N; i++) {
		scanf("%d", &a[i]);
	}
}

void sort(int a[]) {
	int i, j;
	for (i = 1; i <= 3; i++) {
		for (j = 0; j < N - 1; j++) {
			if (a[j] > a[j+1]) {
				SWAP(a[j], a[j+1]);
			}
		}
	}
}

void output(int a[]) {
	int i;
	for (i = 0; i < N; i++) {
		printf("%d ", a[i]);
	}
}

int main()
{
	int arr[N];

	input(arr);
	sort(arr);
	output(arr);

	return 0;
}
*/
// chapter 12 형성평가 07
/*
#include <stdio.h>
#include <math.h>
#define PI 3.141592
#define AREA(x) (x) * (x) * PI

int main()
{
	double radius, result;
	printf("radius : ");
	scanf("%lf", &radius);
	
	result = AREA(radius);
	printf("area = %.3f", round(result*1000)/1000);
	
	return 0;
}
*/
