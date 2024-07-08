/*
Naive Algorithm
This naive algorithm is straightforward and has a time complexity,
O(n), where 𝑛 is the length of the string. This is efficient for counting character occurrences in a string.

INPUT:
  ABHUJKBHNMJ
  BHU

OUTPUT:
  1
*/
CODE:

#include <stdio.h>
#include<string.h>
void fn(char *text, char* pattern){
    int j;
    int len=strlen(text);
    int len1=strlen(pattern);
    for(int i=0;i<=len-len1;i++){
        for( j=0;j<len1;j++){
            if(text[i+j]!=pattern[j])
            break;
        }
        if(j==len1){
            printf("%d",i);
        }
    }
}
int main() {
   char text[1001],pattern[1001];
   scanf("%s %s",text,pattern);
   fn(text,pattern);

    return 0;
}
