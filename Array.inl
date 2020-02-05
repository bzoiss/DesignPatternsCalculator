// Honor pledge:
// 
// I have neither given nor received any help
// on this assignment.

template <typename T>
inline
size_t Array<T>::size() const
{
    return this->cur_size_;
}

template <typename T>
inline
size_t Array<T>::max_size() const
{
    return this->max_size_;
}