#include <iostream>

// 객체지향프로그래밍(Object Oriented Programming , OOP)
// -> 필요한 타입을 먼저 설계하자.

// "Point", "Rect", "Person" 같은 것만 만드는게 아님.
// 다양한 개념의 타입을 설계하는 것.

// 동적 배열(vector)을 타입으로 설계하기

class vector {
	int* ptr;
	int size;
public:
	vector(int sz) {
		size = sz;
		ptr = new int[sz];
	}
	// 이 클래스는 생성자에서 자원할당(메모리할당)을 하고 있다
	// 이 경우 대부분 소멸자를 만들어서 메모리 해지를 해야한다
	~vector() {
		delete[] ptr;
	}
};

int main() {
	vector v(5); // 5개 짜리 동적 배열
	v.resize(10);// 10개로 크기 변경
}