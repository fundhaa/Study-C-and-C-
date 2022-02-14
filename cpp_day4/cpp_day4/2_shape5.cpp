// 2_shape1 - 152 page

#include <iostream>
#include <vector>

// 1. 사각형 만들 때 좌표 4개 받는 것보다, 좌표 두개만 받으면 되듯이
// 모든 도형을 타입으로 설계하면 편하다.

// 2. 공통의 기반 클래스가 있다면 모든 도형을 묶어서 관리할 수 있다.
// class Shape 만들고 각 클래스 뒤에 : public Shape 추가(상속)

// 3. 모든 도형의 공통의 특징이 있다면(draw 함수)
// 그 특징은 반드시 기반 클래스에도 있어야한다.
// 그래야 Shape* 로 모든 도형을 묶어서 사용할 때 해당 특징을 사용할 수 있다.

// 4. 기반 클래스가 가진 함수 중에서 "파생 클래스가 재정의(override)하게 되는 함수"는
// 반드시 가상함수로 해야한다.(논리적으로 그래야한다)
// Shape 클래스의 draw에 virtual 추가
// 기반 클래스에만 virtual 붙여도 되긴 하지만
// 가독성을 위해 상속클래스에도 virtual을 붙여주는게 좋다.

// 5. OCP (Open Close Principle) 개방 폐쇄의 법칙
//		기능 확장에는 열려있고(Open, 나중에 클래스가 추가되어도(triangle 클래스가 추가되어도))
//		코드 수정에는 닫혀있도록(Close, main 함수의 호출은 수정될 필요가 없다)
//		만들어야 한다는 이론(Principle)
// 객체 지향 설계의 5법칙 : SOLID (SRP, OCP, LSP, ISP, DIP)
// 다형성은 OCP를 만족하는 아주 좋은 코딩스타일이다.


class Shape {
	int color;
public:
	virtual void draw() { std::cout << "Draw shape" << std::endl; }
	void setColoc(int c) { color = c; };
	virtual int getArear() const { return 0; }
};

class Rect : public Shape {
	//int x, y, v, h; // 멤버데이터
public:
	// Rect(); // 생성자
	virtual void draw() { std::cout << "Draw Rect" << std::endl; }
};

class Circle : public Shape {
public:
	virtual void draw() { std::cout << "Draw Circle" << std::endl; }
};

class Triangle :public Shape {
public :
	virtual void draw() { std::cout << "Draw Triangle" << std::endl; }
};

int main() {

	std::vector<Shape*> v;

	while (1) {
		int cmd;
		std::cin >> cmd;

		if (cmd == 1) {
			Rect rc;
			Rect* p = new Rect;
			v.push_back(p);
		}
		else if (cmd == 2) {
			v.push_back(new Circle);
		}
		else if (cmd == 9) {
			for (auto p : v)
				p->draw(); // 동일한 표현식이지만 상황에 따라 다른 일을 한다.(사각형도 그리고 원도 그림.)
							// 다형성 : 상황에 따라 다르게 동작한다.
							// 객체지향언어의 3대 특징 : 캡슐화, 상속, 다형성(가상함수)
		}
	}
}