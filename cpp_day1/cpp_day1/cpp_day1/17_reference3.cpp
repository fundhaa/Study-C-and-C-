//17_reference3.cpp
#include <iostream>
using namespace std;

// call by value
// : 인자의 값이 복사된다.
// 함수를 통해서 전달된 변수의 값을 변경하는 것이 불가능하다. => 읽기전용
void inc1(int n) { // call by value
	++n;
}

// call by pointer
// : 변수의 주소값이 전달된다.
// 주소값의 참조를 통해 값을 변경하거나 읽는 것이 가능하다.
// => 읽기 / 쓰기 가능

void inc2(int* p) { // call by pointer(= C언어의 call by reference)
	++(*p);
}

// call by reference
// : 변수에 새로운 이름을 부여해서 값을 읽거나 변경할 수 있다.
// => 읽기 / 쓰기 가능
void inc3(int& r) {
	++r;
}

int main() {
	int n = 0;
	inc1(n); // 0
	//inc2(&n); // 1
	//inc3(n); // 1
	cout << n << endl;

}