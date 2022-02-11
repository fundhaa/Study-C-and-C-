#include <iostream>

class Point {
public:
	int x, y;
	Point(int a, int b): x(a), y(b){}
	
	void set(int a, int b)
	{
		x = a;
		y = b;
	}
	// 상수 멤버 함수(const member function) = 멤버함수 () 뒤에 const를 붙이는 문법
	// 컴파일러에게 이 함수에서 절대 값을 안바꿀테니 const 객체에서 이 함수 호출할 수 있게 해줘
	// 1. 해당 멤버 함수에서는 멤버데이터를 수정할 수 없다.
	// 2, 상수객체라도 상수 멤버 함수는 호출할 수 있다.
	//void print() {
	void print() const {
		//x = 10; // 이렇게 쓰면 컴파일 ERROR
		std::cout << x << ", " << y << std::endl;
	}
};



int main() {

	const Point p(1, 2);

	// 아래 3줄 생각해보기
	p.x = 10; // error, public에 있지만 상수객체이므로
	p.set(10, 20); // error, 상수객체이므로 x, y 변경할 수 없다.
	p.print(); // error, 내부적으로 값을 바꾸는게 없더라도 안된다.
				// 컴파일러는 멤버 함수의 선언만 보게 된다.
				// 그래서 멤버 함수에서 데이터를 수정하는지 알 수는 없다.
				// 따라서 상수 객체(const)일떄는 멤버함수를 호출할 수 없다.
				// 단 print()가 상수 멤버함수라면 에러가 아니다.
}