#pragma once
class Singleton
{
public:
	static Singleton& getInstance();

	// disable copy and assign operators
	Singleton(Singleton& other) = delete;
	void operator=(const Singleton& other) = delete;

private:
	inline static Singleton* instance = nullptr; 

	Singleton(); // private constructor
};


