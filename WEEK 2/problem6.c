#include <stdio.h>

int main(void){

int sisa_detik,jam,menit,detik;

//JAM MENIT WAKTU jam menit Z

scanf("%d %d %d", &jam, &menit, &detik);
scanf("%d", &sisa_detik);

//sisa detik
detik += sisa_detik;
//menit ke detik
menit += detik / 60;
detik = detik % 60;
//jam ke menit
jam += menit /60;
menit = menit % 60;
//%d %d %d

printf("%d %d %d\n", jam, menit, detik);


return 0;
}