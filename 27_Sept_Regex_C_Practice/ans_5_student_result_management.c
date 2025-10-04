#include <stdio.h>
#include <string.h>

int main(){
    int s_total;
    printf("Enter the number of students: ");
    scanf("%d",&s_total);
    float topper = 0;
    char topper_name[100];
    for (int i=1; i<=s_total; i++){
        char name[100];
        printf("Enter the name of student: ");
        scanf("%s",&name);
        int total = 0;
        int Maths;
        int Phy;
        int Chem;
        int Eng;
        int PE;
        printf("Maths Marks: ");
        scanf("%d",&Maths);
        printf("Physics Marks: ");
        scanf("%d", &Phy);
        printf("Chemistry Marks: ");
        scanf("%d",&Chem);
        printf("English Marks: ");
        scanf("%d",&Eng);
        printf("PE Marks: ");
        scanf("%d",&PE);
        total = Maths + Phy + Chem + Eng + PE;
        float percent;
        //percent = total/500*100; 
        //total is an int, so integer division happens first. For example, 480/500 becomes 0.//
        percent = (total*100)/500;
        printf("Percentage of student is %f\n",percent);
        if (percent>=90){
            printf("Grade A\n");
        }
        else if (percent>=70 && percent<90){
            printf("Grade B\n");
        }
        else if (percent>=50 && percent<70){
            printf("Grade C\n");
        }
        else {
            printf("Grade F\n");
            printf("Better Luck Next Time\n");
        }
        if (total > topper){
            topper = total;
            strcpy(topper_name, name);
        }
    }
    printf("Topper of class is %s\n",topper_name);
    printf("Topper's marks are %f",topper);
}