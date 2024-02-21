//Akil Elias 20230972
//24/11/2023
//INFO 0102 S.MOHAMMED - Intro - Problem Solving & Programming
/*
In Khan’s College, the Administrative Assistance has decided to computerize the record keeping 
of grades at the end of each term for each class in the school. You are required to design, create 
and test a possible solution given the following:

1. Each class has a varying number of students.
2. For each class, you must store the following data for each student:
a. Class Code (A 5 digit number. This is the key field).
b. Student’s name (may be broken down into First Name and Last Name).
c. Age of the student.
d. Total Score in the student’s termly exam for this class.
3. Assume there are five (5) classes in the entire school.
4. Determine the maximum total scores obtained by each class and the name of the student 
who obtained that score. Output the results using appropriate labels.
5. Determine the average total score obtained by each class at the end of the term and the 
total number of students in that class. Output the average total score and the total number 
of students appropriately labelled for each class. 

Students would be required to: 
1. Design an algorithm that applies control structures, arrays and modules to solve the
programming problem. (LO7) 
2. Test and evaluate the design using a range of 5-10 students for each class. You must 
provide your own test data as required. The test data can be read from a file or entered 
via the keyboard. (LO8) 
3. Convert the algorithm (design) into a working C program. (LO9)
*/

#include <stdio.h>

int main(){
    int class_codes[10];
    char student_first_names[10][10];
    char student_last_names[10][10];
    int ages[10];
    int total_scores[10];
    int highest_score = total_scores[0];
    int number_of_students;
    int average_total_score;
    int cc_index;
    int fn_index;
    int ln_index;
    int ts_index;
    int ag_index;
    int i;
    int max;
    int gross_score;

    //Initial Processing module
    printf("Enter number of students: ");
    scanf("%d", &number_of_students);
    

    printf("%d \n", highest_score);

    //Input class codes
    for(cc_index = 0; cc_index < number_of_students; cc_index++){
        printf("Enter class codes: ");
        scanf("%d", &class_codes[cc_index]);  
    }

    //Input first names
    for(fn_index = 0; fn_index < number_of_students; fn_index++){
        printf("Enter first name of students in the same order as the class codes: ");
        scanf("%s", &student_first_names[fn_index]);  
    }
    
    //Input last names
    for(ln_index = 0; ln_index < number_of_students; ln_index++){
        printf("Enter last name of students in the same order as the class codes: ");
        scanf("%s", &student_last_names[ln_index]);  
    }
    
    //Input scores
    for(ts_index = 0; ts_index < number_of_students; ts_index++){
        printf("Enter total scores in the same order as the class codes: ");
        scanf("%d", &total_scores[ts_index]);  
    }

    //Input ages
    for(ag_index = 0; ag_index < number_of_students; ag_index++){
        printf("Enter ages of students in the same order as the class codes: ");
        scanf("%d", &ages[ag_index]);  
    }

    //Calculate highest score and scorer module
    for(i=0; i < number_of_students; i++){
        if(highest_score < total_scores[i]){
            highest_score = total_scores[i];
            max = i;
        }
    }
    
    //Print highest score and scorer module
    printf("Highest score is: %d \n", highest_score);
    printf("The highest scorer is: %s %s, class code %d, age %d \n", student_first_names[max], student_last_names[max], class_codes[max], ages[max]);


    
    //Calculate average score module
    //Determine gross score
    for(i=0; i < number_of_students; i++){
        gross_score = gross_score + total_scores[i];
    }
    //Determine average score
    average_total_score = gross_score / number_of_students;

    //Print average score module
    printf("Average total score: %d \n", average_total_score);
    printf("Total number of students: %d \n", number_of_students);

return 0;
}



