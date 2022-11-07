#include "Vector4.h"
#include <iostream>

Vector4::Vector4(const float _x, const float _y, const float _z, const float _w)
{
	x = _x;
	y = _y;
	z = _z;
	w = _w;
}

Vector4::Vector4(const Vector4& _copy)
{
	x = _copy.x;
	y = _copy.y;
	z = _copy.z;
	w = _copy.w;
}

Vector4::~Vector4()
{
}

float Vector4::GetX()
{
	return x;
}

float Vector4::GetY()
{
	return y;
}

float Vector4::GetZ()
{
	return z;
}

float Vector4::GetW()
{
	return w;
}

Vector4* Vector4::Abs(Vector4* _vector)
{
	Vector4* _newVector = new Vector4(std::abs(_vector->GetX()), std::abs(_vector->GetY()), std::abs(_vector->GetZ()), std::abs(_vector->GetW()));
	return _newVector;
}

Vector4* Vector4::Add(const float _x, const float _y, const float _z, const float _w)
{
	x += _x;
	y += _y;
	z += _z;
	w += _w;
	Vector4* _newVector = new Vector4(x, y, z, w);
	return _newVector;
}

Vector4* Vector4::Clamp(Vector4* _a, Vector4* _b)
{
	return nullptr;
}

Vector4* Vector4::Min(Vector4* _vector1, Vector4* _vector2)
{
	x = _vector1->GetX() < _vector2->GetX() ? _vector1->GetX() : _vector2->GetX();
	y = _vector1->GetY() < _vector2->GetY() ? _vector1->GetY() : _vector2->GetY();
	z = _vector1->GetZ() < _vector2->GetZ() ? _vector1->GetZ() : _vector2->GetZ();
	w = _vector1->GetW() < _vector2->GetW() ? _vector1->GetW() : _vector2->GetW();
	Vector4* _newVector = new Vector4(x, y, z, w);
	return _newVector;
}

Vector4* Vector4::Max(Vector4* _vector1, Vector4* _vector2)
{
	x = _vector1->GetX() > _vector2->GetX() ? _vector1->GetX() : _vector2->GetX();
	y = _vector1->GetY() > _vector2->GetY() ? _vector1->GetY() : _vector2->GetY();
	z = _vector1->GetZ() > _vector2->GetZ() ? _vector1->GetZ() : _vector2->GetZ();
	w = _vector1->GetW() > _vector2->GetW() ? _vector1->GetW() : _vector2->GetW();
	Vector4* _newVector = new Vector4(x, y, z, w);
	return _newVector;
}

Vector4* Vector4::Lerp(Vector4* _a, Vector4* _b, float _t)
{
	
}

float Vector4::Dot(Vector4* _a, Vector4* _b)
{
	return 0.0f;
}

float Vector4::Magnitude(Vector4* _vector)
{
	float _result = _vector->GetX() * _vector->GetX() + _vector->GetY() * _vector->GetY() + _vector->GetZ() * _vector->GetZ() + _vector->GetW() * _vector->GetW();
	return _result;
}

float Vector4::Distance(Vector4* _a, Vector4* _b)
{
	return std::abs(_b->GetX() - _a->GetX()) + std::abs(_b->GetY() - _a->GetY()) + std::abs(_b->GetZ() - _a->GetZ()) + std::abs(_b->GetW() - _a->GetW());
}

void Vector4::Set(const float _newX, const float _newY, const float _newZ, const float _newW)
{
	x = _newX;
	y = _newY;
	z = _newZ;
	w = _newW;
}

float Vector4::Length(Vector4* _vector)
{
	return 0.0f;
}

float Vector4::Squarred(Vector4* _vector)
{
	return 0.0f;
}

/*void Vector4::Normalize(Vector4* _vector)
{

}
*/

