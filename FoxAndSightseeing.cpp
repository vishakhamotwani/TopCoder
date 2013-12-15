#include <vector>
#include <stdlib.h>
using namespace std;
class FoxAndSightseeing{
	public:
	int getMin(vector <int>);
};

int FoxAndSightseeing::getMin(vector <int> position){
	int finalDist = 100000; //A large number just to compare with the final distance so that the
	// minimum can be determined
	for(int i=1; i<position.size()-1; i++){//Count for the skipped cities
		int prev=position[0]; //Initializing to the previous position to remember the last visited
		//so that when the city i is being skipped 
		int total=0;//Total in the current loop where city i is being skipped
		for(int j=1; j<position.size();j++){
			if(i!=j){//Checking if the city in context is not the skipped city
				total += abs(position[j]-prev);
				prev = position[j];//Remembering the previous city visited
			}
		}
		finalDist = min(finalDist, total);
	}
	return finalDist;
}
