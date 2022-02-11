// 2_static_member_data3 - 110 page
#include <iostream>

// 방법3. static 멤버 데이터
// 1. 클래스 외부에서 선언이 필요하다.
// 특징
// 1. 객체를 생성하지 않아도 메모리에 놓이게 된다.
//		==> 접근 지정자 사용이 가능해진, Car 전용 전역변수처럼 생각하면 된다.
// 2. 객체 생성시는 non-static 멤버만 객체의 크기에 포함된다.
// 3. 클래스 이름 또는 객체 이름으로 접근 가능하지만 되도록 클래스이름으로 접근하는게 좋다.
//		==> "Car::cnt"

class Car
{
	int color; // "instance member" 라고도 한다.
public:
	// int cnt = 0; // 객체당 한개씩 생성
	static int cnt; // 모든 객체가 공유
	Car() { ++cnt; }
	~Car() { --cnt; }
};
// static 멤버 데이터는 반드시 외부 선언이 필요하다
int Car::cnt = 0; // Car가 사용하는 cnt 변수이고 0으로 초기화가 되어있다.
// 객체를 안만들어도 메모리에 있기 때문에 전역변수이다.
// 객체 c1, c2를 생성하면 그 객체 안에 static이 아닌 변수만 놓인다. c1, c2 안에는 결국 color만 놓인다.
// c1을 만들 때 Car::cnt가 증가되어 1이 되고, c2를 만들 떄 다시 Car::cnt가 증가되어 2가 된다.


int main() {
	Car c1;
	Car c2;

	// 자동차가 몇대나 만들어졌는지 갯수를 파악하고 싶다.
	// 접근하는 방법은 두가지이다. (public에 있을 때)
	std::cout << c1.cnt << std::endl; // 1. 객체이름.static 멤버이름

	// 객체가 없어도 static 멤버 데이터는 메모리에 있다.
	std::cout << Car::cnt << std::endl; // 2. 클래스이름::static 멤버이름
	// 1번은 "cnt" 가 static 인지 아닌지 구별이 어렵다.
	// 2번을 권장한다.
}