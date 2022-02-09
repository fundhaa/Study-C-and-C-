#include <iostream>
#include<cstdlib>
using namespace std;

// 1. static cast
// 가장 기본적인 C++ 캐스팅 연산자
// 컴파일 타임에 캐스팅을 수행한다. (static의 의미는 컴파일 타임)
// 런타임에 동작하지 않으므로 성능저하 없다.
// 연관성 없는 타입에 대한 캐스팅은 실패한다.

int main() {
	// void* -> T*
	// void 포인터를 특정 타입으로 변환하는 것만 허용
	// int *p = (int*)malloc (sizeof(int));
	int* p = static_cast<int*>(malloc(sizeof(int))); // 정상

	int n = 10;
	//double* pd = (double*)&n; // C언어의 경우 OK
	double* pd = static_cast<double*>(&n); // ERROR
	char* pd = static_cast<char*>(&n); // ERROR
}

//////////////////////////////////////////

// 2. reinterpret_cast
// => 메모리를 재해석하는 용도로 사용한다.
// C언어와 가장 비슷

int main() {
	int* p = static_cast<int*>(malloc(sizeof(int)));

	int n = 10;
	char* pc = reinterpret_cast<char*>(&n); // 정상
	printf("%x %x %x %x\n", pc[0], pc[1], pc[2], pc[3]);
}

//////////////////////////////////////////

// 3. const_cast
// : 메모리의 상수성을 제거하기 위해서 사용
// - const T* -> const_cast<T*> -> T*
// 타입의 불일치 문제를 해결하기 위한 용도로 사용
void foo(int* p) {
	cout << *p << endl;
}

int main() {
	const int n = 100;
	cout << &n << endl; // 모든 변수는 주소를 가진다.
	// &n : const int *
	// 타입 불일치
	foo((int*)&n); // 정상 const int* -> int*
	foo(static_cast<int*>(&n)); // ERROR
	foo(reinterpret_cast<int*>(&n)); // ERROR	// 메모리를 재해석하는게 아니라 const를 뗴네는게 다른 의미라고 파악하기 때문에 에러
	foo(const_cast<int*>(&n)); // 정상
}

//////////////////////////////////////////