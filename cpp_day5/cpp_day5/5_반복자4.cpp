// 5_�ݺ���
#include <iostream>
#include <vector>
#include <list>
int main() {
	std::list<int c> = { 1, 2, 3, 4, 5 };

	// �����̳��� ��� ��Ҹ� �����ϴ� 3���� ���

	// 1. range-for (C++ ���� ����). ���� ���ϰ� ��� �����̳ʰ� ����
	for (auto e : c)
		std::cout << e << ", ";
	std::cout << std::endl;

	// 2, [] ������ ���. ���ӵ� �޸𸮸� ����. vector�� �ǰ� list �� �ȵ�
	for (int i = 0; i < c.size(); ++i) {
		std::cout << std::endl; // c[i]�� vector�� ����, list�� �ȵ�.
	}
	std::cout << std::endl;

	// 3. �ݺ��� ��� ( ��� �����̳� ���� )
	auto p1 = c.begin();
	while (p != c.end()) {
		std::cout << *p1 << ", ";
		++p1;
	}
}