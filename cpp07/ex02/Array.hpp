#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
// #include <exception>

template <typename T>
class Array
{
    private:
        T *array;
        unsigned int n;
    public:
        Array() : array(NULL)
        {
            n = 0;
        }
        Array(unsigned int N)
        {
            array = new T[N];
            n = N;
        }
        Array<T> &operator=(const Array<T> &instance)
        {
            if (this == &instance)
                return *this;
            if (array)
                delete[] array;
            array = new T[instance.n];
            n = instance.n;
            for(int i = 0; i < n; i++)
                array[i] = instance.array[i];
            return *this;
        }
        Array(const Array<T> &instance)
        {
            array = new T[instance.n];
            n = instance.n;
            for(int i = 0; i < n; i++)
                array[i] = instance.array[i];
        }
        ~Array()
        {
            if (n && array)
                delete[] array;
        }
        T &operator[](long i)
        {
            if (i >= n || i < 0)
                throw std::out_of_range("Index out of bounds!");
            return array[i];
        }
        size_t size() const
        {
            return n;
        }

};

#endif