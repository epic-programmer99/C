#include "utils.h"


// This is the main function
int main(int argc, char const *argv[])
{
	double sumvar = sum(55, 21);
	double multvar = mult(9,8);
	double subvar = sub(22.7, 10.3);
    double divvar = division(99, 900);

	printf("%f\n", sumvar);
    printf("%f\n", subvar );
	printf("%f\n", divvar );
	printf("%f\n", multvar );

	return 0;
}
