// 17_reference2.cpp
#include <iostream>
using namespace std;

int main() {
	int n = 100;
	int* p = NULL; //초기화를 하지 않아도 된다. 하지만 쓰레기 값을 담으므로 유효한 메모리인지 어떤 메모리인지 모른다.
	// NULL 포인터의 개념은 존재

	int& r = n; // 반드시 초기화를 해야한다. NULL 레퍼런스는 존재하지 않는다.
}