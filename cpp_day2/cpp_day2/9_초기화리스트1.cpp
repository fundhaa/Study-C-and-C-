#include <iostream>
#include <string>

class Person {
	std::string name;
	int age;
public:
	// 멤버 초기화 리스트 : 생성자 () 뒤에 : 를 적고 멤버를 초기화
	Person(xonst std::string& s, int a) : name(s), age(a) // <== 이 코드가 좋다.
	{	//아래처럼 초기화 하는 것은 좋지 않다.
		name = s;
		age = a;
	}
};
int main() {
	Person p("Ha", 28);
}