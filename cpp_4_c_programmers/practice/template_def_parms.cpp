#include<iostream>

#define NEW_LINE std::cout << std::endl;

template<typename T>
T array_sum(const T* array, int size, T s = 0)
{
    for(int i = 0; i < size; ++i)
    {
        s += array[i];
    }
    return s;
}

int main()
{

    double d_array[] = {1.2, 2.3, 3.4, 4.5};
    int    i_array[] = {12, 23, 34, 45};

    std::cout << "double sum = " << array_sum(d_array, sizeof(d_array)/sizeof(d_array[0])); 
    NEW_LINE
    std::cout << "int    sum = " << array_sum(i_array, sizeof(i_array)/sizeof(i_array[0])); 
    NEW_LINE

    std::cout << "double sum = " << array_sum(d_array, sizeof(d_array)/sizeof(d_array[0]), 5.0); 
    NEW_LINE
    std::cout << "int    sum = " << array_sum(i_array, sizeof(i_array)/sizeof(i_array[0]), 5); 
    NEW_LINE

    return 0;
}
