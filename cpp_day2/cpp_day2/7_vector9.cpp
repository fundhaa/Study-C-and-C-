#include <vector>
#include <iostream>

int main() {
	std::vector<int> v; //�ʱ� ũ�� 0
	int num;

	while (1)
	{
		std::cin >> num;
		if (num == -1)
			break;
		v.push_back(num); // �Էµ� �� ����. vector�� �˾Ƽ� �޸� �������ش�.
	}
	std::cout << "�Էµ� ���� : " << v.size() << std::endl;

	for (auto e : v) //���ο� for�� ��� ����
		std::cout << e << ", ";
	//v �� ����ϴ� �޸𸮴� vector �Ҹ��ڰ� �˾Ƽ� �ı�����.
	// ����ڰ� �Ű澵 �ʿ� ����.
}
// ���� �Ѱ� ���� : v.pop_back()