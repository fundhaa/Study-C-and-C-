#include <iostream>
using namespace std;

//��ȯ���� ����, �Լ��� ����, ���и� üũ�ؾ��Ѵ�.
int* foo() {
	//����������, NULL�� ��ȯ�Ѵ�.
	return NULL;
}

//�������� ��� -1�� ��ȯ�Ѵ�.
int goo() { return -1; }

// C++17 - if - statement with initializer
// �̰� ���� ���� ����� �ϴ� ������ �̸��� �׋��׶� �ٸ��� ������ �ʾƵ� ��.
int main() {
	if (int* ret = foo(); ret == NULL) { // ret�� ��ȿ�� ���� ����
		cout << "����" << endl;
		return 1;
	} // ret�� ��ȿ�� ���� ��

	if (int ret = goo(); ret == -1) { // ret�� ��ȿ�� ���� ����
		cout << "����" << endl;
		return 1;
	} // ret�� ��ȿ�� ���� ��
	if (int* ret = foo(); ret == NULL) { // ret�� ��ȿ�� ���� ����
		cout << "����" << endl;
		return 1;
	} // ret�� ��ȿ�� ���� ��
}

/*
int main() {
	int* ret = foo();
	if (ret == NULL) {
		cout << "����" << endl;
		return 1;
	}
	int ret2 = goo(); // ���� üũ�ϴ� �̸��ε� ������ �����߱� ������ ret�� ������ ret2�� �����.
	if (ret2 == -1) {
		cout << "����" << endl;
		return 1;
	}
}
*/