#include<iostream>
#include<string>
#include<stdlib.h>

#ifndef IO_H
#define IO_H 1
#endif

using namespace std;

namespace io {
    template<typename T>
    void print(T text) {
        cout << text;
    }
    template<typename T>
    void println(T text) {
	cout << text << endl;
    }
    template<typename T>
    void read(T &variable) {
	    getline(cin, variable);
    }
    namespace console {
	void clear() {
	    system("clear");
	}
    }
}

