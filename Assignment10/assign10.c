/*
파일명 : assign07.c
내용 : 실수값을 입력받아 그 값의 제곱과 세제곱을 출력하는 프로그램을 작성하시오.
	   실수값을 입력받을 때는 12.34처럼 소수 표기 방법이나 1.234e2처럼 지수 표기방법을 둘 다 사용할 수 있게 하고
	   제곱과 세재곱을 출력할 때는 지수 표기 방법으로 출력하시오.
작성자 : 이승훈
날짜 : 2025.04.07
버전 : v 1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void Change();

int main()
{
	Change();
	return 0;
}

void Change()
{
	float dollars, change;

	printf("USD? ");
	scanf("%f", &dollars);
	printf("원/달러 환율? ");
	scanf("%f", &change);

	printf("USD %.2f = KRW %.2f", dollars, dollars * change);
}