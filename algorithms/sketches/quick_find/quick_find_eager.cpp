#include<iostream>


bool find(int a, int b, int* array)
{
    return *(array + a) == *(array + b);
}

void union_(int a, int b, int* array)
{
   if(!find(a,b,array))
   {
    
   }
}

int main(int argc, char** argv)
{

    int vect[] {0,1,2,3,4,5,6,7,8,9};

    // if(!find(1,2,vect)) std::cout << "Nope, not the same" << std::endl;

    return 0;
}
