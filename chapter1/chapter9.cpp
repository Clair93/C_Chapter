//
//// chapter9 자가진단 01
//#include <stdio.h>
//
//int main()
//{
//	int a[10], i;
//	
//	for (i = 0; i < 10; i++) {
//		scanf(" %c", &a[i]);
//	}
//	for (i = 0; i < 10; i++) {
//		printf("%c", a[i]);
//	}
//	printf("\n");
//
//	return 0;
//}
//
//
//// chapter9 자가진단 02
//#include <stdio.h>
//
//int main()
//{
//	int a[10], i;
//	int b = 1;
//
//	for (i = 0; i < 10; i++) {
//		a[i] = b + i;
//	}
//	for (i = 0; i < 10; i++) {
//		printf("%d ", a[i]);
//	}
//	return 0;
//}
//
//
//// chapter9 자가진단 03
//#include <stdio.h>
//
//int main()
//{
//	int a[10], i;
//
//	for (i = 0; i < 10; i++) {
//		scanf(" %c", &a[i]);
//	}
//	printf("%c %c %c", a[0], a[3], a[6]);
//
//	return 0;
//}
//
//
//// chapter9 자가진단 04
//#include <stdio.h>
//
//int main()
//{
//	int a[100], i, cnt;
//
//	for (i = 0; i < 100; i++) {
//		scanf("%d", &a[i]);
//		if (a[i] == 0) {
//			break;
//		}
//	}
//	cnt = i-1;
//
//	for (i = cnt; i >= 0; i--) {
//		printf("%d ", a[i]);
//	}
//	return 0;
//}
//
//
//// chapter9 자가진단 05
//#include <stdio.h>
//
//int main()
//{
//	double score[6] = { 85.6,79.5,83.1,80.0,78.2,75.0 };
//	double sum = 0;
//	int num1, num2;
//
//	scanf("%d %d", &num1, &num2);
//
//	sum = score[num1 - 1] + score[num2 - 1];
//
//	printf("%.1f", sum);
//
//	return 0;
//}
//
//
//// chapter9 자가진단 06
//#include <stdio.h>
//
//int main() 
//{
//	int a[10], i;
//	int min = 1000;
//
//	for (i = 0; i < 10; i++) {
//		scanf("%d", &a[i]);
//		if (min > a[i]) {
//			min = a[i];
//		}
//	}
//	printf("%d", min);
//
//	return 0;
//}
//
//
//
//// chapter10 형성평가 01
//#include <stdio.h>
//
//int main()
//{
//	char ch[10];
//	int i;
//
//	for (i = 0; i < 10; i++) {
//		scanf(" %c", &ch[i]);
//	}
//
//	for (i = 9; i >= 0; i--) {
//		printf("%c ", ch[i]);
//	}
//
//	return 0;
//}
//
//
//// chapter10 형성평가 02
//#include <stdio.h>
//
//int main()
//{
//	int num[5], i;
//	int sum = 0;
//
//	for (i = 0; i < 5; i++) {
//		scanf("%d", &num[i]);
//	}
//
//	sum = num[0] + num[2] + num[4];
//
//	printf("%d", sum);
//
//	return 0;
//}
//
//
//// chapter10 형성평가 03
//#include <stdio.h>
//
//int main()
//{
//	int num[10], i;
//	int odd = 0, even = 0;
//
//	for (i = 0; i < 10; i++) {
//		scanf("%d", &num[i]);
//	}
//
//	for (i = 0; i < 10; i++) {
//		if (i % 2 == 0) {
//			odd += num[i];
//		}
//		else {
//			even += num[i];
//		}
//	}
//
//	printf("odd : %d\n", odd);
//	printf("even : %d\n", even);
//
//	return 0;
//}
//
//
//// chapter10 형성평가 04
//#include <stdio.h>
//
//int main()
//{
//	int num[100], i, cnt;
//
//	for (i = 0; i < 100; i++) {
//		scanf("%d", &num[i]);
//		if (num[i] == -1)break;
//	}
//	cnt = i;
//
//	int st = (cnt < 3) ? 0 : cnt - 3;
//
//	for (i = st; i < cnt; i++) {
//		printf("%d ", num[i]);
//	}
//
//	return 0;
//}
//
//
//// chapter10 형성평가 05
//#include <stdio.h>
//
//int main()
//{
//	double wei[6];
//	double sum = 0, avg = 0;
//	int i, cnt;
//
//	for (i = 0; i < 6; i++) {
//		scanf("%lf", &wei[i]);
//		sum += wei[i];
//	}
//	cnt = i;
//	avg = sum / i;
//
//	printf("%.1f", avg);
//
//	return 0;
//}
//
//
// chapter10 형성평가 06
//#include <stdio.h>
//
//int main()
//{
//	char ch[6] =  {'J', 'U', 'N', 'G', 'O', 'L' };
//	char fi;
//	int i;
//	int num = -1;
//
//	scanf(" %c", &fi);
//
//	for (i = 0; i < 6; i++) {
//		if (ch[i] == fi) {
//			num = i;
//			break;
//		}
//	}
//
//	if (num == -1) {
//		printf("none");
//	}
//	else {
//		printf("%d", num);
//	}
//	return 0;
//}
//
//
//// chapter10 형성평가 07
//#include <stdio.h>
//
//int main()
//{
//	int num[100], i, cnt;
//	int min = 10000, max = -10000;
//
//	for (i = 0; i < 100; i++) {
//		scanf("%d", &num[i]);
//		if (num[i] == 999) break;
//	}
//	cnt = i;
//
//	for (i = 0; i < cnt; i++) {
//		if (min > num[i]) {
//			min = num[i];
//		}
//		if (max < num[i]) {
//			max = num[i];
//		}
//	}
//	printf("max : %d\n", max);
//	printf("min : %d\n", min);
//
//	return 0;
//}
//
//
//// chapter10 형성평가 08
//#include <stdio.h>
//
//int main()
//{
//	int num[100], i;
//	int five = 0, sum = 0;
//	double avg = 0;
//
//	for (i = 0; i < 100; i++) {
//		scanf("%d", &num[i]);
//		if (num[i] == 0) break;
//		if (num[i] % 5 == 0) {
//			sum += num[i];
//			five++;
//		}
//	}
//	avg = (double)sum / five;
//
//	printf("Multiples of 5 : %d\n", five);
//	printf("sum : %d\n", sum);
//	printf("avg : %.1f\n", avg);
//
//	return 0;
//}
//
//
//// chapter10 형성평가 09
//#include <stdio.h>
//
//int main() 
//{
//	int num[100], i, cnt;
//
//	for (i = 0; i < 100; i++) {
//		scanf("%d", &num[i]);
//		if (num[i] == 0) break;
//	}
//	cnt = i;
//	printf("%d\n", i);
//
//	for (i = 0; i < cnt; i++) {
//		if (num[i] % 2 == 0) {
//			printf("%d ", num[i] / 2);
//		}
//		else {
//			printf("%d ", num[i] * 2);
//		}
//	}
//	return 0;
//}
//

// chapter10 형성평가 10
#include <stdio.h>

int main()
{
	int n, i, j, num[20];
	int temp = 0;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &num[i]);
	}

	for (i = 0; i < n - 1; i++) {
		for (j = i + 1; j < n; j++) {
			if (num[i] < num[j]) {
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}			
		}
	}

	for (i = 0; i < n; i++) {
		printf("%d\n", num[i]);
	}

	return 0;
}