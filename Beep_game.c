// Online C compiler to run C program online
#include <stdio.h>
#include <windows.h>

int main() {
    int sound;
    
    printf("The purpose is to type the correct number to make a beep\n>>");
    scanf("%d", &sound);
    if(sound==2)
    {
        Beep(10000,2000);//frequency, duration
        printf("You got it right\n");
        
    }
    else if (sound==1)
    {
        printf("No loud beep\n");
    }
    else
    {
        printf("Try again\n");
    }

    return 0;
}
