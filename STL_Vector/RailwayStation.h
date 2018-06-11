#pragma once
#include"Train.h"

class Railways {
private:
	vector<Train> Trains;
public:
	void Add(Train t) {
		Trains.push_back(t);
	}
	void Delete(Train t) {
		Trains.pop_back();
	}
	void print(Time h) {
		for (int i = 0; i < Trains.size(); i++)
			if (Trains[i].getTime() == h)
				cout << Trains[i] << endl;
	}
	void printAll() {
		for (int i = 0; i < Trains.size(); i++)
			cout << Trains[i] << endl;
	}
};