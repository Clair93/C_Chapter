
// chapter15 형성평가 01
/*
#include <stdio.h>
#include <string.h>

int main()
{
	int len, i;
	char str[200];

	fgets(str, 200, stdin);
	len = strlen(str);

	while (str[len - 1] == '\n' || str[len - 1] == '\r') 
		str[--len] = '\0';

	for (i = 0; i < len; i++) {
		if (str[i] == ' ') {
			printf("\n");
		}
		else {
			printf("%c", str[i]);
		}
	}
	return 0;
}
*/
// chapter15 형성평가 02
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char str[5][30] = { "flower", "rose", "lily", "daffodil", "azalea" };
	char ch;
	int len, i, j, cnt = 0;

	scanf(" %c", &ch);
	
	for (i = 0; i < 5; i++) {
		len = strlen(str[i]);
		for (j = 1; j <= 2; j++) {
			if (str[i][j] == ch) {
				puts(str[i]);
				cnt++;
			}
		}
	}
	if (cnt == 0) printf("%d", 0);
	else printf("%d", cnt);
	
	return 0;
}
*/
// chapter15 형성평가 03
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char word[50][100];
	int i, len, cnt = 0;

	for (i = 0; i < 50; i++) {
		scanf("%s", word[i]);
		if ((strcmp(word[i] ,"0")) == 0) break;
		cnt++;
	}
	len = i;
	printf("%d\n", cnt);
	for (i = 0; i < len; i+=2) {
		printf("%s\n", word[i]);
	}
	
	return 0;
}
*/
// chapter15 형성평가 04
/*
#include <stdio.h>
#include <string.h>

int main()
{
	int n, i, j, len;
	char str[100][100], temp[100];

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%s", str[i]);
	}
	for (i = 0; i < n - 1; i++) {
		for (j = i + 1; j < n; j++) {
			if (strcmp(str[i], str[j]) > 0) {
				strcpy(temp, str[i]);
				strcpy(str[i], str[j]);
				strcpy(str[j], temp);
			}
		}
	}
	for (i = 0; i < n; i++) {
		printf("%s\n", str[i]);
	}
	return 0;
}
*/
// chapter15 형성평가 05
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char word[5][100];
	char ch, ch2[100];
	int i, flag = 0;

	for (i = 0; i < 5; i++) {
		scanf("%s", word[i]);
	}
	scanf(" %c %s", &ch, ch2);

	for (i = 0; i < 5; i++) {
		if (strchr(word[i], ch) || strstr(word[i], ch2)) {
			puts(word[i]);
			flag = 1;
		}
	}
	if (flag == 0) printf("none");

	return 0;
}
*/
// chapter15 형성평가 06
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char word1[50], word2[50];
	int n;

	scanf("%s %s %d", word1, word2, &n);

	printf("%s\n", strcat(word1, word2));
	printf("%s\n", strncpy(word2, word1, n));

	return 0;
}
*/
// chapter15 형성평가 07
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char word1[100], word2[100];
	int a, b, sum;

	scanf("%s %s", word1, word2);

	a = atoi(word1);
	b = atoi(word2);
	sum = a * b;

	printf("%d", sum);

	return 0;
}
*/
// chapter15 형성평가 08
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char word[100][21];
	int i, j, len, cnt;

	for (i = 0; i < 100; i++) {
		scanf("%s", word[i]);
		if (strcmp(word[i], "END") == 0) break;
	}

	cnt = i;

	for (i = 0; i < cnt; i++) {
		len = strlen(word[i]);
		for (j = len - 1; j >= 0; j--) {
			printf("%c", word[i][j]);
		}
		printf("\n");
	}

	return 0;
}
*/
// chapter15 형성평가 09

#include <stdio.h>
#include <string.h>

int main()
{
	int num;
	float f;
	char word[31], str[100];
	int len, mid, i;

	scanf("%d %f %s", &num, &f, word);
	sprintf(str, "%d%.3f%s", num, f, word);

	len = strlen(str);
	mid = (len + 1) / 2;

	for (i = 0; i < mid; i++) {
		printf("%c", str[i]);
	}
	printf("\n");

	for (i = mid; i < len; i++) {
		printf("%c", str[i]);
	}

	return 0;
}