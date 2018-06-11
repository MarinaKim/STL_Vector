#pragma once
#include"Time.h"

class Train {
private:
	string trainNo;
	Time departure_time;
	string station;

public:
	Train() {
		trainNo = "";
		departure_time = Time();
		station = "";
	}
	Train(string trainNo, Time departure_time, string station) {
		this->trainNo = trainNo;
		this->departure_time = departure_time;
		this->station = station;
	}

	bool operator ==(string train) {
		return(this->trainNo == train);
	}
	bool operator==(Time t) {
		return (departure_time == t);
	}
	
	string getTrain()const { return trainNo; }
	Time getTime()const { return departure_time; }
	friend istream& operator >> (istream& is, Train& obj) {
		is >> obj.trainNo >> obj.departure_time >> obj.station;
		return is;
	}

	friend ostream& operator<<(ostream& os, Train obj) {
		os << obj.trainNo << " " << obj.departure_time << " " << obj.station << endl;
		return os;
	}
};