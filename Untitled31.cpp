#include<stdio.h>
#include<math.h>

int main() {
    float a,b,c,d;
    printf("input diem so:");
    scanf("%f%f%f%f",&a,&b,&c,&d);
    while (a<0 || b<0 || c<0 || d<0) {
    	printf("Invalid");
	}
    float diemtong = (a+b+c*2+d*3)/7;
    if (diemtong >= 8) {
    	printf("GIOI");
	}
	else if (diemtong >= 6.5 && diemtong < 8) {
		printf("KHA");
	}
	else if (diemtong < 6.5 && diemtong >= 5) {
		printf("TRUNG BINH");
	}
	else {
		printf("YEU");
	}
    return 0;
}

