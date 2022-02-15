//189 page
// cout���δ� ���������Ÿ���� ����Ҽ� ����(X)
// ����� �� �ִ�.

#include <iostream>

class Point {
	int x, y;
public:
	Point(int a, int b) : x(a), y(b) {}

	friend std::ostream& operator<<(std::ostream& os, const Point& pt);
};

// ����� ���� Ÿ���� cout���� ����� �� �ʿ��� �Լ�
std::ostream& operator<<(std::ostream& os, const Point& pt) {
	os << pt.x << ", " << pt.y;
	return os;
}

int main() {
	Point pt(1, 2); // �� ������ pt �տ� const �ٿ��ָ� �Ǽ��� const ���� �ٲٴ� �� ������ �� �ִ�.
	std::cout << pt; // �����Ѱ�?
					// 1. cout.operator<<(Point) ����� �Լ��� ������ �ȴ�.
					//   ==> �̹� ��������ִ� C++ ǥ�� Ŭ������ ����ڰ� ����� �߰��� ���� ����.
					//   ==> ����� ����Լ��� �߰��� ���� ����.
					// 
					// 2. ����� �ȵǸ� �Ϲ��Լ��� �ϸ� �ȴ�.
					//   ==> operator<<(std::cout, pt)
					//   ==> operator<<(ostream, Point)�� ����� ������ �ȴ�.
}