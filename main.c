#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student {
	// �й�, �̸�, ���� ��� ������ ����
	int ID;
	char name[100];
	double grade;
};

void main (void) {
	// ������ �����ϰ� ������ ������ �ʱ�ȭ
	struct student s1 = {123456, "Gayeon", 4.3};
	// �й�, �̸�, ������ �ٸ� ������ ����
	s1.ID = 1914291;
	s1.grade = 3.5;
	// �й�, �̸�, ���� �ٸ� ������ ����
	printf("ID : %d\n", s1.ID);
	printf("name : %s\n", s1.name);
	printf("grade : %f\n", s1.grade);
}
