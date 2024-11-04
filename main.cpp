#include <iostream>
#include <string>

using namespace std;


class Room {
private:
	int width;
	int height;
public:
	Room(int w, int h) : width(w), height(h) {} // constructor
	int getArea() {
		return width * height;
	};

	// setters
	void setWidth(int w) { width = w; }
	void setHeight(int h) { height = h; }

	// getters
	int getWidth() { return width; }
	int getHeight() { return height; }

	~Room() { // destructor
		cout << "Room object destroyed" << endl;
	}
};

class Working_place : public Room
{
private:
	bool hasComputer;
public:
	Working_place(int w, int h, bool c) : Room(w, h), hasComputer(c) {}

	bool getHasComputer() { return hasComputer; }
	void setHasComputer(bool c) { hasComputer = c; }

	~Working_place() {
		cout << "Working_place object destroyed" << endl;
	}
};


int main() {
	Working_place wp(10, 20, true);
	cout << "Area: " << wp.getArea() << endl;
	cout << "Has computer: " << wp.getHasComputer() << endl;

	wp.setHasComputer(false);
	cout << "Has computer: " << wp.getHasComputer() << endl;

	return 0;
}