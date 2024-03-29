#ifndef TAPE_DEQUE_H
#define TAPE_DEQUE_H

#include <deque>

template <typename T>
class tapeDeque{
    public:
        tapeDeque(){
            deque.resize(1);
            it = deque.begin();
        }

        T get() const;
        void set(const T in);
        void increment();
        void increment(const size_t delta);
        void decrement();
        void decrement(const size_t delta);
    private:
        std::deque<T> deque;
        typename std::deque<T>::iterator it;
};

#endif