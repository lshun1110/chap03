/*
���ϸ� : assign02.c
���� : ������ ���̿� ������ ���̸� �Է¹޾� ���簢���� ���̿� �ѷ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
�ۼ��� : �̽���
��¥ : 2025.04.07
���� : v 1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void rectangle();

int main()
{
	rectangle();
	return 0;
}

void rectangle()
{
	int side1, side2;
	printf("������ ����? ");
	scanf("%d", &side1);
	printf("������ ����? ");
	scanf("%d", &side2);

	printf("���簢���� ���� : %d\n", side1 * side2);
	printf("���簢���� �ѷ� : %d\n", (side1 + side2) * 2);
}