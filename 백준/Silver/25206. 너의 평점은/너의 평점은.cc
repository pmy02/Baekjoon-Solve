#include <bits/stdc++.h>
using namespace std;

double sum,credit,sum_credit;
char subject[52],score[4];

int main()
{
    while(scanf("%s %lf %s",subject,&credit,score)!=EOF){
        if(!strcmp(score,"A+")) sum+=credit*4.5;
        else if(!strcmp(score,"A0")) sum+=credit*4.0;
        else if(!strcmp(score,"B+")) sum+=credit*3.5;
        else if(!strcmp(score,"B0")) sum+=credit*3.0;
        else if(!strcmp(score,"C+")) sum+=credit*2.5;
        else if(!strcmp(score,"C0")) sum+=credit*2.0;
        else if(!strcmp(score,"D+")) sum+=credit*1.5;
        else if(!strcmp(score,"D0")) sum+=credit*1.0;

        if(strcmp(score,"P")) sum_credit+=credit;
    }

    printf("%lf",sum/sum_credit);
    return 0;
}
