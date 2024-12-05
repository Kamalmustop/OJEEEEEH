#include <stdio.h>
#include <string.h>

int main(void){

    char pass[101] = "";
    scanf("%[^\n]", pass);
    pass[100] = '\0';

    int valid = 1;
    int empty = 0;
    int i = 0;
    int len = strlen(pass);
    if (len < 1) empty = 1;
    if (!empty){
        for (i = 0; i < len; i++){
            char c = pass[i];

            if (!(islower(c) || isdigit(c) || c == '.' || c == '_')){
                valid = 0;
                break;
            }

            if (c == ' '){
                valid = 0;
                break;
            }
        }
    }

    if (empty){
        printf("Username must not be empty\n");
    } else if (valid){
        printf("Username @%s is valid\n", pass);
    } else {
        printf("Username @%s is not valid\n", pass);
    }
    
        

    
    return 0;
}