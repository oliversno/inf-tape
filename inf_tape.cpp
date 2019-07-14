#include "inf_tape.h"
#include <algorithm>

template <typename T>
T infTape<T>::get() const {
    return *it;
}

template <typename T>
void infTape<T>::set(const T in) {
    *it = in;
}

template <typename T>
void infTape<T>::increment() const{
    increment(1);
}

template <typename T>
void infTape<T>::increment(const size_t delta) const{
    if(it+delta >= vec.back()){
        size_t it_dist = it - vec.begin();
        vec.resize(vec.size()+delta);
        it = vec.begin() + it_dist;
    }
    it += delta;
}

template <typename T>
void infTape<T>::decrement() const{
    decrement(1);
}

template <typename T>
void infTape<T>::decrement(const size_t delta) const{
    if(it-delta < vec.begin()){
        size_t it_dist = it - vec.begin();
        vec.resize(vec.size()+delta);
        shift_right(vec.begin(), vec.end(), delta);
        it = vec.begin() + it_dist;
    }
    it -= delta;
}