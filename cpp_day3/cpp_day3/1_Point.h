#pragma once
// Point.h

class Point {
	int x, y;
public:
	//클래스 안에는 초기화리스트 작성하지 않고 멤버함수 선언만
	Point(int a, int b);
	~Point();

	void set(int a, int b);
};