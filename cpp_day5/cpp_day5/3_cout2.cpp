#include <iostream>

class Point {
	int x, y;
public:
	Point(int a, int b) : x(a), y(b) {}

	friend std::ostream& operator<<(std::ostream& os, const Point& pt);
};

std::ostream& operator<<(std::ostream& os, const Point& pt) {
	os << pt.x << ", " << pt.y;
	return os;
}

int main() {
	Point pt(1, 2);
	std::cout << pt;

	// -------
	std::ostream& os = cout;

	// ���� os�� cout�� �����ϴ�( cout�� ���� ����
	os << 10;// os.operator<<(10) �̴�.

	// ������ �Ʒ�ó�� ��� ������ �ϸ� operator<<()�� ȣ���� �� ����.
	const std::ostream& cos = cout;
	cos << 10; // Error. "��� ��ü�� ��� ��� �Լ��� ȣ���� �� �ִ�."
				// cos.operator<<(10) ���� "operator<<"�� ��� ��� �Լ��� �ƴϴ�.

}