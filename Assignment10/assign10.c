/*
���ϸ� : assign07.c
���� : �Ǽ����� �Է¹޾� �� ���� ������ �������� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	   �Ǽ����� �Է¹��� ���� 12.34ó�� �Ҽ� ǥ�� ����̳� 1.234e2ó�� ���� ǥ������ �� �� ����� �� �ְ� �ϰ�
	   ������ ������� ����� ���� ���� ǥ�� ������� ����Ͻÿ�.
�ۼ��� : �̽���
��¥ : 2025.04.07
���� : v 1.0
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
	printf("��/�޷� ȯ��? ");
	scanf("%f", &change);

	printf("USD %.2f = KRW %.2f", dollars, dollars * change);
}