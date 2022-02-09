//7_struct.cpp

#include <iostream>
using namespace std;

struct Point {
	// ��� �ʱ�ȭ - C++11
	int x = 10;
	double y = 20;
	short z = 30;
};

int main() {
	Point p;
	// ������ ���
	//int x = p.x;
	//int y = p.y;
	//int z = p.z;
	
	// C++17 => structured binding seclaration
	// 1) auto�� ����ؾ��Ѵ�.
	// 2) ������ ��ġ�ؾ� �Ѵ�.
	// 3) ����ü/�迭�� ���� ����� �� �ִ�.
	auto [x, y, z] = p;

	cout << x << ", " << y << ", " << z << endl;

	int arr[3] = { 1, 2, 3 };
	auto [a, b, c] = arr;
	cout << a << b << c << endl;
	// ���⼭ �������� ������Ʈ �Ӽ����� C++ ���ǥ�ؿ��� C++17 ǥ������ �ٲ���� ��.
}