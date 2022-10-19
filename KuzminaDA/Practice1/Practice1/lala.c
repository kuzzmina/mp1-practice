#include <stdio.h>
#include <math.h>
int main() {
float h, w, d, ddsp = 725, ddvp = 850, dw = 700,k, tdvp = 0.005, tdsp = 0.0015, tw = 0.01, V1, V2, V3, V4, V5, m;
printf("Enter h ( in meters):");
scanf_s("%f", &h);
printf("Enter w ( in meters):");
scanf_s("%f", &w);
printf("Enter d ( in meters):");
scanf_s("%f", &d);
if ((h < 1.8) || (h > 2.2)) {
	printf("1.8<h<2.2");
	return 1;
}
if ((w < 0.8) || (w > 1.2)) {
	printf("0.8<w<1.2");
	return 1;
}
if ((d < 0.5) || (d > 0.9)) {
	printf("0.5<d<0.9");
	return 1;
}
k = (int)(h / 0.4);
V1 = h * w * tdvp;
V2 = 2 * h * d * tdsp;
V3 = 2 * (w - 2 * tdsp) * d * tdsp;
V4 = 2 * w * h * tw;
V5 = k * (w - 2 * tdsp) * d * tdsp;
m = (V1 * ddvp) + ((V2 + V3 + V5) * ddsp) + (V4 * dw);
printf("%f", m);
return 0;
}
