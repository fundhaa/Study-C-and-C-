// 1_복사생성자 - 92oage
#include <iostream>

class Point {
public:
	int x, y;

	// 디폴트 생성자 : 인자가 없는 생성자
	Point() : x(0), y(0) {} // 1번 생성자 : 생성자 중에서 인자가 없는게 디폴트 생성자
	Point(int a, int b) :x(a), y(b) {} // 2번 생성자
	// 복사 생성자 : 자신과 동일한 타입의 객체를 인자로 받는 생성자(not default 생성자)
	// 사용자가 만들지 않으면 컴파일러가 제공
	// 모든 멤버를 복사해준다.
	// 컴파일러가 만들어주는 복사생성자는 아무일도 하지 않는다(X) => 모든 멤버를 복사해준다.(O)
	Point(const Point& p) : x(p.x), y(p.y); {

	}
};

int main() {
	//
	Point p1; // 인자가 없는 1번 생성자
	Point p2(1); // 인자 1개짜리 생성자가 없으므로 ERROR - Point(int) 타입의 생성자가 없다.
	Point p3(1, 2); // 인자가 2개인 2번 생성자
	Point p4(p3); // Point(Point) 모양의 생성자가 필요, 사용자가 만들지는 않았지만 컴파일러가 생성해줬기 때문에 에러 아님.
	// p4의 멤버는 p3와 같이 1, 2의 멤버로 초기화가 된다.
	Point p5 = p3 // Point p5(p3)와 동일, 즉 복사생성자 호출
}