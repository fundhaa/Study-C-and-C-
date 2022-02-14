// 7_friend

class Bike {
	int gear;
public :
	//friend 함수 : 멤버 함수는 아니지만 private에 접근할 수 있게 해달라는 것.
	// 1. 멤버함수로 하면 되지 않나?
	//    => 멤버함수로 만들지 못하는 경우가 있다. (연산자 재정의)
	// 2. 직접접근하지 않고 setGear(), getGear()를 만들어서 이걸 통해서 접근하게 하는건 안되는가?
	//    => set/get 함수를 제공하는 것은 모든 곳에서 접근을 허용하다는 의미.
	//    => 그런데, fix() 에서만 접근하고 싶을 때가 있다.
	friend void fix(); //C++ 에만 있는 문법
};

void fix() { // 멤버함수가 아니다.
	Bike b;
	b.gear = 10; // friend 함수이므로 error 아님.
}

int main() {
	fix();
}