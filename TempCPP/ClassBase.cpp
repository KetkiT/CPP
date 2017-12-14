/*
 * Class1.cpp
 *
 *  Created on: Oct 10, 2017
 *      Author: Nilesh
 */

#include "ClassBase2.cpp"
#include "ClassBase3.cpp"

class ClassBase : public ClassBase2, ClassBase3 {
public:
static int i=0;
	void method1k() {
		if(true) {
			for(;true;) {
				if(true) {

				}
			}
		}
	}

/*	void method2k() {
		if(true) {
			for(;true;) {
				if(true) {

				}
			}
		}
	}*/

	void method3k() {
		if(true) {
			for(;true;) {
				if(true) {

				}
			}
		}
	}

	void method4k() {
		if(true) {
			for(;true;) {
				if(true) {

				}
			}
		}

		nonstatic3k1();
		nonstatic3k2();
		method1k();
		static35k();

	}

	static void Static5k(){

		static22k();
		cb22=5;
		cb21=10;
	}
	static void Static6k(){

		static23k();
		static34k();
		static21k();
		cb22=78;
		cb21=90;
	}
	static void Stati6k(){

		static23k();
		cb22=78;
		cb21=90;
	}
	static void nonStati5k(){


	}
	static void nonStati6k(){
		cb25=0;
		cb32=90;

	}
private:
};
