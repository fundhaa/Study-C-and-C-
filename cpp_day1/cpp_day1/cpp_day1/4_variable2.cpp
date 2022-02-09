#include <iostream>
using namespace std;

struct Point {
	int x;
	int y;
};

// C++ �ʱ�ȭ ���
int main() {
	// C������ �� ����� ����
	// Copy initialization
	int n1 = 42;
	int x1[3] = { 1, 2, 3 };
	Point point1 = { 10, 20 };

	// Direct Initialization
	int n2(42);
	int x2[3]{ 1, 2, 3 };
	Point point2{ 10, 20 };

	// C++11 
	// Direct ����� ���� ��ȣ�� �� �ٸ���
	// Uniform Initialization : �׷��� �ϰ��� �ʱ�ȭ ����� ���� ������ �ʱ�ȭ �ϴ� ����� ����

	// Copy initialization
	int n3 = { 42 };
	int x3[3] = { 1, 2, 3 };
	Point point3 = { 10, 20 };

	// Direct Initialization
	int n4{ 42 };
	int x4[3]{ 1, 2, 3 };
	Point point4{ 10, 20 };
}