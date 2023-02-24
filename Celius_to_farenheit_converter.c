#include<stdio.h>

int main(){
float temp;
printf("hello!Welcome to celcius to farenheit converter\n");
printf("'Enter the temparature value (in celcius):\n");
scanf("%f",& temp);
float ctemp=(1.8 * temp +32);
printf("the temperature in farenheit is %f\n",ctemp);






return 0;
}
