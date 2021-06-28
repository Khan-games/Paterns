#pragma once

#include <mutex>

class Singleton
{
public:
	static Singleton& getInstance();

	// disable copy and assign operators
	Singleton(Singleton& other) = delete;
	void operator=(const Singleton& other) = delete;

private:
	inline static Singleton* instance = nullptr; 
	inline static std::mutex m_creation;

	Singleton(); // private constructor
};


