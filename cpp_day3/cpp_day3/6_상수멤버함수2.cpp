// 아래 코드의 단점을 찾아서 수정해봐라

class Rect {
	int x, y, w, h;
public :
	Rect(int a, int b, int c, int d) : x(a), y(b), w(c), h(d) {	}

	// 얘는 내부적으로 값을 바꾸지 않는 함수이니까 뒤에 const를 붙여줘야 한다.
	// 뿐만 아니라 멤버함수를 만들 때 객체의 상태를 변경하지 않는 모든 멤버함수는
	// 상수 멤버함수로 해야 한다.
	// getter(값을 얻는 주로 get으로 시작하는 멤버함수)는 반드시 상수멤버함수가 되어야한다.
	
	//int getArea() { return w * h; }
	int getArea() const { return w * h; }
};

//void foo(Rect r) // call by value : 복사본을 생성하므로 메모리를 많이 차지한다. user type일 때는 절대 사용하지 마라.
//void foo(Rect& r) // 근데 이렇게 하면 원본이 수정될 수 있기 때문에
void foo(const Rect& r) // 이렇게 const reference로 불러야 한다. 근데 이러면 compule ERROR!
{						// const로 불렀으니 멤버함수를 호출할 수 없어서 rc.getArea() 여기서 에러가 생김.
	int n = r.getArea();
}

int main() {
	Rect rc(1, 1, 10, 10);
	int n = rc.getArea();
	foo(rc);
}