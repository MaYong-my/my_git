#include <stdio.h>
void game() {
	int i,j;
	char c[15][15];
	for (i = 0;i < 15; i++) {
		for (j = 0; j <15;j++) {
			c[i][j] = '+';
			printf ("%c ",c[i][j]);
		}
		printf("\n");
	}
}
int main() {
	game();
	return 0;
}
