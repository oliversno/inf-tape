#include "inf_tape.h"
#include <algorithm>

T infTape::get() const {
    if(it){
        return *it;
    }
    throw emptyException{};
}

void set(const T in) {
    if(it){
        *it = in;
    }
    throw emptyException{};
}

void increment() const{
    increment(1);
}

void increment(const size_t delta) const{
    if(it+delta >= vec.back()){
        vec.resize(vec.size()+delta);
    }
    it += delta;
}

void decrement() const{
    decrement(1);
}

void decrement(const size_t delta) const{
    if(it-delta < vec.begin()){
        vec.resize(vec.size()+delta);
        std::shift_right(vec.begin(), vec.end(), delta);
    }
    it -= delta;
}