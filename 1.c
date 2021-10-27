//Kumbham Nuthan Manideep
//2012103

#include<stdio.h>

long long compute_hash(char *s) 
{
    const int p = 31;
    const int m = 1e9 + 9;
    long long hashvalue = 0;
    long long pow = 1;
    long long k=strlen(s);
    for (int i=0;i<k;i++) 
    {
        hashvalue = (hashvalue + (s[i] - 'A' + 1) * pow) % m;
        pow = (pow * p) % m;
    }
    return hashvalue;
}
int main()
{
    char s[1000];
    printf("Enter the String (upper case)\n");
    scanf("%[^\n]s",s);
    printf("Hash value: %ld",compute_hash(s));
}
