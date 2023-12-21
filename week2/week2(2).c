#include <stdio.h>
#include <stdlib.h>

int main()
{
  /*Write a login program in C that ask the user to enter his ID and his password,
  if the ID is correct the system will ask the user to enter his password up to 3 times if he enters the password
    right the systems welcomes him, if the three times are incorrect, the system print No more tries.
    If the user ID is incorrect the system print You are not registered*/

    int user=1,user1;
    int pass=2,pass1;

    printf("please enter a username:");
    scanf("%d",&user1);
    if(user1==user){

        for(int i= 0;i<=3;i++){
            if(i==3){
                printf("no more tries");
                break;
            }

            printf("please enter your password:");
            scanf("%d",&pass1);

            if(pass1==pass){
                printf("loged in");
                break;
            }
        }

    }
    else{
        printf("You are not registered");
    }



    return 0;
}
