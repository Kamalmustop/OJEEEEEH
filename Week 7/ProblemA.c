#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
int main(){
int n;
	scanf("%d", &n); getchar();
char kata[1000];
	for(int i = 1; i <= n;i++){
	scanf("%[^\n]", kata); getchar();
	int panjang = strlen(kata);
	printf("Case #%d : ", i);
	
	for(int j = panjang - 1;j >= 0;j--){
	if (isalpha(kata[j]) || isspace(kata[j])) {
                
                printf("%c", tolower(kata[j]));
	}}
printf("\n");
	
	
	


}
return 0;
}
