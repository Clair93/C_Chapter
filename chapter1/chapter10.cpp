//
//// chapter10 형성평가 01
//#include <stdio.h>
//
//int main()
//{
//	int num[7] = { 0 };
//	int i, j, n;
//
//	for (i = 0; i < 10; i++) {
//		scanf("%d", &n);
//		num[n]++;
//	}
//
//	for (i = 1; i < 7; i++) {
//		printf("%d : %d\n", i, num[i]);
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
//	int per[11] = { 0 };
//	int i, n;
//
//	while(1){
//		scanf("%d", &n);
//		if (n == 0) break;
//		if (per[n/10]++);
//	}
//
//	for (i = 10; i >= 0; i--) {
//		if (per[i] > 0) {
//			printf("%d : %d person\n",i*10, per[i]);
//		}
//	}
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
//	int arr[10] = { 0 };
//	int i, j, n;
//
//	for (i = 0; i < 2; i++) {
//		scanf("%d", &arr[i]);
//	}
//
//	for (i = 2; i < 10; i++) {
//		arr[i] = (arr[i - 2] + arr[i - 1]) % 10;
//	}
//
//	for (i = 0; i < 10; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//
//
//// chapter10 형성평가 04
//#include <stdio.h>
//
//int main()
//{
//	int arr[4][3] = { {3,5,9},{2,11,5},{8,30,10},{22,5,1} };
//	int i, j, sum = 0;
//
//	for (i = 0; i < 4; i++) {
//		for (j = 0; j < 3; j++) {
//			sum += arr[i][j];
//		}
//	}
//
//	for (i = 0; i < 4; i++) {
//		for (j = 0; j < 3; j++) {
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	printf("%d", sum);
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
//	int arr[4][4] = { 0 };
//	int i, j;
//
//	for (i = 0; i < 4; i++) {
//		printf("%dclass? ", i + 1);
//		for (j = 0; j < 3; j++) {
//			scanf("%d", &arr[i][j]);
//			arr[i][3] += arr[i][j];
//		}
//	}
//
//	for (i = 0; i < 4; i++) {
//		printf("%dclass : %d\n", i + 1, arr[i][3]);
//	}
//	return 0;
//}
//
//
//// chapter10 형성평가 06
//#include <stdio.h>
//
//int main()
//{
//	int arr[6][6] = { 0 };
//	int i, j;
//
//	for (i = 1; i < 6; i+=2) {
//		arr[1][i] = 1;
//	}
//
//	for (i = 2; i < 6; i++) {
//		for (j = 1; j < 6; j++) {
//			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j + 1];
//		}
//	}
//
//	for (i = 1; i < 6; i++) {
//		for (j = 1; j < 6; j++) {
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
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
//	int arr1[2][3] = { 0 };
//	int arr2[2][3] = { 0 };
//	int hap[2][3] = { 0 };
//	int i, j;
//
//	printf("first array\n");
//	for (i = 0; i < 2; i++) {
//		for (j = 0; j < 3; j++) {
//			scanf("%d", &arr1[i][j]);
//		}
//	}
//	printf("second array\n");
//	for (i = 0; i < 2; i++) {
//		for (j = 0; j < 3; j++) {
//			scanf("%d", &arr2[i][j]);
//		}
//	}
//	for (i = 0; i < 2; i++) {
//		for (j = 0; j < 3; j++) {
//			printf("%d ", hap[i][j] = arr1[i][j] * arr2[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
//
//// chapter10 형성평가 08
//#include <stdio.h>
//
//int main()
//{
//	int arr[5][3] = { 0 };
//	int sum = 0;
//	int i, j;
//
//	for (i = 0; i < 4; i++) {
//		for (j = 0; j < 2; j++) {
//			scanf("%d", &arr[i][j]);
//			arr[i][2] += arr[i][j];
//			arr[4][j] += arr[i][j];
//			arr[4][2] += arr[i][j];
//		}
//	}
//	
//	for (i = 0; i < 4; i++) {
//		printf("%d ", arr[i][2] / 2);
//	}
//	printf("\n");
//	for (i = 0; i < 2; i++) {
//		printf("%d ", arr[4][i] / 4);
//	}
//	printf("\n");
//	printf("%d ", arr[4][2] / 8);
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
//	int arr[11][11] = { 0 };
//	int i, j, n;
//
//	scanf("%d", &n);
//	arr[n-1][1] = 1;
//
//	for (i = n-2; i >= 0; i--) {
//		for (j = 1; j <= n; j++) {
//			arr[i][j] = arr[i + 1][j - 1] + arr[i + 1][j];
//		}
//	}
//
//	for (i = 0; i < n + 1; i++) {
//		for (j = 1; j <= n; j++) {
//			if (arr[i][j] > 0) {
//				printf("%d ", arr[i][j]);
//			}
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//

// chapter10 형성평가 10
#include <stdio.h>

int main()
{
	char arr[3][5];
	int i, j;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 5; j++) {
			scanf(" %c", &arr[i][j]);
		}
	}

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 5; j++) {
			printf("%c ", arr[i][j]+32);
		}
		printf("\n");
	}
	return 0;
}