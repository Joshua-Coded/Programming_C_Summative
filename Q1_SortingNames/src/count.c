#include <string.h>


// function to count the total number of names

int countNames(char names[][50], int max) {
	int count = 0;
	for (int i = 0; i < max; i++) {
	  if (strlen(names[i]) > 0) {
	     count++;
}
}
return count;
}
