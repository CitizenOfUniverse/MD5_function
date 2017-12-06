#include <windows.h>
#include <iostream>
#include <iomanip>
#include "md5.h"

using namespace::std;

int main() {
	//Example of using MD5 realisation
	//Resulting array for MD5 digest separated into 4 32-bit words
	DWORD md5[4];
	//Message
	char buffer[] = "Online generator 123456789";
	MD5(buffer, sizeof(buffer) - 1, md5);
	//Result outputing
	cout << hex << md5[0] << md5[1] << md5[2] << md5[3] << "\n";
	//Etalone hash of this message: dd5a67705c45fe087eb78972529d7202
	return 0;
}