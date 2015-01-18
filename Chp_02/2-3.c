#include <stdio.h>
int htoi(char s[]){
    // digit represents each digit of the hexdigit
    // n represents the final int value to return
    int digit, i, inhex, n;
    
    // deal with '0x' or '0X'
    i = 0;
    if(s[i] == '0'){
        i++;
        if(s[i] == 'x' || s[i] == 'X')
            i++;
    }

    // calculation
    n = 0;
    while(s[i] != '\0'){
        if(s[i] <= '9' && s[i] >= '0')
            digit = s[i] - '0';
        else if(s[i] <= 'f' && s[i] >= 'a')
            digit = s[i] - 'a' + 10;
        else if(s[i] <= 'F' && s[i] >= 'A')
            digit = s[i] - 'A' + 10;
        else 
            return -1;
        n = n + digit * 16;
    }

    // return the final int value
    return n;
}
