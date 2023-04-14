#include "Vector.h"
#include <Novice.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <string>
#include <cmath>

// â¡éZ
Vector3 Add(const Vector3& v1, const Vector3& v2) {
	Vector3 result{};
	result.x = v1.x + v2.x;
	result.y = v1.y + v2.y;
	result.z = v1.z + v2.z;
	return result;

}
// å∏éZ
Vector3 Subract(const Vector3& v1, const Vector3& v2) {
	Vector3 result{};
	result.x = v1.x - v2.x;
	result.y = v1.y - v2.y;
	result.z = v1.z - v2.z;
	return result;

}
// ÉXÉJÉâÅ[î{
Vector3 Multiply(float scalar, const Vector3& v) {
	Vector3 result{};
	result.x = v.x * scalar;
	result.y = v.y * scalar;
	result.z = v.z* scalar;
	return result;
}
// ì‡êœ
float Dot(const Vector3& v1, const Vector3& v2) {
	float result{};
	result = v1.x * v2.x+v1.y*v2.y + v1.z * v2.z;
	
	return result;
}
// í∑Ç≥
float Length(const Vector3& v) {
	float result{};
	result = sqrt(Dot(v, v));
	return result;
}

// ê≥ãKâª
Vector3 Normalize(const Vector3& v) {
	Vector3 result{};
	float length = Length(v);
	if (length != 0.0f) {
		result.x = v.x /length ;
		result.y = v.y /length ;
		result.z = v.z /length ;
	}
	return result;
}
//

void VectorScreenPrintf(int x, int y, const Vector3& vector, const char* label) {
	Novice::ScreenPrintf(x, y, "%.02f", vector.x);
	Novice::ScreenPrintf(x+kColumnWidth,y,"%.02f", vector.y);
	Novice::ScreenPrintf(x+kColumnWidth*2,y,"%.02f",vector.z);
	Novice::ScreenPrintf(x+kColumnWidth*3,y,"%s",label);

}