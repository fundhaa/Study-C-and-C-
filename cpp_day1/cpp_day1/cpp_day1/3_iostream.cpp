// 3_iostream.cpp
#include <cstdio>
#include <iostream>

using namespace std;

/*
int main()
{
	int age;

	scanf("%d", &age); // call by reference ������� age�� ������ �� �ְ� ����
	scanf("%lf", &height);

	printf("����  : %d\n", age);
	printf("Ű : %lf\n", height);
	return 0;
}
*/
// std::cout : ǥ�� ��� ��ü
//  std::cin : ǥ�� �Է� ��ü

// 1. ������ �ּҸ� �������� �ʾ�������, ������ ���� �����ϴ� ���� �����ϴ�?
// 2. ����(%d, %lf ��)�� �������� �ʾƵ� �� Ÿ�Կ� ���� ��, ����� ����� ����ȴ�?
// 3. std::cout / std::cin / std::endl �̵��� � ������ �����Ǿ� �ִ°�? ��ü�� �����ΰ�?

int main()
{
	int age;
	double height;

	cin >> age; // cin���� �Է¹��� �����͸� age�� ����
	cin >> height;

	cout << "���� : " << age << endl; // ���̶�� �����Ͱ� cout���� ��µȴ�.
	cout << "Ű : " << height << endl;
}