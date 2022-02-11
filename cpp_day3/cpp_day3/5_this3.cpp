// 5_this3 -126page

#include <iostream>

class Point {
	int x, y;
public:
	// non-static 멤버함수는 this가 추가됨
	void set(int a, int b) { // 컴파일되면 void set(Point* this, int a, int b)
		x = a;
		y = b;
		std::cout << this << std::endl;
	}
	// static 멤버 함수는 this가 추가되지 않음
	static void foo(int a) { // 컴파일되면 void foo(int a)
		std::cout << this << std::endl; // ERROR, static 함수는 객체가 생성이 안되어도 메모리에 올라가 있기 때문에 this 사용 불가능
	}
};

int main() {
	Point p1;

	p1.set(10, 20); // 이건 컴파일 되면 set(&p1, 10, 20) 이렇게 된다. this가 추가될 수 있는 함수
	Point::foo(10); // 객체 없이 호출 가능, 즉 컴파일 되어도 아래처럼 된다.
					// foo(10)   => this가 추가될 수 없는 함수
}