// 2_static_member_data2 - 110 page
#include <iostream>

// ���2. �������� ���
// ==> ���� �Ѱ��� �ְ�, ��� ��ü�� �����Ѵ�.
// ==> ��ü�� ���� �ľ� ����


int cnt = 0;

class Car
{
	int color;
public:

	Car() { ++cnt; }
	~Car() { --cnt; }
};

int main() {
	Car c1;
	Car c2;

	cnt = -10; // ����� �Ǽ�
				// �������� ����� �������� �ʴ�. ��𼭵� ������ �� �ֱ� ����,
				// private���� ��ȣ�ϴ� �����??  ---> 3������

	// �ڵ����� ��볪 ����������� ������ �ľ��ϰ� �ʹ�.
	std::cout << c1.cnt << std::endl; // 2

}