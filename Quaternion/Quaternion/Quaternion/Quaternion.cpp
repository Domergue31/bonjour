#include "Quaternion.h"

Quaternion::Quaternion(const float _x, const float _y, const float _z, const float _w)
{
	x = _x;
	y = _y;
	z = _z;
	w = _w;
}

Quaternion::Quaternion(const Quaternion& _copy)
{
	x = _copy.x;
	y = _copy.y;
	z = _copy.z;
	w = _copy.w;
}

void Quaternion::Identity()
{
	x = 0.0f;
	y = 0.0f;
	z = 0.0f;
	w = 1.0f;

}

void Quaternion::Set(const float _x, const float _y, const float _z, const float _w)
{
	x = _x;
	y = _y;
	z = _z;
	w = _w;
}

Quaternion Quaternion::operator+(const Quaternion& _other) const
{
	return Quaternion(x + _other.x, y + _other.y, z + _other.z, w + _other.w);
}

Quaternion Quaternion::operator-(const Quaternion& _other) const
{
	return Quaternion(x - _other.x, y - _other.y, z - _other.z, w - _other.w);
}

Quaternion Quaternion::operator*(const Quaternion& _other) const
{
	return Quaternion(x * _other.x, y * _other.y, z * _other.z, w * _other.w);
}

Quaternion Quaternion::operator/(const Quaternion& _other) const
{
	return Quaternion(x / _other.x, y / _other.y, z / _other.z, w / _other.w);
}

bool Quaternion::operator==(const Quaternion& _other)
{
	return x == _other.x && y == _other.y && z == _other.z && w == _other.w;
}

bool Quaternion::operator!=(const Quaternion& _other)
{
	return x != _other.x && y != _other.y && z != _other.z && w != _other.w;
}

Quaternion Quaternion::operator=(const Quaternion& _other)
{
	x = _other.x;
	y = _other.y;
	z = _other.z;
	w = _other.w;
	return *this;
}
