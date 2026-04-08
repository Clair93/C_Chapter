
// chapter3__형성평가 01 문제 (정올)
#include <stdio.h>

int main()
{
	int kor, eng, mat, com;
	int sum = 0;
	double avg = 0;

	scanf("%d %d %d %d", &kor, &eng, &mat, &com);
	
	sum = kor + eng + mat + com;
	avg = (double)sum / 4;			// double형에는 int형이 올 수 없기 때문에 (double)로 형변환을 한다.

	printf("sum %d\n", sum);
	printf("avg %.f\n", avg);

	return 0;
}


// chapter3__형성평가 02 문제 (정올)
#include <stdio.h>

int main()
{
	int a, b;

	scanf("%d %d", &a, &b);
	printf("%d / %d = %d...%d", a, b, a / b, a % b);

	return 0;
}


// chapter3__형성평가 03 문제 (정올)
#include <stdio.h>

int main()
{
	int wid, len;
	int area = 0;

	scanf("%d %d", &wid, &len);

	area = (wid += 5) * (len *= 2);

	printf("width = %d\n", wid);
	printf("length = %d\n", len);
	printf("area = %d\n", area);

	return 0;
}


// chapter3__형성평가 04 문제 (정올)
#include <stdio.h>

int main()
{
	int a, b;

	scanf("%d %d", &a, &b);

	printf("%d %d\n", ++a, b--);
	printf("%d %d\n", a, b);

	return 0;
}


// chapter3__형성평가 05 문제 (정올)
#include <stdio.h>

int main()
{
	int mh, mw, kh, kw;

	scanf("%d %d", &mh, &mw);
	scanf("%d %d", &kh, &kw);

	printf("%d", (mh > kh) && (mw > kw));

	return 0;
}