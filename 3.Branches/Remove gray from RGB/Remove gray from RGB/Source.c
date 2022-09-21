#include<stdio.h>
#include<stdlib.h>

int main() {
	int red;
	int green;
	int blue;

	scanf_s("%d %d %d", &red, &green, &blue);

	if (red < green && red < blue) {
		green = green - red;
		blue = blue - red;
		red = red - red;
		
	}
	else if (green < red && green < blue) {
		red = red - green;
		blue = blue - green;
		green = green - green;
		
	}
	else if (blue < red && blue < green) {
		red = red - blue;
		green = green - blue;
		blue = blue - blue;
		
	}
	else if (blue == green && blue == red) {
		red = red - blue;
		green = green - blue;
		blue = blue - blue;
	}
	printf("%d %d %d\n", red, green, blue);
}