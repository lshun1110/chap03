/*
���ϸ� : assign04.c
���� : ��ü�� �ۿ��� ���� ũ��� ���� �������� �̵��� �Ÿ��� �Է¹޾� ������ ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. 
       (����ũ��� N������ �Է¹ް�, �̵��ѰŸ��� M������ �Է¹޴´�.)
�ۼ��� : �̽���
��¥ : 2025.04.07
���� : v 1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void Work();

int main()
{
    Work();
    return 0;
}

void Work()
{
    float force, distance;
    
    printf("��(N) ? ");
    scanf(" %f", &force);
    
    printf("�̵��Ÿ�(m)? ");
    scanf("%f", &distance);

    printf("���� �� :%.2f J", force * distance);
}