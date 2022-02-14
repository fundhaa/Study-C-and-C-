// 9_cout1.cpp

#include <cstdio>

namespace std
{
	class ostream {
	public: // 연산자 재정의
//		void operator<<(int n) { printf("%d", n); }
//		void operator<<(double d) { printf("%f", d); }
//		void operator<<(const char* c) { printf("%s", c); }

		ostream& operator<<(int n) { printf("%d", n); return *this; }
		ostream& operator<<(double d) { printf("%f", d); return *this; }
		ostream& operator<<(const char* c) { printf("%s", c); return *this; }
	};
	ostream cout;
}

int main() {
	int n = 3;
	double d = 3.4;

	std::cout << n << ", " << d;
	// 연산자 재정의 함수는 아래처럼 직접 호출해도 된다.
	std::cout.operator<<(n).operator<<(", ").operator<<(d);
	//					cout.operator<<(", )
	//								    cout.operator<<(d);
}