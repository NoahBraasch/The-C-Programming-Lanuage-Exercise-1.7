#include <stdio.h>

int main(){
	// By using decimal as our output, the value of EOF is displayed as an integer, which in this case the value is -1.
	// This is important because EOF and only EOF will have a value of -1
	printf("The value of EOF is: %d", EOF);
	return 0;
}