#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isPalindrome (char str[201], int i, int j);

int main() {
 char str[201];
 while (scanf ("%s", str) == 1) {
 if (isPalindrome (str, 0, strlen(str) - 1)) {
 printf ("sim\n");
 }
 else {
 printf ("nao\n");
 }
 }
 return 0;
}

bool isPalindrome (char str[201], int i, int j){
 
 for(i<0;i<=j;i++){
   if (str[i]=='E'){
     if(str[i+1]=='O'){
       if(str[i+2]=='F') return 0;
     }
   }
 }

}
