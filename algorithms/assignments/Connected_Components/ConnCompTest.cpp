#include<iostream>
#include"ConnCompContainer.hpp"

int main(int argc, char** argv)
{

    int array[10];
    for(int i = 0; i < 10; ++i) array[i] = i;
    ConnCompContainer<int>* conn_cont_0 = 
        new ConnCompContainer<int>(array, sizeof(array)/sizeof(array[0]));

    delete conn_cont_0;
    return 0;
}
