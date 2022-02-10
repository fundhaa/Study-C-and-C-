// 5_접근지정자 - 74 page

#include <string>
#include <iostream>

// 핵심 : 타입을 만들 떄 사용하기 쉽고 안전하게 만들어야한다.

// 외부의 잘못된 사용으로부터 객체의 상태가 불안해지는 것을 막는다.

// 캡슐화(encapsulation)
// 데이터를 외부에서 직접 접근할 수 없게 하고
// 잘 정의된 멤버 함수를 통해서만 변경 가능하게 한다.

struct Person
{
	// 접근지정자가 나오고 다른 접근지정자가 나오기 전까지는 해당 접근지정자의 영역이다.
	// name 이랑 age 는 private 영역
private:				// private 영역 : 멤버함수에서만 접근 가능.
						//				  멤버함수가 아닌 곳에서 접근시 에러
	std::string name;
	int age; // 구현자가 여기에 음수는 안들어가게 만들었어야 함.

public:					// public 영역 : 모든 곳에서 접근 가능.
	void setAge(int value) {
		// 인자값의 유효성을 확인 한 후에 객체의 상태를 변경한다.
		if (value > 0 && value < 150){
			age = value;
		}
		else {
			std::cout << "나이를 정확히 입력해주세요." << std::endl;
			std::cout << name << std::endl;
		}
	}
};

int main() {

	Person p;
	//p.age = -10; // Person 타입 사용자가 실수함.
				 // 현실세계에 존재할 수 없는 객체가 생성
				 // private을 적용해서 main에서 접근 못하도록 함. compile 에러
	p.setAge(-10); // public 영역에 있는 setAge 함수로 접근

}