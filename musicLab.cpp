#include<stdio.h>
#include<iostream>
#include<string>
#include<string.h>
using namespace std;

class MusicBand {
protected:
	string name;
	int members;
public:
	virtual int count(int x, int y) = 0;
	//virtual void print() = 0;
	void setName(string s) { this->name = s; }
	string getName() {	return this->name;	}
	void setTotal(int n) {	this->members = n;	}
	int getTotal() { return this->members;	}
};

class Metal : public MusicBand{
private:
	int totalMem;
	int piroTechs;

public:
		int count(int x, int y) {
		int z = x+y;
		return z;
	}

	void setPiroTechs(int x) {	this->piroTechs = x; }
	int getPiroTechs() { return this->piroTechs; }
	void setTotalMem(int x) { this->totalMem = x; }
	int getTotalMem() { return this->totalMem; }
	
};

class Symphony : public MusicBand {
private:
	int totalMem;
	string conductor;

public:
	int count(int z, int y) {
		int x = z + y;
		return x;
	}
	//void makeMusic() {
	//	cout << getConductor << " made music" << endl;
	//}
	void setConductor(string x) { this->conductor = x; }
	string getConductor() { return this->conductor; }
	void setTotalMem(int x) { this->totalMem = x; }
	int getTotalMem() { return this->totalMem; }
};

int main() {
	Metal m;
	string s;
	cout << "Enter name of the band: ";
	cin >> s;
	m.setName(s);
	m.setTotal(10);
	cout << "Enter number of Pirotechs: ";
	int y;
	cin >> y;
	m.setPiroTechs(y);
	int z = m.count(m.getPiroTechs(), m.getTotal());
	m.setTotalMem(z);
	cout << "Band " << m.getName() << " has " << m.getTotalMem() << " members" << endl;

	Symphony s1;
	string s2;
	cout << "Enter name of the band: ";
	cin >> s2;
	s1.setName(s2);
	s1.setTotal(10);
	cout << "Enter name of Conductor: ";
	string s3;
	cin >> s3;
	s1.setConductor(s3);
	int w = s1.count(1, s1.getTotal());
	s1.setTotalMem(w);
	cout << "Band " << s1.getName()<<" with conductor "<< s1.getConductor()  << " has " << s1.getTotalMem() << " members" << endl;
	system("pause");


}