#include <iostream>
#include <string>
using namespace std;

int main()
{
	int x[10] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 10 };
	for (int i = 0l; i < 10; ++i) {
		cout << x[i] << endl;
	}
	// C++11: ranged-for // foreach��� ��
	// �迭 ���� ������ �ϳ��� �� ������ �ʹٸ� �Ʒ� ����� �����ϴ�.
	for (int e : x) {
		cout << e << endl;
	}
	std::string s = "helloworld";
	for (char e : s) {
		cout << e << endl;
	}
}