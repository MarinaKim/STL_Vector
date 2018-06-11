#pragma once
#include "Library.h"

class Time {
private:
	int hh;
	int mm;

public:
	Time() = default;
	Time(int hh, int mm) {
		this->hh = hh;
		this->mm = mm;
	}

	size_t getHH()const {
		return hh;
	}

	size_t getMM()const {
		return mm;
	}

	void setHH(size_t hh) {
		this->hh = hh;
	}
	void setMM(size_t mm) {
		this->mm = mm;
	}

	bool operator==(const Time& obj) {
		return(hh == obj.hh&&mm == obj.mm);
	}

	friend istream& operator >> (istream &is, Time& obj) {
		char c;
		is >> obj.hh >>c>> obj.mm;
		return is;
	}
	friend ostream& operator<< (ostream& os, Time obj) {
		os << obj.hh << ":" << obj.mm;
		return os;
	}
};