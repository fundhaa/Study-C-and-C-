#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <unordered_set>

int main() {
	std::vector<int> v = { 1, 2, 3, 4, 5 };
	std::list<int> s = { 1, 2, 3, 4, 5 };

	// vector�� list �� ������ ���� �����ϴ�.

	v.push_back(10);
	s.push_back(10);

	int n1 = v.front(); // ù���� ��� �� ���

	int n2 = s.front(); // ù���� ��� ������ auto n2�� �����ϴ�.
	auto p = s.begin(); // �ݺ��� ������

	// �ǵ������� ���� �������� �ִ�.
	v.push_front(10); // ERROR, ���ʹ� ���� ������ �Ұ����ϴ�.
						// ���ӵ� �޸��� ���� ������ �ʹ� ������尡 Ŀ�� ������ �ʾҴ�.
						// �ٸ� �����̳ʸ� ����ϴ� ���� ���ٴ� �ǵ�.
	s.push_front(10); // ���� ���� ����
	
}