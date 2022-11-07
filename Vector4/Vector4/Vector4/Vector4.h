#pragma once
#include <vector>


class Vector4
{
#pragma region f/p
private:
	float x, y, z, w;
#pragma endregion f/p
#pragma region constructor/destructor
public:
	Vector4() = default;
	Vector4(const float _x, const float _y, const float _z, const float _w);
	Vector4(const Vector4& _copy);
	~Vector4();
#pragma endregion constructor/destructor
#pragma region methods
public:
	float GetX();
	float GetY();
	float GetZ();
	float GetW();
	static Vector4* Abs(Vector4* _vector);
	Vector4* Add(const float x, const float y, const float z, const float w);
	Vector4* Clamp(Vector4* _a, Vector4* _b);
	Vector4* Min(Vector4* _vector1, Vector4* _vector2);
	Vector4* Max(Vector4* _vector1, Vector4* _vector2);
	Vector4* Lerp(Vector4* _a, Vector4* _b, float _t);
	float Dot(Vector4* _a, Vector4* _b);
	float Magnitude(Vector4* _vector);
	float Distance(Vector4* _a, Vector4* _b);
	void Set(const float _newX, const float _newY, const float _newZ, const float _newW);
	float Length(Vector4* _vector);
	float Squarred(Vector4* _vector);
	void Normalize(Vector4* _vector);
#pragma endregion methods
#pragma region operator

#pragma endregion operator






};

//distance Manathan

