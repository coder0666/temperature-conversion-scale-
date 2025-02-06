#include<stdio.h>
int main()
{
    float cs,cl,fr,kv;
    char scale;
    printf("enter the the temperature:\n");
    scanf("%f",&cs);
    printf("enter the temperature converter you want KELVIN for 'k' ,farenheit for 'F'and celsuis for 'C':\n");
    scanf(" %c",&scale);
    
    fr=(9*cs/5)+32;
    kv=cs+273.15;
    cl=(fr-32)*5/9;
    switch(scale){
        case'k':
        case'K':printf("the tempertaure is%f kelvin",kv);
        break;
        case'f':
        case'F':printf("the temperature is %f farenheit",fr);
        break;
        case'C':
        case'c':printf("the temperature is %f celsuis",cl);
        break;
        default:printf("enter the correct input");
    
   
}
return 0;
}   