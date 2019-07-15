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
void tapeDeque<T>::increment(){
    increment(1);
}

template <typename T>
void tapeDeque<T>::increment(const size_t delta){
    if(it+delta >= deque.end()){
        deque.insert(deque.end(), delta, T{});
    }
    it += delta;
}

template <typename T>
void tapeDeque<T>::decrement(){
    decrement(1);
}

template <typename T>
void tapeDeque<T>::decrement(const size_t delta){
    if(it-delta < deque.begin()){
        deque.insert(deque.begin(), delta, T{});
    }
    it -= delta;
}