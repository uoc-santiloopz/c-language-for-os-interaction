#include <stdio.h>
#include <unistd.h>
#include <string.h>



int main() {
	// number to print
	int n = 198;
	int temp_n = n;
	int i = 0;

	while (temp_n > 0) {
		i++;
		temp_n /= 10;
	}

	char s[i];

	s[i + 1] = '\n';

	while (n > 0) {
		i--;
		s[i] = '0' + (n % 10);
		n = n / 10;
	}
	write(1, &s[i], strlen(s) + 2);
}