#pragma once
using namespace std;

class Animal
{
public:
	Animal();
	static int count;
	static void print();
	void add();
	virtual void Show() = 0;
	~Animal();
protected:
private:
};
