// 1_std.cpp
#include <iostream>
//using namespace std;

int count = 0;

int main() {
	int n = count;  // C++ ǥ�ؿ� "std::count()" ��� �Լ��� �ִ�.
					// ���� count��� ������ �����Ϸ��� ǥ�ؿ� �ִ� �Լ�����, �츮�� ���� ������������ �򰥸���.(ambigous)
					// using namespace std; �̰� �ּ�ó���ϸ� ���� �ذ� ����
					// �ǹ������� ���� �����ϴ�. �̸� �浹�� ���ɼ��� �׻� �����ϱ� ����!

	std::cout << "aa " << std::endl;
}

// �������ϸ� ������ �߻��Ѵ�.
// �� �����ϱ�?
