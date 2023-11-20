#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//QUESTION 1
int main() {
   int n;
   printf("enter any num:");
   scanf("%d",&n);
   //with for loop
   int count=0;
   int sum=0;
   for (int i=0;i<50;i++) {
           if (count!=n) {
                   if (i%2!=0) {
                       printf("%d\n",i);
                       count++;
                       sum+=i;
                   }
           }else if(count==n) {
               printf("sum of the first %d odd numbers is: %d\n",n,sum);
               break;
           }
   }
   //with while loop
   int i=1;
   sum=0;
   count=0;
   while (count<n) {
           if(i%2!=0) {
               printf("%d\n",i);

               sum+=i;
               i++;
               count++;

           }else {
               i++;
           }
   }
   printf("sum of first %d odd number is %d\n",n,sum);

   //with do-while
   i=1;
   sum=0;
   count=0;
   do {
       if (i%2!=0) {
           printf("%d\n",i);
           sum+=i;
           i++;
           count++;
       }else {
           i++;
       }

   } while(count<n);
   printf("sum of first %d odd numbers is %d\n",n,sum);
   return 0;
}




//QUSTION 2
 int row;
   printf("Enter rows:");
   scanf("%d",&row);
   for(int i=0; i <=row; i++){
    for (int j=0; j<=row-i-1;j++){
        printf(" ");

    }for (int k=0;k<i;k++){
    printf("* ");
    }printf("\n");
   }


//QUESTION 3

void cmpstr(const char *s1,const char *s2) {
   int len1=strlen(s1);
   int len2=strlen(s2);
   if (len1!=len2) {
           printf("the two strings are of different lenghts");
           return;
   }
   for (int i=0;i<len1;i++) {
           if (s1[i]==s2[i]) {
               printf("%c==%c\n",s1[i],s2[i]);
           }else {
               printf("%c!=%c\n",s1[i],s2[i]);

           }
   }
}
int main() {
   char str1[100];
   printf("enter any string:");
   scanf("%s",&str1);
   char str2[100];
   printf("enter any string:");
   scanf("%s",&str2);
   cmpstr(str1,str2);
   return 0;
}


//QUESTION 4
#include <ctype.h>

void func(const char *str) {
   int len=strlen(str);
   for (int i=0;i<len;i++) {
           if (str[i]!=' ') {

               if (isupper(str[i])) {
                       printf("%c",tolower(str[i]));
               }else if (islower(str[i])) {
                       printf("%c",toupper(str[i]));
               }
           }else if(str[i]==' ') {
               printf(" ");
           }
   }
}
int main() {
   char str[100];
   printf("enter any sentence:");
   scanf("%[^\n]",&str);
   func(str);
   return 0;
}



//QUESTION 5
#include <stdio.h>
#include <string.h>

void array1(const char* string, char a[]) {
    int len1 = strlen(string);
    int count = 0;
    int isDuplicate; // A flag to check for duplicates

    for (int i = 0; i < len1; i++) {
        isDuplicate = 0; // Initialize the flag for each character
        for (int j = 0; j < count; j++) {
            if (string[i] == a[j]) {
                isDuplicate = 1;
                break; // Exit the inner loop if a duplicate is found
            }
        }

        if (!isDuplicate) {
            a[count] = string[i];
            count++;
        }
    }

    a[count] = '\0'; // Null-terminate the result string
    printf("%s\n", a);
}

int main() {
    char b[100];
    printf("Enter your elements: ");
    scanf("%s", b);
    char a[100];
    array1(b, a);
    return 0;
}



//QUESTION 6
#include <stdio.h>
#include <string.h>

  // Get the first distance from the user
    printf("Enter first distance:\n");
    printf("Feet: ");
    scanf("%d", &distance1.feet);
    printf("Inches: ");
    scanf("%d", &distance1.inch);

    // Get the second distance from the user
    printf("\nEnter second distance:\n");
    printf("Feet: ");
    scanf("%d", &distance2.feet);
    printf("Inches: ");
    scanf("%d", &distance2.inch);
    int result=distance1.feet+distance2.feet;
    int result2=distance1.inch+distance2.inch;
    printf("%d\n",result);
    printf("%d",result2);

    return 0;
}
