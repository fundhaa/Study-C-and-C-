// 연산자재정의
#include <iostream>

class Point {
	int x;
	int y;
public:
	Point(int a, int b) : x(a), y(b) {}

	// operator+가 함수 이름
	// + 는 이항연산자이지만, 멤버함수로 만들면 인자는 한개이다.
	// p1.operator+(p2) 이므로
	Point operator+(const Point& p) {
		std::cout << "member로 만든 operator+" << std::endl;
		Point temp(x + p.x, y + p.y);
		return temp;
	}
};

int main()
{
	Point p1(1, 1);
	Point p2(2, 2);

	Point p3 = p1 + p2; // p1.operator+(p2)가 가능한지 확인
						// 안되면  operator+(p1, p2)가 가능한지 확인, 안되면 에러
						// operator 함수를 만들어야함!
}

