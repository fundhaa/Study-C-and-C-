// ������������
#include <iostream>

class Point {
	int x;
	int y;
public:
	Point(int a, int b) : x(a), y(b) {}


	Point operator+(const Point& p) {
		std::cout << "member�� ���� operator+" << std::endl;
		Point temp(x + p.x, y + p.y);
		return temp;
	}

	// ������ ������ �Լ�
	// �Ϲ� �Լ��� friend �� �Ἥ ����� ������ش�.
	// ==> ����� �ƴ����� private�� ������ �� �ְ� �ش޶�.
	friend Point operator+(const Point& p1, const Point& p2);
}; // friend : ������ ������ �Լ��� �Ϲ��Լ��� ���� �� friend�� ����Ѵ�.

// �Ϲ��Լ� �߿��� Point�� �ΰ� ���� �� �ִ� �� ������
Point operator+(const Point& p1, const Point& p2) {
	std::cout << "non member operator+" << std::endl;

	Point temp(p1.x + p2.x, p1.y + p2.y);
	return temp;
}

int main()
{
	Point p1(1, 1);
	Point p2(2, 2);

	Point p3 = p1 + p2; // 1. p1.operator+(p2)�� �������� Ȯ�� [����Լ�]
						// 2. �ȵǸ�  operator+(p1, p2)�� �������� Ȯ�� [�Ϲ��Լ�]
						// ���� �ΰ� �� ���ǵǾ� �����Ƿ� �켱������ �ִ�. 1. ����Լ� / 2. �Ϲ��Լ�
	// ����Լ��� �����ϴ°� �� ���ٰ� �ϴ� �����ڵ� : private�� �����ϱ� ���ϰ� ��ü������ ö�а� �´�
	// �Ϲ��Լ��� �����ϴ°� �� ���ٰ� �ϴ� �����ڵ� : ����� �ȵ� ���� �ִ�.

	Point p4 = p1 + p2; // p1.operator+(Point) �ʿ�
	Point p5 = p1 + 3;  // p1.operator+(int)�� �ʿ�
	Point p6 = 3 + p2;	// 3.operator+(Point)�� �ʿ��ѵ� 3�� user type�� �ƴϹǷ� ����Լ��� �� �� ����.
						// ������ operator+(int, Point) �� ������ �ȴ�. --> non-member(�Ϲ��Լ�)�� �ϸ� �ȴ�.

	// ������ �����Ǹ� ���� �����ϴ� ���
	// C++ : ? . .* :: ���� ��� ������ ������ ����
	// C#, python : �ֿ��� ������ ���� ������ ����
	// 
}