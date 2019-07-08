#include<iostream>
#include<vector>

#define NEW_LINE std::cout << std::endl;

template<typename ForwardIterator>
void square(ForwardIterator first, ForwardIterator last)
{
    for(;first != last; ++first) *first = (*first) * (*first);
}


int main()
{

    // declare int vector
    std::vector<int> int_vector_0;
    // create vector
    for(int i = 1; i <=10; ++i)  int_vector_0.push_back(i);
    // square 
    square(int_vector_0.begin(), int_vector_0.end());
    // print
    for(auto val : int_vector_0) std::cout << val << " ";
    NEW_LINE

    return 0;
}

