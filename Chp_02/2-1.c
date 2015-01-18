#include <stdio.h>
#include <limits.h>

main(){

    printf("By means of printing the coresponding value of the standard head file.\n");

    printf("Singed char min = %d\n", SCHAR_MIN);
    printf("Singed char max = %d\n", SCHAR_MAX);
    printf("Singed short min = %d\n", SHRT_MIN);
    printf("Singed shrot max = %d\n", SHRT_MAX);
    printf("Singed int min = %d\n",INT_MIN);
    printf("Singed int max = %d\n",INT_MAX);
    printf("Singed long min = %d\n", LONG_MIN);
    printf("Singed long max = %d\n", LONG_MAX);
    printf("Unsigned char max = %d\n",UCHAR_MAX);
    printf("Unsigned short max = %d\n",USHRT_MAX);
    printf("Unsigned int max = %d\n",UINT_MAX);
    printf("Unsigned long max = %d\n", ULONG_MAX);

    printf("By means of calculating...\n");

    printf("Singed char min = %d\n",-(char)((unsigned char) ~0 >> 1));
    printf("Singed char max = %d\n",(char)((unsigned char) ~0 >> 1));
    printf("Signed short min = %d\n",-(short)((unsigned short) ~0 >> 1));
    printf("Singed short max = %d\n",(short)((unsigned short) ~0 >> 1));
    printf("Singed int min = %d\n",-(int)((unsigned int) ~0 >> 1));
    printf("Singed int max = %d\n",(int)((unsigned int) ~0 >> 1));
    printf("Singed long max = %d\n",(int)((unsigned long) ~0 >> 1));
    printf("Singed long max = %d\n",-(long)((unsigned long) ~0 >> 1));
    printf("Unsinged char max = %d\n",(char)((unsigned char) ~0 >> 1));
    printf("Unsinged short max = %d\n",(short)((unsigned short) ~0 >> 1));
    printf("Unsinged int max = %d\n",(int)((unsigned int) ~0 >> 1));
    printf("Unsinged long max = %d\n",(long)((unsigned long) ~0 >> 1));
}
