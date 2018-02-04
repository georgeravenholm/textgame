#pragma once

#include "entity.h"

class TestEntity : public Entity
{
public:
	TestEntity();
	
	void Think() override;
	//void Draw(Grid & surface) const override;
};