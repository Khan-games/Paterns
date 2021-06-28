#pragma once
class Singleton
{
public:
	static Singleton& getInstance();
private:
	Singleton* instance = nullptr;

	Singleton(); // private constructor
};

