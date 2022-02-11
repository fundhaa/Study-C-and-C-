// PE View2.cpp
#include <iostream>

int g = 10;

int main() {
	int n = 0;
	int* p = new int;

	// 아래 결과로 나오는 주소를 유심히 보자, 근접한 주소가 어떤건지.
	// main함수하고 전역변수 주소는 비슷하고
	// 지역변수, heap할당된 주소는 멀다.
	printf("main 함수 주소 : %p \n", &main);
	printf("전역변수 주소 : %p \n", &g);
	printf("지역변수 주소 : %p \n", &n);
	printf("힙에 할당된 메모리 주소 : %p \n", p); // &p가 아닌 p이다.

	delete p;
}
// C 배우고 나면 꼭 linux나 window같은 OS 공부가 필요하다.