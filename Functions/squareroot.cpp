#include <stdio.h>

float cal_sqrt(int num) {
    float temp = 0;
    float res = num / 2.0;
    float tol=0.00001;
    if(num<0)
    {
    	printf(" Warning : Undefined solution ");
    
	}
		
    while (temp - res>tol || res-temp>tol) {
    	temp=res;
        res = (num / res + res) / 2.0;
    }
    return res;
}

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    float s = cal_sqrt(n);
    printf("Square root of the number is %.2f\n", s);

    return 0;
}

