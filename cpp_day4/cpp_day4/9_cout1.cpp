// 9_cout1.cpp

//#include <iostream>
#include <cstdio>

namespace std
{
	class ostream {
	public: // 연산자 재정의
		void operator<<(int n) { printf("%d", n); }
		void operator<<(double d) { printf("%f", d); }
		void operator<<(const char* c) { printf("%s", c); }
	};
	ostream cout;
}

int main() {
	int n = 3;
	double d = 3.4;

	std::cout << n; // cout.operator<<(int)
	std::cout << d; // cout.operator<<(double)
}