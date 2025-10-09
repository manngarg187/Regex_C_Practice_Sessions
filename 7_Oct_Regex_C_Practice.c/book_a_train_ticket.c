
// Make a system where user can book a train ticket

/*
1. Ask the user:
Do you want to book your train ticket? (yes/no)

2. If the user types "no", print:
Thanks for coming!

3. If the user types "yes", then:
- Ask for user's name.
  → If the name contains any numbers (0–9), print:
    Wrong input! Please enter a valid name.
    and ask again until the name is valid.

- Ask for phone number and Aadhaar number.
  → Check that phone number has exactly 10 digits.
  → Check that Aadhaar number has exactly 12 digits.
    (Assume user only enters numbers for these.)

4. Once all details are entered correctly, display:
These are your details:
Name: <user_name>
Phone: <phone>
Aadhaar: <aadhaar>

Your train ticket is booked successfully!
*/


#include <stdio.h>
#include <string.h>
int main(){

    char a[100];
    printf("Do you want to book your train ticket? (yes/no)");
    scanf("%s",a);
    char name[100];
    char phone[11];
    char adhar[13];
    int flag;
   // if (a == 'no'){      Mistake: only single character is allowed in single quotes ' ', string must be written in double quotes " "
    //if (a == "no"){       -- wrong method to compare strings
    if (strcmp(a,"no")==0){
        printf("Thanks for coming!");
    }
    else{
        while(1){
            flag = 0;
            printf("User's name: ");
            scanf("%s",name);
            for ( int i=0 ; name[i] != '\0' ; i++ ){
                // if (name[i] >= 0 && name[i] <= 9){    Mistake: This checks if the ASCII value is between 0 and 9, which are non-printable control characters, not digits. To check for digits, use '0' and '9' (ASCII 48 to 57).
                if (name[i] >= '0' && name[i] <= '9'){
                    flag = 1;
                    break;
                }
            }
            if (flag == 1){
                printf("Wrong input! Please enter a valid name.\n");
            }
            else{
                break;
            }
        }
        printf("%s\n",name);

        while (1){
            printf("Phone Number: ");
            //scanf("%s",&phone);
            scanf("%10s", phone); // Only reads up to 10 characters, leaving space for '\0'
            flag = 0;
            int count = 0;
            for (int i=0; phone[i] != '\0'; i++){
                if (phone[i] >= '0' && phone[i]<='9'){
                    count++;
                }
            }
            if (count == 10){
                break;
            }
            else {
                printf("Wrong input! Please enter a valid Phone Number.\n");
            }
        }
        printf("%s\n",phone);

        while (1){
            printf("Adhar Number: ");
            //scanf("%s",&phone);
            scanf("%12s", adhar); // Only reads up to 12 characters, leaving space for '\0'
            flag = 0;
            int count = 0;
            for (int i=0; adhar[i] != '\0'; i++){
                if (adhar[i] >= '0' && adhar[i]<='9'){
                    count++;
                }
            }
            if (count == 12){
                break;
            }
            else {
                printf("Wrong input! Please enter a valid Adhar number.\n");
            }
        }
        printf("%s\n",adhar);
    }
    printf("Congratulations! Ticket Confirmed!\n");
    printf("Name: %s\n",name);
    printf("Phone: %s\n",phone);
    printf("Adhar: %s",adhar);
}




