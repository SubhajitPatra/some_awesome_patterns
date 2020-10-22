#include <stdio.h>
#include <stdlib.h>


void print_menu()
{
    printf("\n Select the type of patterns you want to see. Enter any other key to exit.\n");
    printf("1. triangular pattern\n");
    printf("2.  inverse triangular pattern\n");
    printf("3. pattern of numbers\n");
    printf("4. inverse pattern of numbers correct version\n");
    printf("5. number pattern 1\n");
    printf("6. inverse number pattern 1 12 123\n");
}
int take_input()
{
    int input;
    printf("\n Enter your input: ");
    scanf("%d",&input);
    return input;
}
void print_triangular_pattern()
{
    int p;
    p=1;
    while(p<=7){
        int q=1;
        while(q<p){
            printf("*");
            q++;
        }
        printf("*\n");
        p++;
    }

}
void print_inverse_triangular_pattern()
{
        int a;
   a=7;
   while(a>0){
     int b=1;
    while(b<a){
        printf("*");
        b=b+1;
    }
    printf("*\n");
    a=a-1;
   }
}
void print_pattern_of_numbers()
{
    int a;
    a=1;
    while(a<=7){
        int b=1;
        while(b<a){
            printf("%d",a);
            b++;
        }
        printf("%d\n",a);
        a++;
    }


}
void print_inverse_pattern_of_numbers_correct_version()
{

    int a;
    a=7;
    while(a>0){
        int b;
        b=1;
        while(b<a){
            printf("%d",a);
            b++;
        }
       printf("%d\n",a);
       a=a-1;
    }

}
void print_number_pattern_1()
{

    int a;
    a=1;
    while(a<8){
        int b=1;
        while(b<a){
            printf("%d",b);
            b=b+1;
        }
        printf("%d\n",a);
        a=a+1;
    }
}
void print_inverse_number_pattern_1_12_123()
{

        int a;
    a=7;
    while(a>0){
        int b;
        b=1;
        while(b<a){
            printf("%d",b);
            b++;
        }
        printf("%d\n",a);
        a=a-1;
    }

}
int main()
{
    int user_input;
    while(1)
    {
        print_menu();
        user_input=take_input();
        switch(user_input)
        {
        case 1:
            print_triangular_pattern();
            break;
        case 2:
            print_inverse_triangular_pattern();
            break;
        case 3:
            print_pattern_of_numbers();
            break;
        case 4:
            print_inverse_pattern_of_numbers_correct_version();
            break;
        case 5:
            print_number_pattern_1();
            break;
        case 6:
            print_inverse_number_pattern_1_12_123();
            break;
        default:
            printf("\n exiting.....");
            return 0;
        }

    }
    return 1;
}




