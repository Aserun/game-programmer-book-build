#ifndef INCLUDED_BULLET_H
#define INCLUDED_BULLET_H

class Model;
class GraphicsDatabase;
class Matrix44;
class Vector3;

class Bullet{
public:
	Bullet();
	~Bullet();
	void create( 
		GraphicsDatabase*,
		const char* batchName,
		const Vector3& position,
		double angleX, double angleY );
	const Vector3* position() const;
	void update( const Vector3& enemyPos );
	void draw( const Matrix44& projectionVewMatrix ) const;
	bool isEmpty() const; //�g���ĂȂ����true�BmCount<0�Ŕ���
	void die(); //�e�����܂�
private:
	Model* mModel;
	int mCount; //-1�Ȃ炻�̒e�͋󂾂Ƃ������Ƃɂ��悤�B

	static const float mHomingX; //�p�x�U�����\X
	static const float mHomingY; //�p�x�U�����\Y
	static const int mLife; //�e����
	static const float mSpeed; //�e�̑��x
};

#endif