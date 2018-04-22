#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	cout << "=====================================" << endl;
	cout << "Here are the parameters for the rover" << endl;
	cout << "=====================================" << endl;
	for (int i = 0; i < argc; i ++)
	{
		cout << "Parameter [" <<  i << "] = [" << argv[i] << "]" << endl;
	}
	
	cout << "=====================================" << endl;
	
	return 0;
}
