#include "inf_tape.h"
#include <algorithm>


T infTape::get() const {
    return *it;
}

void infTape::set(const T in) {
    *it = in;
}

void infTape::increment() const{
    increment(1);
}

void infTape::increment(const size_t delta) const{
    if(it+delta >= vec.back()){
        size_t it_dist = it - vec.begin();
        vec.resize(vec.size()+delta);
        it = vec.begin() + it_dist;
    }
    it += delta;
}

void infTape::decrement() const{
    decrement(1);
}

void infTape::decrement(const size_t delta) const{
    if(it-delta < vec.begin()){
        size_t it_dist = it - vec.begin();
        vec.resize(vec.size()+delta);
        std::shift_right(vec.begin(), vec.end(), delta);
        it = vec.begin() + it_dist;
    }
    it -= delta;
}