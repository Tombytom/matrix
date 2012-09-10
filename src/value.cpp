#include "matrix.h"

Value::Value() {  };

int Value::getFlag()
{
	return flag;
}

void Value::setFlag (int newFlag)
{
	flag = newFlag;
}

void Value::setValue()
{
	int flag = getFlag();
	switch (flag)
	{
		case -1:
			value = ' ';
			break;
		case 0:
			value = '0';
			cout << "works.";
			break;
		case 1:
			value = '1';
			break;
	}
}

char Value::getValue()
{
	return value;
}