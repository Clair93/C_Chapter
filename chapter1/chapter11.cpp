//
// chapter 11 자가진단 01
//
//#include <stdio.h>
//
//void str() {
//	puts("~!@#$^&*()_+|");
//}
//
//int main()
//{
//	int i, n;
//
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++) {
//		str();
//	}
//
//	return 0;
//}
//
//
//// chapter 11 자가진단 02
//
//#include <stdio.h>
//
//void pi(int r) {
//	double PI = 3.14;
//	double sum;
//
//	sum = r * r * PI;
//
//	printf("%.2f", sum);
//}
//
//int main()
//{
//	int n;
//
//	scanf("%d", &n);
//
//	pi(n);
//
//	return 0;
//}
//
//
//// chapter 11 자가진단 03
//
//#include <stdio.h>
//
//void arr(int n) {
//	int a = 1;
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			printf("%d ", a++);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int num;
//
//	scanf("%d", &num);
//
//	arr(num);
//
//	return 0;
//}
//
//
//// chatper 11 자가진단 04
//
//#include <stdio.h>
//
//int maxin(int a, int b, int c) {
//	int max = 0;
//
//	max = (a > b) ? a : b;
//	max = (max > c) ? max : c;
//
//	return max;
//}
//
//int main()
//{
//	int x, y, z;
//
//	scanf("%d %d %d", &x, &y, &z);
//	
//	printf("%d", maxin(x, y, z));
//
//	return 0;
//}
//
//
//// chapter 11 자가진단 05
//
//#include <stdio.h>
//
//int power(int a, int b) {
//	int i;
//	int n = 1;
//
//	for (i = 0; i < b; i++) {
//		n *= a;
//	}
//
//	return n;
//}
//
//int main()
//{
//	int x, y;
//
//	scanf("%d %d", &x, &y);
//
//	printf("%d", power(x,y));
//
//	return 0;
//}
//
//
//// chapter 11 자가진단 06
//
//#include <stdio.h>
//
//int gesan(int x, int y, char op)
//{
//	if (op == '+') {
//		return x + y;
//	}
//	else {
//		if (op == '-') {
//			return x - y;
//		}
//		else {
//			if (op == '*') {
//				return x * y;
//			}
//			else {
//				if (op == '/') {
//					return x / y;
//				}
//			}
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int a, b;
//	char c;
//
//	scanf("%d %c %d", &a, &c, &b);
//	printf("%d %c %d = %d \n", a, c, b, gesan(a, b, c));
//	return 0;
//}
//
//
//// chapter 11 자가진단 7
//
//#include <stdio.h>
//
//void hap(int &x, int &y) {
//	if (x < y) {
//		y /= 2;
//		x *= 2;
//	}
//	else {
//		x /= 2;
//		y *= 2;
//	}
//}
//
//int main()
//{
//	int a, b;
//
//	scanf("%d %d", &a, &b);
//
//	hap(a, b);
//	printf("%d %d", a, b);
//
//	return 0;
//}
//

// chpater 11 자가진단 8

#include <stdio.h>

void input(int &x, int &y) {
	scanf("%d %d", &x, &y);
	int temp;

	if (x < y) {
		x = x;
		y = y;
	}
	else {
		temp = x;
		x = y;
		y = temp;
	}

}

void output(int i) {
	int j;

	printf("== %ddan ==\n",i);
	for (j = 1; j <= 9; j++) {
		printf("%d * %d = %2d\n", i, j, i * j);
	}
	printf("\n");
}

int main()
{
	int a, b, i;
	
	input(a, b);

	for (i = a; i <= b; i++) {
		output(i);
	}

	return 0;
}