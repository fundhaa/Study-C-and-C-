//189 page
// cout으로는 사용자정의타입을 출력할수 없다(X)
// 출력할 수 있다.

#include <iostream>

class Point {
	int x, y;
public:
	Point(int a, int b) : x(a), y(b) {}

	friend std::ostream& operator<<(std::ostream& os, const Point& pt);
};

// 사용자 정의 타입을 cout으로 출력할 때 필요한 함수
std::ostream& operator<<(std::ostream& os, const Point& pt) {
	os << pt.x << ", " << pt.y;
	return os;
}

int main() {
	Point pt(1, 2); // 저 위에서 pt 앞에 const 붙여주면 실수로 const 값을 바꾸는 걸 방지할 수 있다.
	std::cout << pt; // 가능한가?
					// 1. cout.operator<<(Point) 모양의 함수가 있으면 된다.
					//   ==> 이미 만들어져있는 C++ 표준 클래스에 사용자가 멤버를 추가할 수는 없다.
					//   ==> 결론은 멤버함수로 추가할 수는 없다.
					// 
					// 2. 멤버가 안되면 일반함수로 하면 된다.
					//   ==> operator<<(std::cout, pt)
					//   ==> operator<<(ostream, Point)의 모양이 있으면 된다.
}