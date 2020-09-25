#pragma once
class Vector
{
private:
	int* ptr; //Points to the vector's dynamic array
	int size, capacity; //Same as size and capacity for std::vector

public:
	Vector();
	/* Description:
	 *    Default constructor.  Initializes an empty vector.
	 *
	 * Post-conditions:
	 *    ptr is NULL, size=0, and capacity=0.
	 */

	Vector(const Vector& other);
	/* Description:
	 *    Copy constructor.  Initializes a dynamic array of the appropriate
	 *    size/capacity and copies data from other's array to the new array.
	 *
	 * Parameters:
	 *    other - a constant reference to the vector that is to be copied.
	 *
	 * Post-conditions:
	 *    ptr is initialized, and its array contains other.ptr's data,
	 *    size=other.size, and capacity=other.capacity. You must create a copy of other's array for the new array to get credit.
	 */

	~Vector();
	/* Description:
	 *    Destructor.  Deallocates ptr.
	 *
	 * Postconditions:
	 *    ptr has been deallocated, current size=0, and capacity=0.
	 */

	Vector& operator=(const Vector& other);
	/* Description:
	 *    Assignment operator.  Initializes a dynamic array of the appropriate
	 *    size/capacity and copies data from other's array to the new array.
	 *
	 * Parameters:
	 *    other - a constant reference to the vector that is to be copied.
	 *
	 * Post-conditions:
	 *    ptr is initialized, and its array contains other.ptr's data,
	 *    size=other.size, and vec_capacity=other.capacity. Note you must create a copy of other's array for the new array to get credit.
	 */

	int getSize();
	/* Description:
	 *    Returns the current number of elements in the vector.
	 *
	 * Return:
	 *    Current size of vector.
	 */

	int getCapacity();
	/* Description:
	 *    Returns the currently allocated storage capacity of the vector.
	 *
	 * Return:
	 *    Current capacity of vector.
	 */

	bool push(int element);
	/* Description:
	 *    Inserts element at the front of the vector and return true if successful.
	 *
	 * Parameters:
	 *    element - The item to be inserted.
	 *
	 * Postconditions:
	 *    Item element is inserted at the front of the vector and return true if the operation is successful.
	 *
	 * Notes:
	 *    If necessary, calls resize() before inserting element into the vector.
	 *    This reserve doubles the current capacity of the vector.
	 */
	int Delete();
	/* Description:
	 *    Deletes the element at the end of the vector.
	 *
	 * Postconditions:
	 *   The element at the end of the vector is deleted and returned.
	 */
	bool resize();
	/* Description:
	 *    Requests that the vector capacity be doubled (the capacity will become 1 after resizing if it is 0 before resizing).
	 *
	 *    This function has no effect on vector size and cannot alter its elements.
	 *
	 * Postconditions:
	 *    Vector capacity is now doubled and return true if the operation is successful.  Vector size (and contents) remains the same.
	 *
	 */

	int& operator[](unsigned int index);
	/* Description:
	 *    Returns a reference to the element at position index.
	 */
};

