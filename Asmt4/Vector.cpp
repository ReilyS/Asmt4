#include "Vector.h"
#include <iostream>
#include <fstream>

using namespace std;

Vector::Vector()
{
	ptr = NULL;
	size = 0;
	capacity = 0;
}

Vector::Vector(const Vector& other)
{
	size = other.size;
	capacity = other.capacity;
	ptr = new int[size];
	for (int i = 0; i < size; i++) {
		ptr[i] = other.ptr[i];
	}
}

Vector::~Vector()
{
	delete [] ptr;
	capacity = 0;
	size = 0;
}

Vector& Vector::operator=(const Vector& other)
{
	Vector newvec;
	newvec.ptr = other.ptr;
	newvec.capacity = other.capacity;
	newvec.size = other.size;
	return newvec;
}

int Vector::getSize()
{
	return 0;
}

int Vector::getCapacity()
{
	return 0;
}

bool Vector::push(int element)
{
	return false;
}

int Vector::Delete()
{
	return 0;
}

bool Vector::resize()
{
	return false;
}

int& Vector::operator[](unsigned int index)
{
	// TODO: insert return statement here
}
