// Honor pledge:
// 
// I have neither given nor received any help
// on this assignment.

#ifndef STACK_H
#define STACK_H

#include <exception>

#include "Array.h"

template <typename T>
class Stack
{
public:
    typedef T type;

    class empty_exception : public std::exception
    {
    public:
        empty_exception():
            std::exception() {}
        
        empty_exception(const char * msg):
            std::exception(msg) {}
    };

    Stack();

    Stack(const Stack & s);

    ~Stack();

    const Stack & operator = (const Stack & rhs);

    void push(T element);

    void pop();

    T top() const;

    bool is_empty() const;

    size_t size() const;

    void clear();

private:
    Array<T> data;
};

#include "Stack.inl"

#include "Stack.cpp"

#endif