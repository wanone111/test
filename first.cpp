#include <iostream>
#include <string>
using namespace std;

class A{
public:
	A() {
		cout << "A类对象构造中..." << endl;
	}
	~A() {
		cout << "析构A类对象..." << endl;
	}
};

class B : public A{
public:
	B() {
		cout << "B类对象构造中..." << endl;
	}
	~B(){
		cout << "析构B类对象..." << endl;
	}
};

int main() {
	B b;
	return 0;
}
