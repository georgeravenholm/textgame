#pragma once

#include <string>
#include "vec2.h"
#include "grid.h"

class Entity
{
public:
	Entity(std::string entClass, char sprite)
	{
		this->entClass = entClass;
		this->sprite = sprite;

	}

	int GetHealth() const;
	void SetHealth(int ihp);
	void AddHealth(int ihp);
	bool Alive() const;

	Vec2 GetPos() const;
	void SetPos(const Vec2 & ipos);
	void SetPos(float x, float y);

	std::string GetClass() const;

	bool IsTouchingEnt(const Entity& them) const;

	///////// overloadable calls dude //////////
	virtual void Think();
	virtual void Draw( Grid& surface ) const;

	virtual ~Entity() = default; // make sure destructor is overwritable
protected:
	int hp;
	bool alive;
	char sprite;
private:
	std::string entClass; // entity class
	Vec2 pos; // use get/set pos in base ents
};