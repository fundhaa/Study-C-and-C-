

// 추상클래스 : 순수 가상함수가 한개 이상 있는 클래스
// 특징 : 객체를 생성할 수 없다.
// 의도 : 특정 함수를 반드시 만들라고 지시하는 것.

class Shape {
public:
	virtual void draw() = 0; // 순수 가상함수(pure virtual function)
							// 구현이 없고 =0 으로 끝나는 가상함수
	virtual ~Shape() {}
};

class Rect : public Shape {
public:
	// Shape로부터 물려받은 순수 가상함수인 draw()의 구현부를 제공하지 않으면 Rect도 추상클래스이다.
	virtual void draw() override {}
};

int main() {
	Shape s; // ERROR. 추상클래스는 객체를 만들 수 없다.
	Shape* p; // 하지만 포인터 변수를 만드는 것은 괜찮다. 
	Rect r; // ERROR, Rect에 draw()를 구현하면 Error 해결
}