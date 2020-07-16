#include <stdio.h>

double sum(double a, double b){
	return a + b;
}

double sub(double a, double b){
    return a - b; 
}

double division(double a, double b){
	return a / b;
}

double mult(double a, double b){
	return a * b;
}

void testMathOperations(){
	double sumvar = sum(55, 21);
	double multvar = mult(9,8);
	double subvar = sub(22.7, 10.3);
    double divvar = division(99, 900);

	printf("%f\n", sumvar);
    printf("%f\n", subvar );
	printf("%f\n", divvar );
	printf("%f\n", multvar );
}
