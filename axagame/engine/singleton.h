/*
 * singleton.h
 *
 *  Created on: Jan 12, 2013
 *      Author: amalbose
 */

#ifndef SINGLETON_H_
#define SINGLETON_H_
template<typename T> class Singleton {

	public:

		static T &Instance() {
			static T SingletonInstance;
			return SingletonInstance;
		}

	private:

		Singleton();
		~Singleton();
		Singleton(Singleton const &Object);
		Singleton &operator=(Singleton const &Object);
};




#endif /* SINGLETON_H_ */
