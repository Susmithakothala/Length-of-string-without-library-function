# include < stdio .h >
main () {
char str [100];
int length , i ;
printf ("\ nEnter the String : ");
gets ( str );
length = 0;
for ( i =0; str [ i ] != ’\0 ’; i ++)
length ++;
printf ("\ nLength of the String is : %d", length );
}