#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct user {
    char phone[50];
    char account[50];
    char password[50];
    float balance ;



};

int main(){
    struct user usr ;
    FILE *fp;
    char filename[50];
    int option;


    printf("\nWhat do you want to do ?");
    printf("\n\n1. Register an account ");
    printf("\n2. login to an account");

    printf("\n\nYour choice:\t");
    scanf("%d",&option);

    if(option == 1 ){
        system("cls");
        printf("Enter your account no: ");
        scanf("%s",usr.account);
        printf("\nEnter your phone number : ");
        scanf("%s",usr.phone);
        printf("\nEnter your new password : ");
        scanf("%s",usr.password);
        usr.balance = 0;
        strcpy(filename,usr.phone); // copy phone number to be the name of filename
        fp = fopen(strcat(filename,".dat"),"w"); // strcat connect two words between filename and .dat also w mean create/write file
        fwrite(&usr,sizeof(struct user),1,fp);// write data into a file
        8.33 minutes
    }

    return 0;
}
