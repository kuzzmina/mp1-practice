#include <stdio.h>
#include <math.h>
int main() {
	float x1, x2, y1, y2, r1, r2, d;
	printf("enter x1 : ");
	scanf("%f", &x1);
	printf("enter x2 : ");
	scanf("%f", &x2);
	printf("enter y1 : ");
	scanf("%f", &y1);
	printf("enter y2 : ");
	scanf("%f", &y2);
	printf("enter r1 : ");
	scanf("%f", &r1);
	printf("enter r2 : ");
	scanf("%f", &r2);
	d = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	if (d = r1 + r2) {
		printf("Okryznocti kasautsa dryg dryga");
		return 0;
	}
	if (d > r1 + r2); {
		printf("okryznosti ne peresekautsa");
		return 0;
	}
	if ((x1 == x2) && (y1 == y2) && (r1 == r2)); {
		printf("okryznosti sovpadaut");
		return 0;
	}
	if (abs(x1 - x2) < r1 || abs(x1 - x2) < r2); {
		printf("Odna okryznost vnutri drugoy")
			return 0;
	}
	if ((d + r1 == r2) || (d + r2 == r1)); {
		printf("odna okruznost kasaetsa drugoq vnutri")
			return 0;
	}
	printf("imeut dve obshie tochki");
	return 0;
}
