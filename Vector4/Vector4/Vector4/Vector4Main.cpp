#include <iostream>
#include "Vector4.h"

int main()
{
	Vector4* _vector = new Vector4(5, 6, 78, 4);
	Vector4* _vector2 = new Vector4(16, 18, 456, 1);


	std::cout << _vector->Magnitude(_vector);

	//_vector->Add(5.0f, 4.0f, 2.0f, 6.0f);
	//std::cout << _vector->GetX() << " " << _vector->GetY()<< " " << _vector->GetZ() << " " << _vector->GetW() << " " << std::endl;

}

