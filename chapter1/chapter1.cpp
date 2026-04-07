
// 형성평가 01번 문제 풀기 (정올)
#include <stdio.h>

int main()
{
	printf("My name is Hong");

	return 0;
}


// 형성평가 02번 문제 풀기 (정올)
#include <stdio.h>

int main()
{
	printf("My hometown\n");
	printf("Flowering mountain\n");

	return 0;
}


// 형성평가 03번 문제 풀기 (정올)
#include <stdio.h>

int main()
{
	printf("TTTTTTTTTT\n");
	printf("TTTTTTTTTT\n");
	printf("    TT\n");
	printf("    TT\n");
	printf("    TT\n");
	printf("    TT\n");

	return 0;
}


// 형성평가 04번 문제 풀기 (정올)
#include <stdio.h>

int main()
{
	int k=90, m=80, e=100;
	int sum = k+m+e;

	printf("kor %d\n", k);
	printf("mat %d\n", m);
	printf("eng %d\n", e);
	printf("sum %d\n", sum);

	return 0;
}


// 형성평가 05번 문제 풀기 (정올)
#include <stdio.h>

int main()
{
	printf("%15s%15s%15s\n", "Seoul", "10,312,545", "+91,375");
	printf("%15s%15s%15s\n", "Pusan", "3,567,910", "+5,868");
	printf("%15s%15s%15s\n", "Incheon", "2,758,296", "+64,888");
	printf("%15s%15s%15s\n", "Daegu", "2,511,676", "+17,230");
	printf("%15s%15s%15s\n", "Gwangju", "1,454,636", "+29,774");

/*	음수를 붙이면 오른쪽 정렬이 아닌 왼쪽 정렬을 하게 된다.
	printf("%-15s%-15s%-15s\n", "Seoul", "10,312,545", "+91,375");
	printf("%-15s%-15s%-15s\n", "Pusan", "3,567,910", "+5,868");
	printf("%-15s%-15s%-15s\n", "Incheon", "2,758,296", "+64,888");
	printf("%-15s%-15s%-15s\n", "Daegu", "2,511,676", "+17,230");
	printf("%-15s%-15s%-15s\n", "Gwangju", "1,454,636", "+29,774");
*/
	return 0;
}
