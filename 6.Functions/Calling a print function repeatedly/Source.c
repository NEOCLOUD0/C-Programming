
#include<stdio.h>
#include<stdlib.h>

void PrintGreatest(char* word) {
    printf("--The Greatest *");
    printf("%s", word);
    printf("* on Earth! --\n");
}

int main(void) {
   // Read from input: word = "Show"
   PrintGreatest("Show");

   // Read from input: word = "Song"
   PrintGreatest("Song");

}