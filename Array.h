// Honor pledge:
// 
// I have neither given nor received any help
// on this assignment.

#ifndef ARRAY_H
#define ARRAY_H

#include <cstring>

template <typename T>
class Array
{
public:
    typedef T type;

    Array();

    Array(size_t len);

    Array(size_t len, T fill);

    Array(const Array & arr);

    ~Array();

    const Array & operator = (const Array & rhs);

    size_t size() const;

    size_t max_size() const;

    T & operator [] (size_t index);

    const T & operator [] (size_t index) const;

    T get(size_t index) const;

    void set(size_t index, T value);

    int find(T element) const;

    int find(T element, size_t start) const;
    
    bool operator == (const Array & rhs) const;

    bool operator != (const Array & rhs) const;

    void fill(T element);

    void reverse();

    void resize(size_t new_size);

    void shrink();

    Array slice(size_t begin) const;

    Array slice(size_t begin, size_t end) const;

private:
    T * data_;
    size_t cur_size_;
    size_t max_size_;
};

#include "Array.inl"

#include "Array.cpp"

#endif