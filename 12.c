#include <stdio.h>
int main(){
    int n;
    scanf ("%d",&n);
    float a=(n/2);
    if(n%2!=0){
        a=(a+1)/n;
        printf("%.9f",a);
    }else{
        printf("%d",(n/2)/n);
    }
	return 0;
}
