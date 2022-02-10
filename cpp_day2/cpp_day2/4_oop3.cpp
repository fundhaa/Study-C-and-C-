// 4_oop3 - 57 page 교재 예제랑은 약간 다름
#include <iostream>

// OOP 핵심 2. 타입을 만들 때 상태를 나타내는 데이터와 
//			   상태(데이터)를 가지고 연산을 수행하는 함수를 묶어서 타입을 만들자

// C 구조체 : 함수를 포함할 수 없다.
// C++ 구조체 : 함수를 포함할 수 있다.

// 데이터와 데이터를 사용하는 함수를 한번에 묶는게 좋다.
// C에서는 묶는게 불가능해서 구조체 변수를 함수가 인자로 항상 받아야했다.
// C++에서는 가능하다.
struct Rect
{
	// 멤버 데이터("필드"라고도 한다)
	int left;
	int top;
	int right;
	int bottom;
	
	// 멤버 함수("메소드"라고도 한다)
	// 멤버 함수에서는 멤버 데이터를 바로 접근 가능하다.
	// => 그래서 함수 인자로 데이터를 전달 받을 필요가 없다.
	int getArea() {
		return (right - left) * (bottom - top);
	}

	void draw() {
		std::cout << "draw rect" << std::endl;
	}
};

int main() {
	Rect r = { 1, 1, 10, 10 };
	//int n = getRectArea(r);
	//drawRect(r);

	int n = r.getArea(); // 함수 호출은 이렇게 한다. 결론적으로 함수의 이름도 수정해줄 수 있다.
	r.draw();		 	 // 함수 호출은 이렇게 한다. 구조체 이름에서 Rect를 썻기 때문에 의미상 충분하다.
}