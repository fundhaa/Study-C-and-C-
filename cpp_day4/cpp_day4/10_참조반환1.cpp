// ������ȯ1
#include <iostream>

class Point {
public:
	int x, y;

	~Point() { std::cout << "~Ponit()" << std::endl; } // �Ҹ��ڰ� �Ҹ����� Ȯ���ϱ� ���� �α�
};
/*
// �Ʒ� �� �Լ��� ������(���� ���� ���)�� �Ϻ��� �����غ���
void f1(Point p1) {}  // call by value , ���纻 ��ü ����
void f2(Point& p2) {} // call by reference , ���纻 ��ü ���� �ȵ�.

int main() {
	Point pt = { 1, 2 };
	f1(pt);
	f2(pt);
}
*/
Point pt = { 1, 2 }; // ��������
Point f1() { // return by value, pt�� ���纻 ����
	return pt; // ������ ���� �ӽ� ��ü(pt);
				// return �ӽ� ��ü;
}
Point& f2() { // return by reference, ���Ͽ� �ӽð�ü�� ������ ����� ��.
	return pt; // pt�� ������ ��ȯ, �ӽð�ü�� �������� �ʴ´�.
}
int main()
{
	f1(); // �� ���ο��� �ӽð�ü�� return �԰� ���ÿ� �Ҹ��ڰ� �Ҹ���.

	f2(); // �ӽ� ��ü ��� �͵� ��������� �ʴ´�.
}