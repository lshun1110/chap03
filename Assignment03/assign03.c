/*
���ϸ� : assign03.c
���� : ������ ���̸� �Է¹޾� ��ġ �������� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. ������ kg����, ���̴� m������ �Է¹޴´�.
�ۼ��� : �̽���
��¥ : 2025.04.07
���� : v 1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#define G 9.8
#include<stdio.h>

void assignment0303(void);
double calcPositionEnergy(int weight, int height);

int main()
{
	assignment0303();

	return 0;
}

void assignment0303(void)
{
	int weight, height;
	printf("����(kg)? ");
	scanf(" %d", &weight);

	printf("����(m)? ");
	scanf("%d", &height);

	calcPositionEnergy(weight, height);
	printf("��ġ������: %lf J", calcPositionEnergy(weight, height));
}

double calcPositionEnergy(int weight, int height)
{
	return weight * height * G;
}