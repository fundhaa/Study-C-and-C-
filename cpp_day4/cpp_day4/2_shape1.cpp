// 2_shape1 - 152 page

#include <iostream>
#include <vector>

// 1. 사각형 만들 때 좌표 4개 받는 것보다, 좌표 두개만 받으면 되듯이
// 모든 도형을 타입으로 설계하면 편하다.

// 2. 공통의 기반 클래스가 있다면 모든 도형을 묶어서 관리할 수 있다.
// class Shape 만들고 각 클래스 뒤에 : public Shape 추가(상속)
class Shape {

};

// 생성자 만들어서 초기화하고, 멤버데이터 넣고 등등 해야함.
// 근데 편의를 위해 멤버데이터, 생성자 생략.
class Rect : public Shape {
	int x, y, v, h; // 멤버데이터
public:
	Rect(); // 생성자
	void draw() { std::cout << "Draw Rect" << std::endl; }
};

class Circle : public Shape {
public:
	void draw() { std::cout << "Draw Circle" << std::endl; }
};

int main() {
	//std::vector<Rect*> v; // 모든 도형을 보관하기 위해 만든 vector인데 Rect만 넣을 수 있고 Circle은 못넣음
	//std::vector<Circle*> v2; // 이건 circle만 보관할 수 있는데 중요한건 rect와 circle의 만든 순서를 저장하지 못한다.
	// 이걸 묶어서 보관해야한다.
	// 공통의 기반 class가 있으면 함꼐 보관 가능하다.

	std::vector<Shape*> v; // 모든 도형을 보관하는 vector 생성
}