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

// 6. Design Pattern : 1994년 4명의 엔지니어가 쓴 책의 이름
//						당시 유명한 오픈소스들이 공통으로 사용하던 기법에 이름을 부여한 것

// 7. Prototype 패턴 : 객체의 복사본을 만들기 위한 가상함수(clone)을 만드는 코드에 부여된 이름.

class Shape {
	int color;
	int type;
public:
	virtual ~Shape() {} // 가상소멸자
	// 가상함수 : 파생클래스가 재정의하지 않으면 디폴트 구현을 제공하겠다는 의미.
	// 순수가상함수 : 파생클래스에게 반드시 만들어야한다고 지시하는 것. ( 가상함수 = 0; )
	// draw는 모든 함수에서 필요한 함수이므로 순수가상함수로 구현해야한다.

	// 순수 가상함수가 많아지면 파생 클래스 설계자들이 지켜야하는 규칙이 많아진다.
	// 따라서 중요하지 않은 함수는 가상함수로, optional로 적용하게 하는게 낫다.
	virtual void draw() = 0; //모든 도형은 draw를 만들어라 라고 지시하는게 낫다.// { std::cout << "Draw shape" << std::endl; }
	void setColoc(int c) { color = c; };
	virtual int getArear() const { return 0; }

	virtual Shape* clone() = 0; // 우리 시스템에서 clone 쓰니까 각 도형도 clone 구현해둬라.
	/*{
		Shape* p = new Shape;
		p->color = color;
		return p;
	}*/
};


class Rect : public Shape {

public:
	Rect() {
		type = 1;
	} // 생성자
	virtual void draw() override { std::cout << "Draw Rect" << std::endl; }
	virtual Shape* clone() override
	{
		Rect* p = new Rect;
		return p;
	}
};
};

class Circle : public Shape {
public:
	Circle() {
		type = 2;
	}
	virtual void draw() override { std::cout << "Draw Circle" << std::endl; }
	virtual Shape* clone() override
	{
		Circle* p = new Circle;
		return p;
	}
};

int main() {

	std::vector<Shape*> v;

	while (1) {
		int cmd;
		std::cin >> cmd;

		// 생각해볼 문제 1. 객체의 생성을 OCP를 만족하게 할 수 없을까?
		//					Triangle이 추가되어도 아래 코드가 수정되지 않도록!
		//						==> 추상팩토리라고 불리는 패턴을 공부하면 된다.

		// 2. Undo/Redo 기능을 넣으려면 어떻게 할까?
		//			==> 우리가 창의적으로 생각하지 않아도 되는게,
		//				이 기능은 대부분 구현이 되어있고 일반적인 방식으로 정해져 있을 것이다.
		//				Command 패턴을 공부하면 된다.

		// C++ 문법과 객체지향 프로그래밍 개념을 익히고 나면
		// 꼭 디자인 패턴을 공부해야한다.
		// "이럴 떄는 이렇게 코딩한다" 라고 미리 알려진 좋은 코딩 기법을 학습할 수 있다.

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

			v.push_back(v[k]->clone());
		}
		else if (cmd == -1)
			break;
	}
	// 종료 전에 new로 만든 객체 파괴
	for (auto p : v) {
		delete p;
	}
}