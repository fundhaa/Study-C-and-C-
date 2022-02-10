// 5_생성자1 - 78page

#include <iostream>

class Point {
	int x;
	int y;
public:
	// 생성자 : 1. 클래스 이름과 동일한 이름이 함수
	//			2. 반환타입을 표기하지 않고 값도 반환할 수 없다.
	//			3. 객체를 생성하면 자동으로 생성자가 호출된다.
	//void init(){
	Point() {
		x = 0;
		y = 0;
		std::cout << "Point()" << std::endl;
	}

	//생성자는 인자가 있어도 되고 없어도 된다.
	//2개 이상 만들 수 있다는 의미(오버로딩 가능)
	Point(int a, int b) {
		x = a;
		y = b;
		std::cout << "Point(int, int)" << std::endl;
	}
};


/// <summary>
/// 타입 설계자 입장에서는 조금 복잡해지지만 사용자 입장에서는 사용하기가 쉬워진다.
/// 타입을 잘 만들어놓으면 수백명의 사용자들은 편하게 사용할 수 있다.
/// 이게 객체지향언어의 컨셉.
/// </summary>

int main() {
	// 모든 멤버가 public에 있다면 아래처럼 초기화 가능하다.(C언어 구조체 문법)
	// private에 있다면 아래 코드는 에러이다.
	//Point p1 = { 1, 1 };
	Point pt; // 이 순간 생성자가 불리고 private에 있는 멤버를 초기화 함. 인자가 없는 생성자 호출
	//pt.init();
	Point pt2(1, 2); // 인자가 2개인 생성자 호출
}