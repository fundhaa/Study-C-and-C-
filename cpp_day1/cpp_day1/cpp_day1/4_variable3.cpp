//4_variable3.cpp

#include <iostream>
using namespace std;

int main() {
	int x1 = 1.2;
	cout << x1 << endl; // ������ Ÿ��ĳ������ �Ǿ� warning�� ���.

	//int x2{ 1.2 };
	//cout << x2 << endl; // Error�� ���� Ÿ�� ������ �߸��Ǿ����� �˷��ش�. ����ڵ��� �����ϰ� ������ �� �ִ�.
						// Preventing narrow

	char c1 = 300; // 1byte�� -127~+128 ���� �����Ϲǎ� overflow �߻�!
	cout << c1 << endl; // overflow - warning!
	printf("%d\n", c1); // ���κ��� ©���� 44 ���

	char c2 = { 300 }; // Error!
	// >> Uniform initialization �� ����Ͽ� �ڵ带 �� �� �����ϰ� ������ �� �ִ�.

}