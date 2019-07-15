#ifndef INF_TAPE_H
#define INF_TAPE_H

#include <vector>

template <typename T>
class infTape{
    public:
        infTape(){
            vec.resize(1);
            it = vec.begin();
        }

        T get() const;
        void set(const T in);
        void increment();
        void increment(const size_t delta);
        void decrement();
        void decrement(const size_t delta);
    private:
        std::vector<T> vec;
        typename std::vector<T>::iterator it;
};

#endif