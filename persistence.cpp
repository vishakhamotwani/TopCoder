using namespace std;

class PersistentNumber{
	public:
	int getPersistence(int);
};

int PersistentNumber::getPersistence(int n){
	long long int temp = 1;
	long long int temp1 = n;
	int persistence = 0; 
	while(temp1>10){
		n = temp1;
		while(n>=10){
			temp = temp*(n%10);
			n = n/10;
		}
		temp1 = temp*n;
		persistence++;
		temp = 1;
	}
	if(temp1==10)
		persistence++;
	return persistence;
}
