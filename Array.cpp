// Honor pledge:
// 
// I have neither given nor received any help
// on this assignment.

#include <stdexcept>

template <typename T>
Array<T>::Array():
    data_(new T[0]),
    cur_size_(0),
    max_size_(0)
{

}

template <typename T>
Array<T>::Array(size_t len):
    data_(new T[len]),
    cur_size_(len),
    max_size_(len)
{

}

template <typename T>
Array<T>::Array(size_t len, T fill):
    data_(new T[len]),
    cur_size_(len),
    max_size_(len)
{
    this->fill(fill);
}

template <typename T>
Array<T>::Array(const Array & arr):
    data_(new T[arr.cur_size_]),
    cur_size_(arr.cur_size_),
    max_size_(arr.max_size_)
{
    *this = arr;
}

template <typename T>
Array<T>::~Array()
{
    delete [] data_;
}

template <typename T>
const Array<T> & Array<T>::operator = (const Array & rhs)
{
    if (this != &rhs)
    {
        this->resize(rhs.cur_size_);
        for (int i = 0; i < this->cur_size_; i++)
        {
            this->data_[i] = rhs.data_[i];
        }
    }
    return *this;
}

template <typename T>
T & Array<T>::operator [] (size_t index)
{
    if (index >= this->cur_size_)
        throw std::out_of_range("");
    return this->data_[index];
}

template <typename T>
const T & Array<T>::operator [] (size_t index) const
{
    if (index >= this->cur_size_)
        throw std::out_of_range("");
    return this->data_[index];
}

template <typename T>
bool Array<T>::operator == (const Array & rhs) const
{
    if (this == &rhs)
        return true;
    else
    {
        // checking sizes
        if ((this->cur_size_ != rhs.cur_size_) || (this->max_size_ != rhs.max_size_))
            return false;
        // can assume sizes are the same if it got here
        for (int i = 0; i < this->cur_size_; i++)
        {
            // checking for data
            if (this->data_[i] != rhs.data_[i])
                return false;
        }
        // if it got here they are the same
        return true;
    }
    
}

template <typename T>
bool Array<T>::operator != (const Array & rhs) const
{
    if (this == rhs)
        return false;
    return true;
}

template <typename T>
T Array<T>::get(size_t index) const
{
    	return this->data_[index];
}

template <typename T>
void Array<T>::set(size_t index, T value)
{
    	this->data_[index] = value;
}

template <typename T>
int Array<T>::find(T element) const
{
    	return this->find(element, 0);
}

template <typename T>
int Array<T>::find(T element, size_t start) const
{
    	if (start >= this->cur_size_)
		throw std::out_of_range("");
	for(int i = start; i < this->cur_size_; i++)
	{
		if (this->data_[i] == element)
			return i;
	}
	return -1;
}

template <typename T>
void Array<T>::fill(T element)
{
    	for(int i = 0; i < this->cur_size_; i++)
	{
		this->data_[i] = element;
	}
}

template <typename T>
void Array<T>::reverse()
{
    	for(int i = 0; i < this->cur_size_/2; i++)
	{
		T temp = this->data_[i];
		this->data_[i] = this->data_[(this->cur_size_ - 1) - i];
		this->data_[(this->cur_size_ - 1) - i] = temp;
	}
}

template <typename T>
void Array<T>::resize(size_t new_size)
{
    	T * new_data = new T[new_size];
	for(int i = 0; i < this->cur_size_; i++)
	{
		new_data[i] = this->data_[i];
	}
	this->cur_size_ = new_size;
	this->max_size_ = new_size;
	this->data_ = new_data;
}

template <typename T>
void Array<T>::shrink()
{
    // make a new array, loop through the old one and add each element to the new array
	// set the new array equal to this
	Array<T> * newData = new Array<T>();
	// the size is determined by the number of not null spaces
	size_t newSize = 0;
	for (int i = 0; i < this->cur_size_; i++)
	{
		// if the space is not null add it to the new array
		if (this->data[i] != nullptr)
		{
			newData->resize(newSize + 1);
			newData[newSize] = this->data_[i];
			newSize++;
		}
	}
	this = newData;
}

template <typename T>
Array<T> Array<T>::slice(size_t begin) const
{
    	if (begin >= this->cur_size_)
		throw std::out_of_range("");
	// make a new array and set this equal to it
	size_t newSize = this->cur_size_ - begin;
	Array<T> * newData = new Array<T>(newSize);
	// fill it
	for(int i = 0; i < newData->cur_size_; i++)
	{
		newData[i] = this->data_[begin + i];
	}
	
	return *newData;
}

template <typename T>
Array<T> Array<T>::slice(size_t begin, size_t end) const
{
    	if ((begin >= this->cur_size_) || (begin > end) || (end >= this->cur_size_))
		throw std::out_of_range("");
	// make a new array and set this equal to it
	size_t newSize = end - begin;
	Array<T> * newData = new Array<T>(newSize);
	// fill it
	for(int i = 0; i < newData->cur_size_; i++)
	{
		newData[i] = this->data_[begin + i];
	}
	
	return *newData;
}
