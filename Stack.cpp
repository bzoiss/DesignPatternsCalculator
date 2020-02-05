// Honor pledge:
// 
// I have neither given nor received any help
// on this assignment.

template <typename T>
Stack<T>::Stack():
    data(Array<T>())
{

}

template <typename T>
Stack<T>::Stack(const Stack & s):
    data(Array<T>(0))
{
    this = s;
}

template <typename T>
Stack<T>::~Stack()
{

}

template <typename T>
const Stack<T> & Stack<T>::operator = (const Stack & rhs)
{
    if (this != &rhs)
    {
        this->data = rhs.data;
    }
}

template <typename T>
void Stack<T>::push(T element)
{
    this->data.resize(this->size() + 1);
    this->data[this->size() - 1] = element;
}

template <typename T>
void Stack<T>::pop()
{
    if (this->is_empty())
        throw empty_exception();
    this->data.resize(this->size() - 1);
}

template <typename T>
void Stack<T>::clear()
{
    if (!this->is_empty())
        this->data.resize(0);
}