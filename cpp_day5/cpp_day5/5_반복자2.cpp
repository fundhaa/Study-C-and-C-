// �ݺ���
#include <iostream>
#include <vector>
#include <list>

// std::vector<int>::iterator p1 �� ������ �Ʒ�ó�� �����Ǿ� �ִ�.
/*
namespace std {
	template<typename T>
	class vector {
	public:
		class iterator {
		};
	};
}
*/

int main() {
	//std::vector<int> c = { 1, 2, 3, 4, 5 }; // ���ӵ� �޸�
	//std::list<int> c = { 1,2,3,4,5 };		// ������ �޸�
	
	int c[5] = { 1,2,3,4,5 };

	//auto p1 = c.begin(); 

	//1. �ݺ����� ��Ȯ�� Ÿ��
	// �ٸ� �Ʒ�ó�� ����ϸ� �����̳� ����� �º��� Ÿ���� ����Ǿ���ϹǷ�
	//std::vector<int>::iterator p1 = c.begin();
	//std::list<int>::iterator p1 = c.begin();

	// �̷��� ����Ѵ�.
	auto p1 = c.begin(); // c�� �迭�̶�� error�̴�. �迭���� ����Լ� ����� �� ����.

	//�ݺ��ڸ� ������ �ּ��� �ڵ�� �̰��̴�.
	auto p1 = std::begin(c); // C�� STL �����̳ʰ�, raw �迭�̰� ��� �� �����Ѵ�.
}