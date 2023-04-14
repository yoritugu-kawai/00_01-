#pragma once

struct Vector3 {
	float x, y, z;
};
// â¡éZ
Vector3 Add(const Vector3& v1, const Vector3& v2);
// å∏éZ
Vector3 Subract(const Vector3& v1, const Vector3& v2);
// ÉXÉJÉâÅ[î{
Vector3 Multiply(float scalar, const Vector3& v);
// ì‡êœ
float Dot(const Vector3& v1, const Vector3& v2);
// í∑Ç≥
float Length(const Vector3& v);
// ê≥ãKâª
Vector3 Normalize(const Vector3& v);
//
static const int kColumnWidth = 60;
static const int kRowHeight = 20;

void VectorScreenPrintf(int x, int y, const Vector3& vector, const char* label);
