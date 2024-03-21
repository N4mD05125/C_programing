#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main() {
    begin:
    char inputa[100], inputb[100], inputc[100];
    float ng1,ng2,a,b,c;
    printf("input phuong trinh bac 2 theo x(a*x*x+b*x+c=0):");
    scanf("%s%s%s", &inputa, &inputb, &inputc);
    char *pa,*pb,*pc;
    a = strtol(inputa,&pa,10);
    b = strtol(inputb,&pb,10);
    c = strtol(inputc,&pc,10);
    if (*pa!=NULL || *pb!=NULL || *pc!=NULL) {
        printf("invalid input, try again:\n");
        goto begin;
    }

    float denta = pow(b,2) - 4*a*c;
    if (a==0) {
    	if (b==0) {
    		printf("Phuong trinh khong ton tai");
		}
		else {
			ng1 = -c/b;
			printf("%.2f", ng1);
		}
	}
	else {
	    if (denta>0) {
	    	ng1 = (-b+pow(denta,0.5))/(2*a);
	    	ng2 = (-b-pow(denta,0.5))/(2*a);
	    	printf("%.2f %.2f", ng1,ng2);
		}
		else if (denta==0) {
			ng1 = (-b)/(2*a);
			printf("%.2f", ng1);
		}
		else {
			printf("Phuong trinh vo nghiem");
		}
	}
    return 0;
}

