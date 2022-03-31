#include <stdio.h>

//pontos = pontos >> sg
//pontos = pontos && sg = sg >> empate

int main()
{
    int cv, ce, cs, fv, fe,fs, totalc=0, totalf=0;
    scanf("%d %d %d %d %d %d",&cv,&ce,&cs,&fv,&fe,&fs);

    totalc+=(cv*3)+ce; 
    totalf=(fv*3)+fe;

    if(totalc>totalf){
        printf("C");
    }
    else if(totalf>totalc){
        printf("F");
    }
    if(totalc==totalf){
        if(cs>fs){
            printf("C");
        }
        if(fs>cs){
            printf("F");
        }
        if(cs==fs){
            printf("=");
        }
    }
    return 0;
}
