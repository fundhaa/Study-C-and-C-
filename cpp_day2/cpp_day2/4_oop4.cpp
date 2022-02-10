// 4_oop4 - 57 page 교재 예제랑은 약간 다름
#include <iostream>

// OOP 핵심 3.

struct Rect
{
	int left;
	int top;
	int right;
	int bottom;

	int getArea() {
		return (right - left) * (bottom - top);
	}

	void draw() {
		std::cout << "draw rect" << std::endl;
	}
};

int main() {
	// "메모리 layout 이야기" - 참고용
	// Rect 타입 변수 생성시,
	// 1. 멤버 데이터만 따로 놓이고
	// 2. 멤버 함수는 코드 메모리에 한개만 존재한다.

	Rect r1 = { 1, 1, 10, 10 };
	Rect r2 = { 2, 2, 10 ,10 };

	std::cout << sizeof(r1) << std::endl; // 16 bytes

	// 변수 VS 객체
	int n; // 변수(variable) 
		   // premitive 타입일떄는 변수라고 부름
	Rect r; // 사용자 정의 변수
			// 객체(Object)
			// 단순히 변하는 수가 아니라 그릴수도 잇고 면적도 구할수 있는 세상에 존재하는 사물을 객체라고 함.
}