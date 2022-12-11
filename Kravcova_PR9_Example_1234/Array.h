#pragma once
class Array
{
private:
	int length;
	int* arr;
	static bool init;
public :
	Array();
	Array(int length);
	Array(int length, int value);
	~Array();
public: 
	void set(int i, int value);
	int get(int i);
	void print();
};

