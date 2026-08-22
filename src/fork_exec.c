#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h> 

int main()
{
    char command[100];
    

    printf("Enter a Linux command to execute (e.g., ls, pwd, date): ");
    scanf("%s", command);

    pid_t pid = fork();

    if (pid < 0) {
        printf("Fork failed!\n");
        return 1;
    } 
    else if (pid == 0) {
        
        printf("[Child] My PID is: %d\n", getpid());
        printf("[Child] Executing command: %s\n", command);
        
       
        execlp(command, command, NULL);
     
        printf("Command execution failed!\n");
        exit(1);
    } 
    else {
        printf("[Parent] My PID is: %d\n", getpid());
        printf("[Parent] Waiting for child process...\n");

        wait(NULL);
        
        printf("[Parent] Child finished execution. Exiting.\n");
    }
    
    return 0;
}
