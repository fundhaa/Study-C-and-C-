#include <iostream>
using namespace std;

//함수 오버 로딩
// 1. 함수의 '인자정보(타입, 개수)'가 다를 경우, 동일한 이름의 함수를 여러개 만들 수 있다.
/*
void foo(int a){ }
void foo(int a, int b){ }
*/

// 2. 함수의 반환 타입에 대해서는 함수 오버로딩이 불가능하다.
// 같은 이름에 int, void가 다르고 들어가는 인자가 같아서 오버로딩 불가능
/*
int foo(){ }
void foo(){ }
*/

// 3. 기본 파라미터와 사용할 경우, 호출에서 모호성 오류가 발생할 수 있다. 
void foo(int n = 0) {} // foo()
void foo() {} // foo()

int main() {
	// foo();
	//  foo(int n = 0) or foo()   => 모호성 오류

}