//EnemyObject.h

#pragma once

class EnemyObject{
public:
		EnemyObject(Sprite* sprite, Collider* collider = nullptr);

		void Update(float deltatime);

	
	
	
	
	int speed;


};