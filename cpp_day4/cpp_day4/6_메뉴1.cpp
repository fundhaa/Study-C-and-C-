#include <stdio.h>

// C언어로 설계
// 프로그램이란?
// main 함수의 1번쨰줄부터 순차적으로 실행되는 실행흐름
// 실행 흐름을 변경하려면 조건문
// 실행 흐름을 반복하려면 반복문
// 관련된 코드를 묶으려면 함수
// 이를 구조적 프로그래밍이라고 한다.

int main() {
	printf("1. 김밥\n");
	printf("2. 라면\n");
	printf("3. 국수\n");
	printf("메뉴를 선택하세요 >> ");

	int cmd;
	scanf_s("%d", &cmd);

	switch (cmd) {
	case 1: break;
	case 2: break;
	case 3: break;
	}
}