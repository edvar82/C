#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char s[999], s2[999];
    float a=0, b=0;
    scanf("%s %s",s,s2);
    if(s[0]=='L' || s[0]=='l'){
        a+=8;
    }else if(s[0]=='E' || s[0]=='e'){
        a+=11;
    }
    if(s2[0]=='R' || s2[0]=='r'){
        b+=3;
    }else if(s2[0]=='S' || s2[0]=='s'){
        b+=2.5;
    }
    printf("%.2f",a+b);
	return 0;
}