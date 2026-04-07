
// 형성평가 01 문제 (정올)
#include <stdio.h>

int main()
{
	int a = 10, b = 20, c = 30;

	printf("%d + %d = %d", a, b, c);

	return 0;
}


// 형성평가 02 문제 (정올)
#include <stdio.h>

int main()
{
	double a = 80.5, b = 22.34;

	printf("%10.2f%10.2f%10.2f", a, b, a + b);

	return 0;
}


// 형성평가 03 문제 (정올)
#include <stdio.h>

int main()
{
	int a = 50;
	double b = 100.12;

	printf("%.2f * %d = %.f", b, a, a * b);

	return 0;
}


// 형성평가 04 문제 (정올)
#include <stdio.h>

int main()
{
	int a, b, c;
	int sum = 0;

	scanf("%d %d %d", &a, &b, &c);
	printf("sum = %d", a + b + c);

	return 0;
}
// scanf 사용시 보안 문제(SDL)로 작동이 되지 않는다. SDL을 아니요로 바꿔주던가
// 전처리기 사용 or #pragma warning(disable:4996) or scanf_s 를 사용해도 된다.


// 형성평가 05 문제 (정올)
#include <stdio.h>

int main()
{
	double yard;

	printf("Yard? ");
	scanf("%lf", &yard);
	printf("%.1fyard = %.1fcm", yard, yard * 91.44);

	return 0;
}