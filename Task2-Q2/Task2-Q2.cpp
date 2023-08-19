//Create class Movable(abstracted) which contains only the following :
//-moveUp() = > pure virtual method to achieve abstraction
//- moveDown() = > pure virtual method to achieve abstraction
//- moveLeft() = > pure virtual method to achieve abstraction
//- moveRight() = > pure virtual method to achieve abstraction
#include <iostream>
using namespace std;
class Movable {
protected:
	virtual void moveUp() = 0;
	virtual void moveDown() = 0;
	virtual void moveLeft() = 0;
	virtual void moveRight() = 0;
};
//Create class MovablePoint which inherits from Movable class, and contain following attributes :
//-int x
//- int y
//- int xSpeed
//- int ySpeed
//- Default & parameterized constructors
//- Implement the above methods as this :
//o moveUp() = > increase the value of y by ySpeed
//o moveDown() = > decrease the value of y by ySpeed
//o moveLeft() = > decrease the value of x by xSpeed
//o moveRight() = > increase the value of x by xSpeed

class MovablePoint :public Movable {
private:
	int x;
	int y;
	int xSpeed;
	int ySpeed;
public:
	MovablePoint() {
		x = 0;
		y = 0;
		xSpeed = 0;
		ySpeed = 0;
	}
	MovablePoint(int px, int py, int pxs, int pys) {
		x = px;
		y = py;
		xSpeed = pxs;
		ySpeed = pys;
	}
	//o moveUp() = > increase the value of y by ySpeed
	//o moveDown() = > decrease the value of y by ySpeed
	//o moveLeft() = > decrease the value of x by xSpeed
	//o moveRight() = > increase the value of x by xSpeed
	void moveUp() {
		y += ySpeed;
	}
	void moveDown() {
		y -= ySpeed;
	}
	void moveLeft() {
		x -= xSpeed;
	}
	void moveRight() {
		x += xSpeed;
	}
	void display_info() {
		cout << y << " " << x << " " << ySpeed << " " << xSpeed << endl;
	}
};

int main()
{
	//x y x_s y_s
	MovablePoint m(5, 5, 2, 3);
	m.moveUp(); // x = 5, y = 8
	m.moveLeft(); // x = 3, y = 8
	m.display_info();
}

