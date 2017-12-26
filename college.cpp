#include<conio.h>
#include<stdio.h>
#include<iostream>
using namespace std;
void swap(char *p, char *q)
{
    char c;
    c = *p;
    *p = *q;
    *q = c;
}
void permutaions(char *s, int i, int n)
{
    if(i == n)
        printf("%s\n",s);
    else{
        for(int j = i;j<=n;j++){
            swap(s+i,s+j);
            permutaions(s,i+1,n);
            swap(s+j,s+i);
        }
    }
}
main()
{
    char a[] = {"AACD"};
    permutaions(a,0,3);
}
