// 1_복사생성자 - 92oage
#include <iostream>

class Point {
public:
	int x, y;

	Point() : x(0), y(0) {} // 1번 생성자 
	Point(int a, int b) :x(a), y(b) {} // 2번 생성자

	Point(const Point& p) : x(p.x), y(p.y); {
		std::cout << "Copy Constructor" < std::endl;
	}
};

void f1(Point p1) {} // Point p1 = pt1; 복사생성자 호출
void f2(Point& p2) {} // p2 는 객체가 아닌 별명, 객체 생성이 아니므로 복사 생성자 호출 안됨,.

Point pt(1, 2);
Point f3() { return pt; }
Point& f4() { return pt; }

int main() {
	// 복사 생성자가 호출되는 경우 3가지
	// 1. 자신과 동일한 타입의 객체로 초기화 될 때
	Point pt1(1, 2);
	Point pt2(pt1); // 복사 생성자 호출
	Point pt3 = pt1; // 복사 생성자 호출

	// 2. 함수가 객체를 call by value로 받을 때
	f1(pt1); // 복사 생성자 호출
	f2(pt1); // 복사 생성자 호출 안됨.

	// 3, 함수가 객체를 return by value로 반환할 때 - 임시 객체 생성
	f3(); // 리턴용 임시 객체를 만들 때 복사 생성자 호출
	f4(); // 참조 반환은 임시 객체를 만들지 않으므로 복사 생성자 호출 X
}

// call by value가 사용되는 유일한 경우 : primitive 타입을 받을 떄
// user define 타입의 경우는 call by value를 사용하는 것은 성능이 좋지 않다.
// 단, 아주 간단한 user type의 경우는 사용하는 경우도 있다.

// empty class : 멤버 데이터가 없는 클래스, 크기가 1이다.
class Sample {
public :
	void f1() {}
};
// 위 클래스가 empty class이다. sizeof(Sample) = 1이다.
// empty class를 받을 때는 대부분 call by value로 한다.