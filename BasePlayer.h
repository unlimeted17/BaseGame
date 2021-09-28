#pragma once
class BasePlayer
{
public:
	virtual void Render() = 0;
	virtual void init() = 0; // Полиморфизм
};

