#include <stdio.h>
int QuickSort ( int A[], int from, int to, int *a, int *b )
{
 int x, i, j, temp;
 if ( from >= to ) return;
 i = from;
 j = to;
 x = A[(from+to)/2];
 while ( i < j ) {
 while ( A[i] < x ) {i ++;(* a)++;}
 while ( A[j] > x ) {j --;(*a)++;}
 if ( i <= j ) {
if (i!=j)(*b)++;
 temp = A[i]; A[i] = A[j]; A[j] = temp;
 i ++;
 j --;


 }
 }
 QuickSort ( A, from, j, &(*a),&(*b));
 QuickSort ( A, i, to,&(*a),&(*b) );
}
const int N = 5;
main()
{
int i, j, A[N], c;
int srav,perest;
srav=0;
perest=0;
    for ( i = 0; i < N; i ++ )
    {
        printf("A[%d]> ", i );
        scanf ("%d", &A[i]);
    }
    QuickSort ( A, 0, N-1, &srav, &perest );
for ( i = 0; i < N; i ++ )
 printf("%d ", A[i]);
  printf("srav-%d perest-%d ", srav, perest );
}
