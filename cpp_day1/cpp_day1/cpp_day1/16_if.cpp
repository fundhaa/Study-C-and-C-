#include <iostream>
using namespace std;

//반환값을 통해, 함수의 성공, 실패를 체크해야한다.
int* foo() {
	//실패했을때, NULL을 반환한다.
	return NULL;
}

//실패했을 경우 -1을 반환한다.
int goo() { return -1; }

// C++17 - if - statement with initializer
// 이걸 쓰면 같은 기능을 하는 변수의 이름을 그떄그때 다르게 정하지 않아도 됨.
int main() {
	if (int* ret = foo(); ret == NULL) { // ret가 유효한 영역 시작
		cout << "실페" << endl;
		return 1;
	} // ret가 유효한 영역 끝

	if (int ret = goo(); ret == -1) { // ret가 유효한 영역 시작
		cout << "실패" << endl;
		return 1;
	} // ret가 유효한 영역 끝
	if (int* ret = foo(); ret == NULL) { // ret가 유효한 영역 시작
		cout << "실패" << endl;
		return 1;
	} // ret가 유효한 영역 끝
}

/*
int main() {
	int* ret = foo();
	if (ret == NULL) {
		cout << "실패" << endl;
		return 1;
	}
	int ret2 = goo(); // 같이 체크하는 이름인데 위에서 선언했기 때문에 ret를 못쓰고 ret2를 써야함.
	if (ret2 == -1) {
		cout << "실패" << endl;
		return 1;
	}
}
*/