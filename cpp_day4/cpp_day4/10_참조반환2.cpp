#include <iostream>

class Counter {
public:
	int value = 0;
	//void increment() {
	//Counter increment(){ // ���Ͽ� �ӽð�ü ����(�� �ڽ��� ���纻)
	Counter& increment(){ // ���Ͽ� �ӽð�ü�� ������ ����.
		++value;
		return *this;
	}
	~Counter() { std::cout << "~Counter()" << std::endl; }
};

int main() {
	Counter c;
	//c.increment();
	//c.increment();
	//c.increment();
	// �� ������� �Ʒ� ������� �����ϸ� �� �����ϴ�.
	c.increment().increment().increment();
	std::cout << c.value << std::endl; // 1 ����. ������ ��ü���� 1, 2, 3�ö󰡰� ����� ��ü�� �Ҹ��ڶ����� �� ��������.

}