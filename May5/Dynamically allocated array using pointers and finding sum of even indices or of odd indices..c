#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) {
  //Write your code here.
  int sum=0;
  if(gender=='g'){
    for(int i=0;i<=((number_of_students)/2);i++)
    {
        sum=sum+marks[(2*i)+1];
    }
  }
  else if(gender=='b'){
    for(int i=0;i<=((number_of_students)/2);i++)
    {
        sum=sum+marks[(2*i)];
    }
  }
  return sum;
}

int main() {
    int number_of_students;
    char gender;
    int sum;

    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));

    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }

    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);

    return 0;
}
