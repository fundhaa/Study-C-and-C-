//7_struct.cpp

#include <iostream>
using namespace std;

struct Point {
	// 멤버 초기화 - C++11
	int x = 10;
	double y = 20;
	short z = 30;
};

int main() {
	Point p;
	// 과거의 방식
	//int x = p.x;
	//int y = p.y;
	//int z = p.z;
	
	// C++17 => structured binding seclaration
	// 1) auto를 사용해야한다.
	// 2) 개수가 일치해야 한다.
	// 3) 구조체/배열에 대해 사용할 수 있다.
	auto [x, y, z] = p;

	cout << x << ", " << y << ", " << z << endl;

	int arr[3] = { 1, 2, 3 };
	auto [a, b, c] = arr;
	cout << a << b << c << endl;
	// 여기서 에러나면 프로젝트 속성가서 C++ 언어표준에서 C++17 표준으로 바꿔줘야 함.
}