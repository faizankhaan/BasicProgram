#include<iostream.h>
#include<conio.h>

void __buildsmPacket (unsigned char *);
unsigned char smPacket3[125];
     
int main()
{
    unsigned char a[] = "*SM03,3,837,52.45,0.9,42898,837,52.45,0.9,42898,837,52.45,0.9,42898,60.523,52.45,12:00,01/01/2013#";
    cout << a << endl;
    
    __buildsmPacket(a);
    cout << smPacket3;

    getch();
    return 0;
}

void __buildsmPacket (unsigned char *input)
{
    unsigned char *ptr = smPacket3;

    *ptr     = '*';
    *(++ptr) = 'A';
    *(++ptr) = 'M';
    *(++ptr) = '0';
    *(++ptr) = '1';
    *(++ptr) = ',';

    while( *input != '#' )
        *++ptr = *++input;

    *++ptr = '#';
    *++ptr = '\0';
}


