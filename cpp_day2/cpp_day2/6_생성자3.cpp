// 5_셍성자3-78 page

#include <iostream>

class Point
{
	int x;
	int y;
public:
	// 1. 객체 생성시 반드시 생성자가 호출되어야한다.
	// 2. 사용자가 생성자를 한개도 만들지 않으면 컴파일러가 인자 없는 생성자 제공
	//     => "디폴트 생성자" : 인자가 없는 생성자
	Point() { x = 0; y = 0; std::cout << "Point()" << std::endl; }
	Point(int a, int b) { x = a; y = b; std::cout << "Point(int, int)" << std::endl; }
};

int main() {
	Point p1; // 사용자가 Point 정의 안해줘도 빌드는 된다.
	Point p2(1, 2);
	//Point p3(1); // error. 인자가 한개인 생성자는 업다.
	//-------------------------------------------

	Point arr1[5]; // 1번 생성자 5회 호출 p1
	Point arr2[5] = { {1,1} ,{2,2} }; // 2번생성자 2회 p2, 1번 생성자 3회 p3

	Point* p; //객체 생성이 아니다. 생성자 호출 안됨.

	p = static_cast<Point*>(malloc(sizeof(Point))); // 1. 8바이트 메모리 할당해라
													// 2, Point 객체 생성해라.
													// 답은 1번. 생성자를 못부른다.
	free(p);
	p = new Point; // Point 객체 한개를 힙에 할당해라, 생성자 호출
	delete p;

	p = new Point(1, 2); // 2번 생성자
	delete p;

	// 그래서 C++ 에서 객체 생성 시 malloc 대신 new를 사용해야 한다.
}