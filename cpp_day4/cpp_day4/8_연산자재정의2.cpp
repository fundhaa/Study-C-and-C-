// ������������
#include <iostream>

class Point {
	int x;
	int y;
public:
	Point(int a, int b) : x(a), y(b) {}

	// operator+�� �Լ� �̸�
	// + �� ���׿�����������, ����Լ��� ����� ���ڴ� �Ѱ��̴�.
	// p1.operator+(p2) �̹Ƿ�
	Point operator+(const Point& p) {
		std::cout << "member�� ���� operator+" << std::endl;
		Point temp(x + p.x, y + p.y);
		return temp;
	}
};

int main()
{
	Point p1(1, 1);
	Point p2(2, 2);

	Point p3 = p1 + p2; // p1.operator+(p2)�� �������� Ȯ��
						// �ȵǸ�  operator+(p1, p2)�� �������� Ȯ��, �ȵǸ� ����
						// operator �Լ��� ��������!
}

