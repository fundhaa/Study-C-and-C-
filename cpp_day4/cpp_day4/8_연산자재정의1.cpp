// ������������
#include <iostream>

class Point {
	int x;
	int y;
public :
	Point(int a, int b) : x(a), y(b) {}
};

int main()
{
	Point p1(1, 1);
	Point p2(2, 2);

	// 2���� ���� ���Ѵٰ� ���� �� ���� ���� ���� �ڵ��??
	Point p3 = Add(p1, p2); // 1 C��� ��Ÿ��
	Point p4 = p1.Add(p2); // 2 JAVA ��Ÿ��
	Point p5 = p1 + p2; // 3 C++ ��Ÿ��
}
// �����Ϸ��� "a+b"�� �ؼ��ϴ� ���
// 1. a, b�� ��� premitive Ÿ���̶�� �׳� ���� ����
// 2. �� �� �ϳ��� user type�̶�� �Ʒ��� ��Ģ��� ����
//         a.operator(+) b�� �������� Ȯ��
// �ȵǸ�  operator+(a, b)�� �������� Ȯ��, �ȵǸ� ����
