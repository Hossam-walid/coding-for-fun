#include <stdio.h>
#include <time.h>
#include <unistd.h> //for sleep func.
void printclock(){
    time_t currentTime;
    struct tm*localTime;
    while(1){
        //Get current time
        currentTime = time(NULL);
        localTime = localtime(&currentTime);
        //print the time in H:M:S format
        printf("%02d:%02d:%02d\r",localTime->tm_hour,localTime->tm_min,localTime->tm_sec);
        fflush(stdout);

        sleep(1);   //wait for one second before updating the display
    }

}
int main(){
    printclock();
    return 0;
}
