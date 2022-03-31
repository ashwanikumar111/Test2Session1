#include<stdio.h>
#include<string.h>

void input_string(char *a)
{
    printf("Enter a string: ");
    scanf("%s", a);
}

int str_reverse(char *word, char *subword){
    for(int i = 0; i < strlen(word); i++){
        for(int j = 0; j < strlen(subword); j++){
            if(word[i] == subword[j]){
                return i;
            }
        }
    }
}

void output(char *word, char *subword, int index){
    printf("The index of %s in %s is %d\n", subword, word, index);
}

int main(){
    char word[15], subword[15];
    int index;
    input_string(word);
    input_string(subword);
    index = str_reverse(word, subword);
    output(word, subword, index);
    return 0;
}
