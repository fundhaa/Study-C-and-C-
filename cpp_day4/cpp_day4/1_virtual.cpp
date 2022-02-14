#include <iostream>

class Animal {
	int age;
public:
	void cry1() { std::cout << "Animal cry1" << std::endl; } // 1

	// 가상함수(virtual) : dynamic binding 해달라는 지시어(실행시간에 호출을 결정해달라)
	virtual void cry2() { std::cout << "Animal cry2" << std::endl; }
};
class Dog :public Animal {
public:
	// override : 기반 클래스의 멤버함수를 파생 클래스가 다시 만드는 것(완전히 똑같이)
	// overloading : 인자의 갯수와 타입이 다른 경우( square(int), square(double)
	void cry1() { std::cout << "Dog cry1" << std::endl; } // 2 override

	// 가상함수(virtual) : dynamic binding 해달라는 지시어(실행시간에 호출을 결정해달라)
	virtual void cry2() { std::cout << "Dog cry2" << std::endl; }

};

int main() {
	Animal a; a.cry1(); // 1 Animal cry1
	Dog d; d.cry1(); // 2 Dog cry1

	//컴파일러는 p가 가리키는 객체가 무엇인지는 알 수가 없다.
	//if(사용자입력 == 1) p = &a;

	Animal* p = &d;
	p->cry1(); // 컴파일 할 때 부름. Animal cry1
				// 객체가 Dog이므로 논리적으로는 Dog cry1를 호출하는게 맞다.
				// C++, C# : Animal cry1
				// java, swift, kotlin, python : Dog cry1

	p->cry2(); // 실행할 때 부름. Dog cry2
				// 실행시간에 메모리 보고 결정함. 
}
// 161 page, 함수 바인딩(모든 객체지향언어에 공통적으로 해당)

// p->cry1() 를 어느 함수와 연결할 것인가? "함수 바인딩"
/*
1. static binding : 컴파일러가 컴파일시간에 함수 호출을 결정하는 것.
					컴파일러는 p가 가리키는 객체가 무엇인지 알 수 없다.
					컴파일러가 아는 정보는 p 자체의 타입이 "Animal*"이라는 것 뿐이다.
					그래서 무조건 포인터 타입으로 호출.
					Animal cry1 호출
					(무지성 연결이라고 생각하면 될 듯)
					빠르지만 논리적이지는 않다. early binding
					C++, C#은 static binding을 기본으로 하나 dynamic binding을 요청할 수 있다.(가상함수 사용)
		
2. dynamic binding : 컴파일 시간에 p가 가리키는 곳을 조사하는 기계어 코드를 생성한다.
					실행시간에 p가 가리키는 곳을 조사하는 코드를 실행 후 결정
					p가 가리키는 곳에 놓인 실제 객체에 따라 함수 결정
					Dog 객체라면 Dog cry1 호출
					(조사한 후 호출하는거라 정확한 타입을 호출한다.)
					메모리 영역에 접근해야하기 때문에 느리지만 논리적이다. late binding
					java, swift, python, kotlin
*/