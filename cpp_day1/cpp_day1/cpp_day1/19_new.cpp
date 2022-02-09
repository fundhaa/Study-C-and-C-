#include <iostream>
#include <cstdlib>
using namespacestd;

// 동적 메모리 할당
// malloc / free : (함수)사용자가 원하는 시점에 메모리할당 / 해제

// new / delete : (연산자)

// 1. malloc은 size를 전달하지만 new는 type을 전달한다.
// 2. malloc은 void*를 반환하기 때문에 캐스팅이 필요하다.
// 3. 반면 new는 전달한 타입의 주소타입을 반환하기 때문에 캐스팅이 필요하지 않다.
// 4. int* p = new int; / delete p;
//	  int* p = new int[10]; / delete[]p;
//	   - 연속된 메모리를 new로 할당한 경우 delete[] 연산자를 사용해야 함.

int main() {
	int* p1 = static_cast<int*>(malloc(sizeof(int))); // 4 bytes
	int* p2 = new int; //type의 사이즈 만큼 할당 됨. 4 bytes
	free(p1);
	delete p2;

	int* p3 = static_cast<int*>(malloc(sizeof(int) * 10)); //40 bytes
	free(p3);

	int* p4 = new int[10];// int[10] -> 40 bytes
	delete[] p4;

}