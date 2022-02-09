//17_reference3.cpp
#include <iostream>
using namespace std;

// call by value
// : ������ ���� ����ȴ�.
// �Լ��� ���ؼ� ���޵� ������ ���� �����ϴ� ���� �Ұ����ϴ�. => �б�����
void inc1(int n) { // call by value
	++n;
}

// call by pointer
// : ������ �ּҰ��� ���޵ȴ�.
// �ּҰ��� ������ ���� ���� �����ϰų� �д� ���� �����ϴ�.
// => �б� / ���� ����

void inc2(int* p) { // call by pointer(= C����� call by reference)
	++(*p);
}

// call by reference
// : ������ ���ο� �̸��� �ο��ؼ� ���� �аų� ������ �� �ִ�.
// => �б� / ���� ����
void inc3(int& r) {
	++r;
}

int main() {
	int n = 0;
	inc1(n); // 0
	//inc2(&n); // 1
	//inc3(n); // 1
	cout << n << endl;

}