#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	FILE* fp = NULL;

	fp = fopen("alphabet.txt", "w");
	if (fp == NULL) {
		fprintf(stderr, "파일을 열 수 없습니다. \n");
		exit(1);
	}

	char c;
	for (c = 'a'; c <= 'z'; c++)
		fputc(c, fp);


	fclose(fp);
	return 0;
}