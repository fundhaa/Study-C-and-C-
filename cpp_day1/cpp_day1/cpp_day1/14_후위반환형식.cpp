//14_후위 반환 형식.cpp
#include <iostream>
using namespace std;

// C++11
// > 함수를 만드는 새로운 방법을 제공한다.
// : 후위반환형식 함수
// C++ : auto fn(int a, int b) -> int
// Kotlin : fun fn(a: Int, b: Int) : Int
// Swift : func fn(a: Int, b: Int) -> Int

//전동적인 함수의 형태
// int : 반환타입, int a, int b : 파라미터, return a+b : 반환값
// 복잡한 반환타입을 가지는 함수를 표현하는 어려움이 있다.
int add(int a, int b) { return a + b; } // 1번

// 
auto add(int a, int b) -> int { return a + b; } // 2번 : 후위반환형식

//int (*foo())(int, int)//1번
auto foo() -> int(*)(int,int) // 2번 : 후위반환형식
{
	return &add; // int(*)(int, int)
}

int main() {

}