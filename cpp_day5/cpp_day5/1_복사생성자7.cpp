#include <iostream>
#include <string>

// std::string �� �ᱹ c++ ǥ�ؿ� �Ʒ����� Ŭ������ �ִ� ���̴�.
namespace std {
	class string {
		char* s;
		int size;
	public :
		string(const char* s){...} //���� ����
		~string() {}

		string(const string& s) {
			// ���� ����� �����Ǿ� �ִ�.
		}
	};
};

int mani() {
	std::string s1("hello");
	std::string s2 = s1; // �� ���� string�� ���� �����ڰ�
						// ���� ����� �����Ǿ� �ִ� ���̴�.
}