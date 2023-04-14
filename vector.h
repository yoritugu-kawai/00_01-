#pragma once

struct Vector3 {
	float x, y, z;
};
// ���Z
Vector3 Add(const Vector3& v1, const Vector3& v2);
// ���Z
Vector3 Subract(const Vector3& v1, const Vector3& v2);
// �X�J���[�{
Vector3 Multiply(float scalar, const Vector3& v);
// ����
float Dot(const Vector3& v1, const Vector3& v2);
// ����
float Length(const Vector3& v);
// ���K��
Vector3 Normalize(const Vector3& v);
//
static const int kColumnWidth = 60;
static const int kRowHeight = 20;

void VectorScreenPrintf(int x, int y, const Vector3& vector, const char* label);
