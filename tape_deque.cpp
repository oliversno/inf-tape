#include "tape_deque.h"

template <typename T>
T tapeDeque<T>::get() const {
    return *it;
}

template <typename T>
void tapeDeque<T>::set(const T in) {
    *it = in;
}

template <typename T>
void tapeDeque<T>::increment() const{
    increment(1);
}

template <typename T>
void tapeDeque<T>::increment(const size_t delta) const{
    if(it+delta >= deque.back()){
        deque.insert(deque.end(), delta, T{});
    }
    it += delta;
}

template <typename T>
void tapeDeque<T>::decrement() const{
    decrement(1);
}

template <typename T>
void tapeDeque<T>::decrement(const size_t delta) const{
    if(it-delta < vec.begin()){
        deque.insert(deque.begin(), delta, T{});
    }
    it -= delta;
}