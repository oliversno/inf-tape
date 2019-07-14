#ifndef INF_TAPE_H
#define INF_TAPE_H

#include <vector>

template <typename T>
class infTape{
    public:
        infTape(){
            it = vec.begin();
        }

        T get() const;
        void set(const T in);
        void increment() const;
        void increment(const size_t delta) const;
        void decrement() const;
        void decrement(const size_t delta) const;
    private:
        std::vector<T> vec;
        std::vector<T>::iterator it;
};

#endif