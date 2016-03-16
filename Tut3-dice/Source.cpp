#include <iostream>
 #include <cmath>
 #include <ctime>
 #include <string>
// includes the libraries that will be used in the program


using namespace std;

class dice{  // created a dice class
	private:
		
			int res; // dcelared a private variable to hold the result
		
			
			public: dice(){
			
				srand(time(NULL));
			rand();
			
				res = 0;
			
				
		}
		int roll(){    // method for the dice to roll
			
				res = rand() % 6 + 1;
			
				return res;  // returns the result of the roll
			
				
		}
		
			~dice(){
			
						// default destructor
				
				
		}
		
			
			
};

float ave(dice a, int Norolls); //over loaded functions
float ave(int darr[], int length); // over loaded functions
int accum = 0;


int main(){
	
	int tmp = 0; // variable temporarily holds the result of the dice roll
	int Norolls = 0;
	
		
		int *arrPointer;  // array pointer
	arrPointer = new int[Norolls]; // using dynamic memory allocation for the array 
	
		char prompt = 'G'; // user variable to start or stop the roll
	
		dice d; //dice object with defualt constructor
	
		
		while (prompt != 'P'){
		
			cout << "enter any character except P to do a roll" << endl;   // output text to prompt
		
						// output text to prompt
			
			cin >> prompt;
				//input for rolls
			
			Norolls++;
		
			tmp = d.roll();
		accum = tmp;
		accum = accum + 1;
		
			
			
			cout << "Result is :" << tmp << endl;
		cout << "rolls:" << Norolls << endl;
		
			cout << "Dice function average: " << ave(d, Norolls) << endl;
		
			
			
	}
	
		
		return 0;
	
}

float average(dice a, int Norolls){
	
		float av = (float)accum / (float)Norolls;
	return av;
	
}