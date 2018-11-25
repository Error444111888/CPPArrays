// Arrays

#include <iostream>

using namespace std;

int main()
{	

	//This most simple array
	double BTC_USD[6] = { 3732.523, 4502.542, 6503.534, 8142.432, 5342.934, 8904.598 };

	cout << BTC_USD[2] << endl; /* <<< This is very important. When you call an element from an Array. DONT FORGET THAT THE COUNT STARTS WITH 0 AND NOT 1. So when I call 2nd item it will show the 3rd item in the array*/
	cout << "End of this code \n" << endl;



	//Create an array using loops
	int Element[17];
	cout << "Element ----- Value" << endl;

	for (int x = 0; x < 17; x++) /*<<< Make sure it goes from 0 to 17 because it starts from 0 and goes until 16 as the last number*/
	{
		Element[x] = 33;
		cout << x << "     -----     " << Element[x] << endl;
	}

	cout << "End of this code \n" << endl;


	//Using arrays in calculations

	int BTCHistoricalPrices[6] = { 3000, 4000, 5000, 6000, 7000, 8000 };
	int sum = 0;

	for (int x = 0; x < 6; x++)
	{
		sum += BTCHistoricalPrices[x]; /* <<< Each time x adds a number, it will grab that number elemant from the array and add it to the last sum */

		cout.precision(15);
		cout << sum << endl;
	}

	cout << "End of this code \n" << endl;


	cin.get();
}