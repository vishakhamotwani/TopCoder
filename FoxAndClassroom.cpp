#include<string>
using namespace std;
class FoxAndClassroom{
	public:
	string ableTo(int, int);
	int getGCD(int, int);
};

//n and m have to be relatively prime meaning
//the only positive integer that evenly divides n and m is 1
string FoxAndClassroom::ableTo(int n, int m){
	return ((getGCD(n,m)==1) ? "Possible" : "Impossible");
}

int FoxAndClassroom::getGCD(int n, int m){
	return ((m==0) ? n : getGCD(m, n%m));
}
