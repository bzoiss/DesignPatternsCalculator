// Honor pledge:
// 
// I have neither given nor received any help
// on this assignment.

template <typename T>
inline
bool Stack<T>::is_empty() const
{
    if (this->data.size() == 0)
        return true;
    return false;
}

template <typename T>
inline
size_t Stack<T>::size() const
{
    return this->data.size();
}

template <typename T>
inline
T Stack<T>::top() const
{
    if (this->is_empty())
        throw empty_exception();
    return this->data[this->data.size() - 1];
}