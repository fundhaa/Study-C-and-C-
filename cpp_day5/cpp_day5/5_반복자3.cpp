// 5_�ݺ���
#include <iostream>
#include <vector>
#include <list>
int main() {
	std::list<int c = { 1, 2, 3, 4, 5 };
	// �ٽ� 1. past the end
	auto.p1 = c.begin();
	auto p2 = c.end(); // �������� �ƴ� ������ ������ ����Ų��.

	*p1 = 10; // ����
	*p2 = 10; // ERROR. �������� �ƴ� ������ ����(�Ҵ���� ���� �ּ�)�� 10�� �ְ� �ȴ�.

	// p2�� �Ʒ��� ���� ��(==, !=)�� �뵵�θ� ����ؾ��Ѵ�.
	while (p1 != p2) {
		std::cout << *p1 << std::endl;
		++p1;
	}
}