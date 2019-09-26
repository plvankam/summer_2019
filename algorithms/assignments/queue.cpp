#include<iostream>
#include<vector>
#include<thread>
#include<algorithm>
#include<functional>
#include<queue>
#include<ctime>   // std::time
#include<cstdlib> // std::rand, std::srand

// using namespace std;
//
#define NEW_LINE std::cout << '\n';

int myrandom(int i) {return std::rand()%i;}

int main(int argc, char** argv)
{

    std::srand( unsigned( std::time(0)));
    std::vector<int> que;
    for(int i = 1; i <= 10; ++i) que.push_back(i);
    // print shuffled queue
    for(auto i: que) std::cout << i << " ";
    NEW_LINE

    int random_num = myrandom(9);
    // shuffle 
    std::random_shuffle(que.begin(), que.end(), myrandom);
    // print shuffled queue
    for(auto i: que) std::cout << i << " ";
    NEW_LINE
    std::cout << "random number = " << random_num << std::endl;


    return 0;
}
