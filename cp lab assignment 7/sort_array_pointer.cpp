#include <stdio.h>
void sort(int , int * );
int main()
{
    int n;
    int i;
    int a[5];
    printf("enter size of array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    	printf("a[%d]: ",i);
    	scanf("%d",&a[i]);
	}
    sort(n, a); 
    return 0;
}
void sort(int n, int *p)
{
    int i, j, t;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) { 
            if (*(p + j) < *(p + i)) {
                t = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = t;
            }   }}    
    for (i = 0; i < n; i++)
        printf("%d ", *(p + i));
}
  

