#include <stdio.h>
int main(){
    int testnum1,testnum2;
    scanf("%d %d", &testnum1, &testnum2);
    int sum,sub,mult,mod;
    float div;
    sum = testnum1 + testnum2;
    sub = testnum1 - testnum2;
    mult = testnum1 * testnum2;
    div = testnum1 / (float)testnum2;
    mod = testnum1 % testnum2;
    printf("Addition : %d\n",sum);
    printf("Subtraction : %d\n",sub);
    printf("Multiplication : %d\n",mult);
    printf("Division : %0.3f\n",div);
    printf("Modulus : %d\n",mod);
	return 0;
}
