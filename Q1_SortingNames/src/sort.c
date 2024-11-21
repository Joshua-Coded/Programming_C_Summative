#include <string.h>

// function to sort names in ascending order

void sortAscending(char names[][50], int n) {
	for (int i = 0; i < n - 1; i++) {
	    for (int j = i + 1; j < n; j++) {
	         if (strcmp(names[i], names[i]) > 0) {
		    char temp[50];
		    strcpy(temp, names[i]);
		    strcpy(names[i], names[j]);
		    strcpy(names[j], temp);
		 }
}

}

}

// function to sort names in descending order

void sortDescending(char names[][50], int n) {
for (int i = 0; i < n - 1; i++){
    for (int j = i + 1; j < n; j++) {
	if (strcmp(names[i], names[j]) < 0 ) {
	   char temp[50];
	   strcpy(temp, names[i]);
	   strcpy(names[i], names[j]);
	   strcpy(names[j], temp);	
}
}
}
}
