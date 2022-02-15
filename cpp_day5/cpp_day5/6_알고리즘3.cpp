// 6_�˰���1 - 225 page

// 5_�ݺ���
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

bool foo(int n) {
	return n % 3 == 0;
}

int main() {
	std::list<int> s = { 1, 2, 6, 7, 8, 3, 4, 5, 9, 10 };

	// �־��� �������� "3"�� �˻�
	auto ret1 = std::find(s.begin(), s.end(), 3); // list���� �˻�

	// �־��� �������� "ó�� ������ 3�� ���"�� �˻��ϰ� �ʹ�.
	// std::find : �� �˻�
	// std::find_if : ���� �˻�

	//auto ret2 = std::find(s.begin(), s.end(), �Լ�); // ���ڴ� int�� �Ѱ��� �޾ƾ��ϰ� return ���� bool �̾���Ѵ�.
	auto ret2 = std::find_if(s.begin(), s.end(), foo); // s[0]���� s[9]���� ������� �����µ�,
														// ó�� ������ 3�� ������� true�� �����ؾ��Ѵ�.

	std::cout << *ret2 << std::endl;

}