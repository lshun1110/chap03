/*
���ϸ� : assign01.c
���� : �Ѻ��� ���̸� �Է¹޾� ���簢���� ���̿� �ѷ��� ���ϴ� ���α۷��� �ۼ��Ͻÿ�.
�ۼ��� : �̽���
��¥ : 2025.04.07
���� : v 1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void square();

int main()
{
	square();
	return 0;
}

void square()
{
	int line;
	printf("�Ѻ��� ����? ");
	scanf("%d", &line);

	printf("���簢���� ���� : %d\n", line * line);
	printf("���簢���� �ѷ� : %d\n", line * 4);
}