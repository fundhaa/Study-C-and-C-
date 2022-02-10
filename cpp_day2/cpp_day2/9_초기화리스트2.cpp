#include <iostream>
#include <string>

class Person {
	std::string name;
	int age;
public:
	Person(xonst std::string& s, int a) : name(s), age(a)  // 초기화 initialization
		name = s;
		age = a; // 초기화가 아닌 대입 assignment
	}
};
int main() {
	Person p("Ha", 28);

	// 초기화 vs 대입
	// 1. premitive type의 경우 초기화와 대입은 거의 동일하다
	int a = 10; // 초기화, 변수를 만들면서 넣는 것
	
	int b;
	b = 10; // 대입, 변수를 만든 후에 넣는 것

	// 2. user type 의 경우는 많이 다르다
	std::string s1("Ha"); // 생성자 1회 호출되어 초기화가 된다.

	std::string s2; // 1. 디폴트 생성자 호출
	s2 = "Ha";		// 2. 대입연산자 호출(s2.operator=("Ha")

	// 3. 초기화는 되지만 대입이 안되는 것 = const
	const int c = 10; // 정상, 초기화 가능
	c = 20; // ERROR, 대입은 안됨.

}