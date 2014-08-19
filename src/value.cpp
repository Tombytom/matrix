#include "matrix.h"

Value::Value() {  };

// generates values out of given flags
void Value::createValue (int flag)
{
	switch (flag)
	{
		case -1:
			value = ' ';
			break;
		case 0:
			value = '0';
			break;
		case 1:
			value = '1';
			break;
		default:
			std::cout << "does not work." << std::endl;
			break;
	}
}

char Value::getValue()
{
	return value;
}

int Value::randomFlag (int seed)
{
	// initialize with seed as parameter
  	srand (seed);
	// generate a number between 0 and 1.
  	return (rand() % 2);
}


