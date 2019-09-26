#include<iostream>
#include<vector>
#include<thread>
#include<algorithm>
#include<functional>
#include<deque>

// using namespace std;
//
#define NEW_LINE std::cout << '\n';

int main(int argc, char** argv)
{

    std::deque<int> deq;
    for(int i = 1; i <= 10; ++i)
    {
        deq.push_back(i);
    }
    for(auto a: deq) std::cout << a << " ";
    NEW_LINE

    return 0;
}
