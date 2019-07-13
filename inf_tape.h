#include <vector>

template <typename T>
class inf_tape{
    public:
        T get() const;
        void set(const T in);
        void increment() const;
        void increment(const int delta) const;
        void decrement() const;
        void decrement(const int delta) const;
    private:
        std::vector<T> vec;
        std::vector<T>::const_iterator front_cit;
        std::vector<T>::const_iterator back_cit;
        std::vector<T>::iterator it;
};