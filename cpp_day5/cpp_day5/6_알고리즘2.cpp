// 6_�˰���1 - 225 page

// 5_�ݺ���
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

int main() {
	std::list<int> s = { 1, 2, 3, 4, 5 };
	std::vector<int> v = { 1, 2, 3, 4, 5 };

	// find�� [first, las)���̿��� �����˻��̴�.
	// last�� �˻� ����� �ƴϴ�.
	auto ret1 = std::find(s.begin(), s.end(), 3); // list���� �˻�

	// find�� ��ȯ��
	// �˻� ���н� : last ��ȯ(find�� 2��° ���ڷ� ������ �ݺ���)
	// �˻� ������ : ��Ұ� �ִ� ���� ����Ű�� �ݺ���

	if (ret1 == s.end())
		std::cout << "�˻� ����" << std::endl;
	else
		std::cout << "�˻� ���� : " << *ret1 << std::endl;
}