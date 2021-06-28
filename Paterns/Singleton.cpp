#include "Singleton.h"

Singleton::Singleton() {

}

Singleton& Singleton::getInstance() {
	std::scoped_lock ul(m_creation);
	if (instance == nullptr) {
		instance = new Singleton();
	}
	return *instance;
}