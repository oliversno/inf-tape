#include "tape_deque.h"

T tapeDeque::get() const {
    return *it;
}

void tapeDeque::set(const T in) {
    *it = in;
}

void tapeDeque::increment() const{
    increment(1);
}

void tapeDeque::increment(const size_t delta) const{
    if(it+delta >= deque.back()){
        deque.insert(deque.end(), delta, T{});
    }
    it += delta;
}

void decrement() const{
    decrement(1);
}

void decrement(const size_t delta) const{
    if(it-delta < vec.begin()){
        deque.insert(deque.begin(), delta, T{});
    }
    it -= delta;
}