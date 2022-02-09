#include <iostream>
using namespace std;

struct Point {
	int x;
	int y;
};

// C++ 초기화 방법
int main() {
	// C언어에서는 이 방법만 가능
	// Copy initialization
	int n1 = 42;
	int x1[3] = { 1, 2, 3 };
	Point point1 = { 10, 20 };

	// Direct Initialization
	int n2(42);
	int x2[3]{ 1, 2, 3 };
	Point point2{ 10, 20 };

	// C++11 
	// Direct 방식을 보면 괄호가 다 다르다
	// Uniform Initialization : 그래서 일관된 초기화 방법을 통해 변수를 초기화 하는 방법이 생김

	// Copy initialization
	int n3 = { 42 };
	int x3[3] = { 1, 2, 3 };
	Point point3 = { 10, 20 };

	// Direct Initialization
	int n4{ 42 };
	int x4[3]{ 1, 2, 3 };
	Point point4{ 10, 20 };
}