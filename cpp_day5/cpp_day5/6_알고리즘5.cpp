// 6_�˰���1 - 225 page

// 5_�ݺ���
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

int main() {
	std::list<int> s = { 1, 2, 6, 7, 8, 3, 4, 5, 9, 10 };

	// replace �˰����� �־��� �������� Ư�� ��Ҹ� ��ü�ϴ� �˰����̴�.
	//std::replace(s.begin(), s.end(), 5, 0); // 5�� 0���� �ٲٴ� �Լ�
	std::replace_if(s.begin(), s.end(), [](int n) { return n % 2 == 0; }, 0);

	for (auto e : s)
		std::cout << e << ", ";
	// �� �ڵ��� ���?
	// s.begin() ~ s.end()���� ¦���� 0���� ��������.
}