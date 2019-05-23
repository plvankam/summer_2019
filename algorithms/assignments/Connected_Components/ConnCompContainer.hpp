#ifndef CONNCOMPCONTAINER_HPP
#define CONNCOMPCONTAINER_HPP

#include<vector>

template<typename T>
class ConnCompContainer
{
    private:
        std::vector<T> array;
    public:
        // CTOR
        ConnCompContainer<T>();
        ConnCompContainer<T>(T* array, int array_len); 
        // DTOR
        ~ConnCompContainer<T>() {} 

        // FIND
        bool Find(T num1, T num2) const; 
        // UNION
        void Union(T num1, T num2);
};

#endif // CONNCOMPCONTAINER_HPP
