#include <stdio.h>
#include <math.h>
int k;
int inv(int n)
{
    int s=0;
    
    k=0;
    
    do
    {
        s*=10;
        k++;
        s += n%10;
        n/=10;
    } while (n);
    
    return s;
}
int nar(int n)
{
    int m = 0;
    
    do
    {
        m += pow(n%10, k);
        n/=10;
    } while (n);
    
    return m;
}
int main()
{
    int n1, n2, n3, g, l;
    
    printf("enter an integer: ");
    scanf("%d", &n1);
    
    g = n1-5;
    l = n1*10;
    
    do
    {
        printf("enter another integer between %d and %d: ", g, l);
        scanf("%d", &n2);
    } while (n2>l || n2<g);
    
    do
    {
        printf("enter a therd one between %d and %d: ", n1, n2);
        scanf("%d", &n3);
    }while ((n3<n1 && n3<n2) || (n3>n1 && n3>n2));
    
    printf("%d is %d's inverse\n", inv(n3), n3);
    
    if (n3==inv(n3))
        printf("%d is equal to its reverse\n", n3);
    else
        printf("%d isn't equal to its reverse\n", n3);
    
    if(n3 == nar(n3))
        printf("%d is a narcissistic number\n", n3);
    else
        printf("%d isn't a narcissistic number\n", n3);
    
    return 0;
}
