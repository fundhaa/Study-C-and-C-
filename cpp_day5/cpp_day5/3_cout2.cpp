#include <iostream>

class Point {
	int x, y;
public:
	Point(int a, int b) : x(a), y(b) {}

	friend std::ostream& operator<<(std::ostream& os, const Point& pt);
};

std::ostream& operator<<(std::ostream& os, const Point& pt) {
	os << pt.x << ", " << pt.y;
	return os;
}

int main() {
	Point pt(1, 2);
	std::cout << pt;

	// -------
	std::ostream& os = cout;

	// 이제 os는 cout과 동일하다( cout에 대한 별명
	os << 10;// os.operator<<(10) 이다.

	// 하지만 아래처럼 상수 참조로 하면 operator<<()를 호출할 수 없다.
	const std::ostream& cos = cout;
	cos << 10; // Error. "상수 객체는 상수 멤버 함수만 호출할 수 있다."
				// cos.operator<<(10) 에서 "operator<<"는 상수 멤버 함수가 아니다.

}