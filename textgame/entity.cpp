#include "stdafx.h"
#include "entity.h"

int Entity::GetHealth() const
{
	return hp;
}

void Entity::SetHealth(int ihp)
{
	hp = ihp;
	if (hp <= 0) alive = false;
}

void Entity::AddHealth(int ihp)
{
	hp += ihp;
	if (hp <= 0) alive = false;
}

bool Entity::Alive() const
{
	return alive;
}

Vec2 Entity::GetPos() const
{
	return pos;
}

void Entity::SetPos(const Vec2 & ipos)
{
	pos = ipos;
}

void Entity::SetPos(float x, float y)
{
	pos = Vec2{ x,y };
}

std::string Entity::GetClass() const
{
	return std::string();
}

bool Entity::IsTouchingEnt(const Entity & them) const
{
	return this->pos == them.GetPos();
}

void Entity::Think()
{
	// This should be overwritten.
	//std::cout << "you wont get this!" << std::endl;
}

void Entity::Draw(Grid & surface) const
{
	// Default
	surface.PutChar(pos, sprite);
}
