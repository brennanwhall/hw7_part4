#ifndef _VEC_H
#define _VEC_H

#include <ostream>
#include <math.h>

template<typename T>

/// <summary>
/// class for 3 element vector
/// </summary>
/// <typeparam name="T"></typeparam>
class _vec3 {

public:
	_vec3<T>() : d{ 0,0,0 } {}
	_vec3<T>(T a, T b, T c) : d{ a,b,c } {}

	/// <summary>
	/// implements indexing for _vec3
	/// </summary>
	/// @param i integer
	/// @returns _vec3.d[i]
	T& operator[] (int i) { return d[i]; }
	T operator[] (int i) const { return d[i]; }

	/// <summary>
	/// implements addition of two vectors
	/// </summary>
	/// @param a vector 1
	/// @param b vector 2
	/// @returns \f$\overrightarrow{a} + \overrightarrow{b}\f$
	friend _vec3<T> operator+(const _vec3<T>& a, const _vec3<T>& b) {
		return _vec3<T>(a[0] + b[0], a[1] + b[1], a[2] + b[2]);
	}
	/// <summary>
	/// implements subtraction of two vectors
	/// </summary>
	/// @param a vector 1
	/// @param b vector 2
	/// @returns \f$\overrightarrow{a} - \overrightarrow{b}\f$
	friend _vec3<T> operator-(const _vec3<T>& a, const _vec3<T>& b) {
		return _vec3<T>(a[0] - b[0], a[1] - b[1], a[2] - b[2]);
	}
	/// <summary>
	/// implements dot product of two vectors
	/// </summary>
	/// @param a vector 1
	/// @param b vector 2
	/// @returns dot product \f$\overrightarrow{a}\cdot\overrightarrow{b}\f$
	friend T dot(const _vec3<T>& a, const _vec3<T>& b) {
		return a[0] * b[0] + a[1] * b[1] + a[2] * b[2];
	}
	/// <summary>
	/// Returns vector magnitude
	/// </summary>
	/// @param a vector 1
	/// @param b vector 2
	/// @returns Vector magnitude \f$|\overrightarrow{a}| = \sqrt{\overrightarrow{a}\cdot\overrightarrow{a}}\f$
	friend double mag(const _vec3<T>& a) { return sqrt(dot(a, a)); }

	friend std::ostream& operator<<(std::ostream& out, const _vec3<T>& a) {
		out << a[0] << " " << a[1] << " " << a[2]; return out;
	}

protected:
	T d[3]; //!< declares array d of three members of type T
};


using double3 = _vec3<double>;

#endif