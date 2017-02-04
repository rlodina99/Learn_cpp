#include <iostream>

using namespace std;

//figuri.h
class Rectangle {
    int width, height;

  public:
  	Rectangle(int w, int h);
  	~Rectangle(){
  		cout << "la distrugere obiect\n";
  	}
  	int getWidth() { return width;}
  	int getHeight() { return height;}

    int area (void);
};

//figuri.cpp
Rectangle::Rectangle(int w, int h){
		cout << "la constructie obiect\n";
	width = w;
	height = h;
}

int Rectangle::area() { return width * height;}



int main(){

	Rectangle* d1 = new Rectangle(10, 1);
	cout << d1->area() << '\n';
	delete (d1);

	return 0;
};