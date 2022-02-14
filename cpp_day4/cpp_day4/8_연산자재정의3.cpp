// 연산자재정의
#include <iostream>

class Point {
	int x;
	int y;
public:
	Point(int a, int b) : x(a), y(b) {}


	Point operator+(const Point& p) {
		std::cout << "member로 만든 operator+" << std::endl;
		Point temp(x + p.x, y + p.y);
		return temp;
	}

	// 연산자 재정의 함수
	// 일반 함수를 friend 를 써서 멤버로 등록해준다.
	// ==> 멤버는 아니지만 private에 접근할 수 있게 해달라.
	friend Point operator+(const Point& p1, const Point& p2);
}; // friend : 연산자 재정의 함수를 일반함수로 만들 때 friend를 사용한다.

// 일반함수 중에서 Point를 두개 받을 수 있는 걸 만들자
Point operator+(const Point& p1, const Point& p2) {
	std::cout << "non member operator+" << std::endl;

	Point temp(p1.x + p2.x, p1.y + p2.y);
	return temp;
}

int main()
{
	Point p1(1, 1);
	Point p2(2, 2);

	Point p3 = p1 + p2; // 1. p1.operator+(p2)가 가능한지 확인 [멤버함수]
						// 2. 안되면  operator+(p1, p2)가 가능한지 확인 [일반함수]
						// 현재 두개 다 정의되어 있으므로 우선순위가 있다. 1. 멤버함수 / 2. 일반함수
	// 멤버함수로 구현하는게 더 좋다고 하는 개발자들 : private에 접근하기 편하고 객체지향의 철학과 맞다
	// 일반함수로 구현하는게 더 좋다고 하는 개발자들 : 멤버로 안될 때가 있다.

	Point p4 = p1 + p2; // p1.operator+(Point) 필요
	Point p5 = p1 + 3;  // p1.operator+(int)가 필요
	Point p6 = 3 + p2;	// 3.operator+(Point)가 필요한데 3은 user type이 아니므로 멤버함수로 할 수 없다.
						// 하지만 operator+(int, Point) 가 있으면 된다. --> non-member(일반함수)로 하면 된다.

	// 연산자 재정의를 많이 지원하는 언어
	// C++ : ? . .* :: 뺴고 모든 연산자 재정의 가능
	// C#, python : 주요한 연산자 거의 재정의 가능
	// 
}