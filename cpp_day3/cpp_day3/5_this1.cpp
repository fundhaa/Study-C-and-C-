// 5_this1 -126page
// python의 self 와 비슷.

#include <iostream>

// 1. 객체 생성시 멤버 데이터만 객체당 한개씩 생성된다.
// 2. 멤버 함수는 코드메모리에 한개만 있다.
class Point {
	int x, y;
public :
	// 멤버함수는 결국 컴파일 되면
	// 첫번째 인자로 객체의 주소를 받을 수 있게 변경된다.
	void set(int a, int b) { // 객체가 몇개 있건간에 set은 코드메모리에 하나 있음.
							// void set(Point* this, int a, int b)
		x = a;				// this-> = a;
		y = b;				// this-> = b;
	}
};

int main() {
	Point p1;
	Point p2;

	// set함수는 코드메모리에 하나 있는데 어떻게 p1의 x인지 p2의 x인지 파악할까?
	p1.set(10, 20); // set(&p1, 10, 20) 으로 컴파일러가 변경한다.
	p2.set(10, 20); // set(&p2, 10, 20) 으로 컴파일러가 변경한다.
	// 그래서 p1의 x, y주소에 10, 20 할당해줘, p2의 x, y주소에 10, 20 할당해줘가 가능하다.
}

// C++ : 컴파일러가 멤버 함수 변경
// void set(int a, int b) ==> void set(Point* this, int a, int b)

// 파이썬 : 개발자가 직접 this 를 코딩해라
/*
class Point : 
	def __init__(self, a, b) : 
		self.x = a
		self.y = b
*/