#pragma once

class Quaternion
{
#pragma region f/p
private:
	float x = 0.0f,
		  y = 0.0f,
	      z = 0.0f,
		  w = 0.0f;
public:

#pragma endregion f/p
#pragma region constructor
public:
	Quaternion(const float _x, const float _y, const float _z, const float _w);
	//Quaternion(const float _x, const float _y, const float _z);
	//Quaternion(const float _x, const float _y);
	//Quaternion(const float _value);
	Quaternion(const Quaternion& _copy);
#pragma endregion constructor
#pragma region methods
public:
	/// <summary>
	/// Set the components on "no rotation"
	/// </summary>
	void Identity();
	/// <summary>
	/// Set components of the vectors
	/// </summary>
	/// <param name="_x">float</param>
	/// <param name="_y">float</param>
	/// <param name="_z">float</param>
	/// <param name="_w">float</param>
	void Set(const float _x, const float _y, const float _z, const float _w);
	/// <summary>
	/// Normalize vector between 0 and 1
	/// </summary>
	/// <param name="_value">quaternion</param>
	/// <returns>Quaternion</returns>
	Quaternion Normalize(const Quaternion& _value);
	/// <summary>
	/// Return the conjugate quaternion
	/// </summary>
	/// <param name="_value">quaternion</param>
	/// <returns>Quaternion</returns>
	static Quaternion Conjugate(const Quaternion& _value);
	/// <summary>
	/// Return the inverse of rotation
	/// </summary>
	/// <param name="_value">quaternion</param>
	/// <returns>Quaternion</returns>
	static Quaternion Inverse(const Quaternion& _value);
	/// <summary>
	/// Inverse the components signs
	/// </summary>
	/// <param name="_value">quaternion</param>
	/// <returns>Quaternion</returns>
	static Quaternion Negate(const Quaternion& _value);

	//static Quaternion
#pragma endregion methods
#pragma region operator
public:
	Quaternion operator+(const Quaternion& _other) const;
	Quaternion operator-(const Quaternion& _other) const;
	Quaternion operator*(const Quaternion& _other) const;
	Quaternion operator/(const Quaternion& _other) const;
	bool operator==(const Quaternion& _other);
	bool operator!=(const Quaternion& _other);
	Quaternion operator=(const Quaternion& _other);
#pragma endregion operator
};

