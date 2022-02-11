#include "1_Point.h"

// 클래스 사용자는 헤더파일만 포함하면 된다.

Point::Point(int a, int b) : x(a), y(b) {}
Point::~Point() {}

// 이 의미 : 나는 일반함수가 아니라 Point 클래스의 멤버함수이다.
void Point::set(int a, int b) {
	x = a;
	y = b;
}
