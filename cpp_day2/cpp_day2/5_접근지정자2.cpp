// 5_접근지정자2 - 74 page

#include <string>
#include <iostream>

// struct : 기본적으로 public (접근지정자 생략시)
// class : 기본적으로 private (접근지정자 생략시)

// C++ : struct와 class 차이는 위 한가지만 다르고 완전히 동일하다.
// 다른 언어(C#, JAVA)에서는 차이가 꽤 큰 편이다.

//struct Person
class Person // 접근 지정자 생략시 private
{
//private:				// 이렇게 되면 public이다.
	std::string name;
	int age;

public:	
	void setAge(int value) {
		if (value > 0 && value < 150) {
			age = value;
		}
	}
};

int main() {

	Person p;
	p.setAge(-10);
}