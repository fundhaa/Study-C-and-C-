// 참조반환1
#include <iostream>

class Point {
public:
	int x, y;

	~Point() { std::cout << "~Ponit()" << std::endl; } // 소멸자가 불리는지 확인하기 위해 로깅
};
/*
// 아래 두 함수의 차이점(인자 전달 방식)을 완벽히 이해해보자
void f1(Point p1) {}  // call by value , 복사본 객체 생성
void f2(Point& p2) {} // call by reference , 복사본 객체 생성 안됨.

int main() {
	Point pt = { 1, 2 };
	f1(pt);
	f2(pt);
}
*/
Point pt = { 1, 2 }; // 전역변수
Point f1() { // return by value, pt의 복사본 리턴
	return pt; // 리턴을 위한 임시 객체(pt);
				// return 임시 객체;
}
Point& f2() { // return by reference, 리턴용 임시객체를 만들지 말라는 것.
	return pt; // pt의 별명을 반환, 임시객체를 생성하지 않는다.
}
int main()
{
	f1(); // 이 라인에서 임시객체를 return 함과 동시에 소멸자가 불린다.

	f2(); // 임시 객체 어떠한 것도 만들어지지 않는다.
}