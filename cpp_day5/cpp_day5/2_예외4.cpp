#include <iostream>

// C++		: throw , try, catch
// python	: raise, try, except

// ���п� ���� Ŭ���� �����.
class MemoryException {
	int errorcode;
	std::string description;
public:
	MemoryException(int err, const std::string& s) : errorcode(err), description(s)
	{
	}
};

// �Ʒ�ó�� EmptyClass�� �ص� ������ �ʴ�.
// Ŭ���� �̸� ��ü�� ������ �ȴ�.
class InvalidURL {};
class FailPassword {};

int connect_server(int id) {
	// �ϳ��� �Լ��� �پ��� ������ ������ �� �ִ�.
	if (1) {
		MemoryException m(1005, "access violation");
		throw m;
	}
	if (2) {
		InvalidURL e;
		throw e;
	}
	if (3) {
		FailPassword e; // ���� ���ο� �ش��ϴ� ���� ��ü�� �����ؼ� ������.
		throw e;
	}
	return 100;
}

int main(() {
	try {
		connect_server(99);
		std::cout << "connect server ����" << std::endl;
	}
	catch (MemoryException& e) { // �Լ� ���ڸ� �޴� ��ó�� ���� ������ �޴´�.
		std::cout << "���� �߻� : " << std::endl;
	}
	catch (InvalidURL& e) {
		std::cout << "���� �߻� : �߸��� URL" << std::endl;
	}
	catch (...) { // ������ ������ �ʴ� ��� ���ܸ� ��ƴ޶�
		std::cout << "�� �� ���� ���� �߻�" << std::endl;
	}
	std::cout << "���α׷� ��� ����" << std::endl;
}
// �׷���, ���ܸ� ����ϸ� ������尡 �� ũ��.(���� �����ؼ� �����Ǵ� ���� �ڵ尡 �� ����)
// �׷��� C++������
// ������ ���� : ���ܰ� �ƴ� "�������� ��ȯ���� ����� ���" ���� ����
// �ɰ��� ������ ���ܸ� ����ϴ� ��찡 ����.