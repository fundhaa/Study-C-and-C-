// 4_oop1 - 57 page 교재 예제랑은 약간 다름
#include <iostream>

// 사각형의 면적을 구하는 함수
// 왠지 복잡하다. -> oop2.cpp
int getRectArea(int left, int top, int right, int bottom) {
	return (right - left) * (bottom - top);
}

void drawRect(int left, int top, int right, int bottom) {
	std::cout << "draw rect" << std::endl;
}

int main() {
	int n = getRectArea(1, 1, 10, 10);
	drawRect(1, 1, 10, 10);
}