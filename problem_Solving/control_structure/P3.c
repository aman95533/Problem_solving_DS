#include<stdio.h>
int main() {
    char ch;
    printf("\nEnter character: ");
    scanf("%c",&ch);

    if (ch=='a' || ch=='e'|| ch=='i'||ch=='o' || ch=='u'|| ch=='A' || ch=='E'|| ch=='I'||ch=='O' || ch=='U' ) {
        printf("\nVowel");

    }
    else {
        printf("\nConsonant");

    }

    return 0;
}