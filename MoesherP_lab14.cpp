//---------------------------------------------------------------------------------------------------------------------------
// Paul Moesher										CS2010												MWF 10:30
// --------------------------------------------------------------------------------------------------------------------------

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function declarations
int getRandomNum(); // This will be call to the main twice. It is the function that generates a random number between 1 and 100

int gcd(int, int); // This is the greatest common divisor function bot x and y values will need to be passed to it

int main()

{

	srand(time(NULL));

	// Declare variables 
	int x;   // The x value
	int y;  // The y value

	// Call the random number function to get a value for x

	x = getRandomNum();

	// Write the heading

	cout << "Greatest Common Divisor of " << x << "  and y";
	cout << "   " << endl; // Line for space
	cout << "y              gcd"  << endl;
	cout << "-----------------------------------------------" << endl;


	
	// Adding a for loop so you get the gcd for both x and y

	for (int i = 0; i < 20; i++)

		// Call the random number function again to get a value for y
	{
		y = getRandomNum();
		cout << y <<   "\t\t"     << gcd(x, y) << endl;
	}

	system("pause");
	return 0;

}

int getRandomNum()
{
	int x=rand() % 100 + 1;
	return x;
}

int gcd(int x, int y)
{
	if (y != 0)
		return gcd(y,x%y);
	else
		return x;
}
