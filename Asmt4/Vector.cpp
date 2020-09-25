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
	ptr = new int[capacity];
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
//
Vector& Vector::operator=(const Vector& other)
{
	Vector copyVector;
	copyVector.ptr = other.ptr;
	copyVector.capacity = other.capacity;
	copyVector.size = other.size;
	return copyVector;
}

int Vector::getSize()
{
	return size;
}

int Vector::getCapacity()
{
	return capacity;
}

bool Vector::push(int element)
{
	try {
		if (size == capacity) resize();
		for (int i = size; i > 0; i--) {
			ptr[i] = ptr[i - 1];
		}
		ptr[0] = element;
		size++;
		return true;
	}
	catch (...) {
		cerr << "Integer not entered";
		return false;
	}
}

int Vector::Delete()
{
	int lastElement = ptr[size - 1];
	ptr[size - 1] = NULL;
	size--;
	return lastElement;
}

bool Vector::resize()
{
	if (capacity == 0) {
		capacity = 1;
	}
	else
	{
		capacity *= 2;
	}
	/*int* temp = new int[capacity];
	for (int i = 0; i < size; i++) {
		temp[i] = ptr[i];
	}
	ptr = temp;*/
	return true;
}

int& Vector::operator[](unsigned int index)
{
	return ptr[index];
}
