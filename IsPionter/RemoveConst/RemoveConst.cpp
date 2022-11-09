#include <iostream>


template<typename T>
struct RemoveConst { enum { Value = "T" }; };

template<typename T>
struct RemoveConst<T*> { enum { Value = "T*" }; };

template<typename T>
struct RemoveConst<const T> { enum { Value = RemoveConst<T>::Value }; };

template<typename T>
struct RemoveConst<const T*> { enum { Value = RemoveConst<T*>::Value }; };


int main()
{
	std::cout << RemoveConst<const int>::Value << std::endl;
}
