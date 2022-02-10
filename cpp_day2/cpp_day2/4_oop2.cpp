// 4_oop2 - 57 page 교재 예제랑은 약간 다름
#include <iostream>

// OOP 핵심 1. 프로그램에서 필요한 타입을 먼저 설계해야한다.
//				그리고, 타입을 사용해서 코드를 작성해야한다.

struct Rect
{
	int left;
	int top;
	int right;
	int bottom;
};

// 사각형의 면적을 구하는 함수
// 객체지향프로그래밍 적용으로 복잡한게 좀 간단해졌다.

// 사용자 정의 타입을 인자로 받을 땐
// 읽기만 한다면 "call by value(Rect r)" 대신 "const reference(const Rect& r)" 가 좋다
// call by value로 선언하면 저 함수를 쓸때마다 int*4개 = 16byte를 계속 차지하게 때문이다.
int getRectArea(const Rect& r) {
	return (r.right - r.left) * (r.bottom - r.top);
}

void drawRect(const Rect& r) {
	std::cout << "draw rect" << std::endl;
}

int main() {
	Rect r = { 1, 1, 10, 10 };
	int n = getRectArea(r);
	drawRect(r);
}