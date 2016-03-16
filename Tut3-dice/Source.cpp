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

float average(dice a, int Norolls){

	float av = (float)accum / (float)Norolls; //type casted the variables to hold float values
	return av;

}
float ave(int darr[], int length){

	float av = 0.000;
	int arrayResult = 0;
	

	for (int count = 0; count < length; count++){

		arrayResult = arrayResult + darr[count];


		cout << "the roll:" << count + 1 << "is =" << darr[count] << endl;
	
	
	
	}
	av = (float)arrayResult / (float)length;
	return av;



}
int main(){
	
	int tmp = 0; // variable temporarily holds the result of the dice roll
	int Norolls = 0;
	
		
		int *arrPointer;  // array pointer
	arrPointer = new int[Norolls]; // using dynamic memory allocation for the array 
	
		char prompt = 'G'; // user variable to start or stop the roll
	
		dice a= dice(); //dice object created
	
		
		while (prompt != 'P'){
		
			cout << "enter any character except 'P' to do a roll or" << endl;   // output text to prompt user
			cout << "enter the characer 'P' to stop the dice rolling" << endl;	// output text to prompt
			
			cin >> prompt;
				//input for rolls
			
			Norolls++; //increment roll counter after every roll done
		
			tmp = a.roll();
		accum = tmp;
		accum = accum + 1;
		
			
			
			cout << "Result is :" << tmp << endl;
		cout << "rolls:" << Norolls << endl;
		
			cout << "Dice function average: " << ave(a, Norolls) << endl;
		
			
			
		};
	
		delete &a; //deletes dice object after use

		return 0;
	
}

