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
	int type; // 어떤 도형인지 관리하자
public:
	virtual void draw() { std::cout << "Draw shape" << std::endl; }
	void setColoc(int c) { color = c; };
	virtual int getArear() const { return 0; }

	// 모든 도형의 복사본을 만들 수 있는 가상함수를 제공
	// 이런 가상함수는 아주 유용하다.
	virtual Shape* clone()
	{
		Shape* p = new Shape;
		p->color = color; // 자신과 완전히 동일하게 보이도록 모든 멤버를 복사
		return p;
	}
};
// Shape* p1 = new Shape;
// Shape* p2 = p1->clone(); // 복사본 생성

class Rect : public Shape {
	//int x, y, v, h; // 멤버데이터
public:
	Rect() {
		type = 1;
	} // 생성자
	virtual void draw() { std::cout << "Draw Rect" << std::endl; }
	virtual Shape* clone()
	{
		Rect* p = new Rect;
		// x, y, w, h등 모든 멤버를 자신과 동일하게 복사하는 코드 추가
		return p;
	}
};
};

class Circle : public Shape {
public:
	Circle() {
		type = 2;
	}
	virtual void draw() { std::cout << "Draw Circle" << std::endl; }
	virtual Shape* clone()
	{
		Circle* p = new Circle;
		// 모든 멤버를 자신과 동일하게 복사하는 코드 추가
		return p;
	}
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
				p->draw();
		}
		else if (cmd == 8) {
			std::cout << "몇번째 만든 도형을 복제할까요 >> ";
			int k;
			std::cin >> k;
			// k번째 만든 도형의 복사본을 생성한다.
			v.push_back(v[k]->clone()); // 다형성
										// k번째 타입은 모르지만 복사본 생성하달라고 하면
										// 객체에 따라 적절한 함수가 호출됨 (OCP를 만족)
			// C언어 방식
			//switch (type) :
			//	case 1: v.push_back(new Rect); break;
			//	case 2: v.push_back(new Circle); break;
		}
	}
}