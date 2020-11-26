#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student {
	// 학번, 이름, 학점 멤버 적절히 정의
	int ID;
	char name[100];
	double grade;
};

void main (void) {
	// 변수를 선언하고 적절한 값으로 초기화
	struct student s1 = {123456, "Gayeon", 4.3};
	// 학번, 이름, 학점을 다른 값으로 변경
	s1.ID = 1914291;
	s1.grade = 3.5;
	// 학번, 이름, 학점 다른 값으로 변경
	printf("ID : %d\n", s1.ID);
	printf("name : %s\n", s1.name);
	printf("grade : %f\n", s1.grade);
}
