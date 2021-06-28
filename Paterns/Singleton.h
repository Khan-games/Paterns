#pragma once
class Singleton
{
public:
	static Singleton& getInstance();
private:
	inline static Singleton* instance = nullptr; 

	Singleton(); // private constructor
};


