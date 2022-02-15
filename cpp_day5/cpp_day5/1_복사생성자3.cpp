// 1_복사생성자 - 92oage
#include <iostream>

class Point {
public:
	int x, y;

	// 생성자 자동생성 규칙
	// 1. 복사 생성자를 만들지 않으면 컴파일러가 복사 생성자를 제공한다.
	//	=> 흔히 default copy constructor 라고도 한다.

	// 2. 어떠한 종류의 생성자라도 사용자가 만든 것이 없을 때만 컴파일러가 디폴트 생성자 제공.
	//	=> 복사 생성자도 생성자의 일종이다.
	//	=> 복사 생성자만 만들어주면 디폴트 생성자 제공하지 않는다.

	//Point() : x(0), y(0) {} // 디폴트 생성자

	Point(const Point& p) : x(p.x), y(p.y); {}  // 복사 생성자, 이걸 주석처리해도 컴파일러가 알아서 만들어준다.
};

int main() {
	Point p1;		// 디폴트 생성자 호출
	Point p2(p1);	// 복사 생성자 호출
}

// special member function
// => 사용자가 만들지 않으면 컴파일러가 만들어주는 멤버함수
// 1. 생성자
// 2. 소멸자
// 3. 복사 생성자
// 4. 대입 연산자 (p3 = p4일때, p3.operator=(p4))
// 5. move 생성자
// 6. move 대입 연산자
