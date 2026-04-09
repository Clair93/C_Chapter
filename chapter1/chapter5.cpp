
// chapter5__자가진단 1
#include <stdio.h>

int main()
{
	int a;

	scanf("%d", &a);

	printf("%d\n", a);

	if (a < 0)
	{
		printf("minus");
	}
	return 0;
}


// chapter5__자가진단 2
#include <stdio.h>

int main()
{
	int h, w;
	int v;

	scanf("%d %d", &h, &w);

	v = w + 100 - h;

	if (v > 0) 
	{
		printf("%d\n", v);
		printf("Obesity");
	}
	else
	{
		printf("%d", v);
	}

	return 0;
}


// chapter5__자가진단 3
#include <stdio.h>

int main()
{
	int age;

	scanf("%d", &age);

	if (age > 20)
	{
		printf("adult");
	}
	else
	{
		printf("%d years later", 20 - age);
	}

	return 0;
}


// chapter5__자가진단 4
#include <stdio.h>

int main()
{
	double wei;

	scanf("%lf", &wei);

	if (wei <= 50.80) {
		printf("Flyweight");
	}
	else if (wei <= 61.23) {
		printf("Lightweight");
	}
	else if (wei <= 72.57) {
		printf("Middleweight");
	}
	else if (wei <= 88.45) {
		printf("Cruiserweight");
	}
	else {
		printf("Heavyweight");
	}

	return 0;
}


// chapter5__자가진단 5
#include <stdio.h>

int main()
{
	double a, b;

	scanf("%lf %lf", &a, &b);

	if (a >= 4.0 && b >= 4.0) {
		printf("A");
	}
	else if (a >= 3.0 && b >= 3.0) {
		printf("B");
	}
	else {
		printf("C");
	}
	return 0;
}


// chapter5__자가진단 6
#include <stdio.h>

int main()
{
	char gender;
	int age;

	scanf(" %c %d", &gender, &age);

	if (gender == 'M') {
		if (age >= 18) {
			printf("MAN");
		}
		else {
			printf("BOY");
		}
	}
	else {
		if (age >= 18) {
			printf("WOMAN");
		}
		else {
			printf("GIRL");
		}
	}
	return 0;
}


// chapter5__자가진단 7
#include <stdio.h>

int main()
{
	char a;

	scanf(" %c", &a);

	switch (a) {
	case 'A' :
		printf("Excellent");
		break;
	case 'B':
		printf("Good");
		break;
	case 'C':
		printf("Usually");
		break;
	case 'D':
		printf("Effort");
		break;
	case'F':
		printf("Failure");
		break;
	default:
		printf("error");
		break;
	}
	return 0;
}


// chapter5__자가진단 8
#include <stdio.h>

int main()
{
	double a;

	scanf("%lf", &a);

	switch ((int)a) {
	case 4:
		printf("scholarship");
		break;
	case 3:
		printf("next semester");
		break;
	case 2:
		printf("seasonal semester");
		break;
	default:
		printf("retake");
		break;
	}
	return 0;
}


// chapter5__자가진단 9
#include <stdio.h>

int main()
{
	int a, b, c;
	int min;

	scanf("%d %d %d", &a, &b, &c);

	min = (a < b) ? a : b;
	min = (min < c) ? min : c;

	printf("%d", min);
	return 0;
}


// chapter5__형성평가01
#include <stdio.h>

int main()
{
	int a, b;
	int max, min;

	scanf("%d %d", &a, &b);

	min = (a < b) ? a : b;
	max = (a > b) ? a : b;

	printf("%d", max - min);

	return 0;
}


// chapter5__형성평가02
#include <stdio.h>

int main()
{
	int a;

	scanf("%d", &a);

	if (a == 0) {
		printf("zero");
	}
	else if (a > 0) {
		printf("plus");
	}
	else {
		printf("minus");
	}
	return 0;
}


// chapter5__형성평가03
#include <stdio.h>

int main()
{
	int a;

	scanf("%d", &a);

	if (a % 400 == 0) {
		printf("leap year");
	}
	else if ((a % 4 == 0) && (a % 100 != 0)) {
		printf("leap year");
	}
	else {
		printf("common year");
	}
	return 0;
}


// chapter5__형성평가04
#include <stdio.h>

int main()
{
	int a;

	printf("Number? ");
	scanf("%d", &a);

	switch (a) {
	case 1:
		printf("dog");
		break;
	case 2:
		printf("cat");
		break;
	case 3:
		printf("chick");
		break;
	default:
		printf("I don't know.");
		break;
	}
	return 0;
}


// chapter5__형성평가05
#include <stdio.h>

int main()
{
	int a;
	
	scanf("%d", &a);

	switch (a) {
	case 2:
		printf("28");
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		printf("30");
		break;
	default:
		printf("31");
		break;
	}
	return 0;
}