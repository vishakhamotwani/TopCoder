#include <string>
#include <vector>
using namespace std;
class LittleElephantAndDouble{
	public:
	string getAnswer(vector<int>);
};

string LittleElephantAndDouble::getAnswer(vector<int> A){
	for(int i : A){
	//Dividing all the numbers in the vector by 2 would result in the 
	//same end result(1) ultimately so after the division keep checking for each element if 
	//it is equal to any one of the elements (let that be A[0])
		while(i%2 == 0)
			i = i/2;
		//Even if a single element is not equal return at that instant
		if(i!=A[0])
			return "NO";
	}
	return "YES";
}
