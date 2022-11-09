#include <iostream>


template<typename T>
struct IsPointer { enum { Value = false }; };

template<typename T>
struct IsPointer<T*> { enum { Value = true }; };

template<typename T>
struct IsPointer<const T> { enum { Value = false }; };

template<typename T>
struct IsPointer<const T*> { enum { Value = true }; };

int main()
{
    std::cout << IsPointer<int>::Value << std::endl;
    std::cout << IsPointer<int*>::Value << std::endl;
    std::cout << IsPointer<const int*>::Value << std::endl;
    std::cout << IsPointer<const int>::Value << std::endl;

    //exo

    //std::cout << RemoveConst<int> = > int << std::endl;
    //RemoveConst<const int = > int;
}