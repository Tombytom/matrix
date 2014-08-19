#include "matrix.h"
// we need a generator for the values so that we can count them (/ the rows)
void printInRows(int lines, int cols);

int main()
{
	Value value;
	int seed = 10; // hardcoded seed for now

	// tests
	std::cout << "in main (1): " << value.randomFlag(seed) << std::endl;
	value.setFlag(value.randomFlag(seed));
	std::cout << "in main (2): " << value.getFlag() << std::endl;
	
	value.setValue();
	std::cout << "in main (3): " << value.getValue() << std::endl;

	// This number only fits to the "Matrix" Terminal configuration I made: 315 characters.
	printInRows(3, 315);	
}

void printInRows(int lines, int cols) {
	Value value;
	for(int g = 0; g < lines; g++)
	{
		for(int i = 0; i < cols; i++)
		{
			value.createValue (value.randomFlag (i+g));
			std::cout << value.getValue();
		}
	}
	std::cout << std::endl;
}

