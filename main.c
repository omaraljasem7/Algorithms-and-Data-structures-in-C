// 1
#include <stdio.h>
#include <string.h>
void printArr(int A [], int size) {
    for (int i=0 ; i< size;i++) {
        printf("%d \t",A[i]);
    }
    printf("\n");
}
void calc (int a ) {
    a = 100;
}
void calc_Address(int * a) {
    *a = 100;
}

void minMax(int *arr , int n , int *min , int *max) {
    *min = arr[0];
    *max = arr[0];
    for (int i =1; i< n ; i++) {
        if ( arr[i]  < *min )
            *min= arr[i];
        if (arr[i] > *max)
            *max=arr[i];
    }

}

void create(int **pp) {
    int x = 1000;
    *pp=&x;
}

int main(void) {
    printf("Hello, World!\n");
    int numbers [5] = {10,20,30,40,50};
    int size=sizeof(numbers)/sizeof(int);
    printArr(numbers,size);
    // int takes 4 Bytes in C
    // Multiple ways for Declaration and Initialization

    int a [5] = {10,20,30,40,50}; // array of size 5 , elements are 10,20,30,40,50
    int b [5] = {10,20};  // array of size of 5 elements 10,20, 0,0,0
    int c [5]={0}; // all elements =0
    int d [] = {1,2,3}; // no size , but size equal to the number of elements in the Array
    // Decl and then Init
    int e [3] ;
    e [0]=1;
    e[1]=2;
    e[2]=3;

    printArr(a,5);
    printArr(b,5);
    printArr(c,5);
    printArr(d,3);
    printf("size of d =%lu\n",sizeof(d)); // 3*4 = 12 bytes

    // Matrix is a 2D array
    int matrix [2][3]= {
        {1,2,3},
        {4,5,6}
    };
    for (int i =0 ; i < 2 ;i++) {
        for (int j=0; j< 3 ; j++) {
            printf("%d \t", matrix[i][j]);
        }
        printf("\n");
    }

    // Pointers
    int x = 42 ;
    int *p = &x;

    printf("Value of x =%d and value of x with p =%d \n", x, *p);
    printf("Address of x = %p and the address stored in p =%p \n",&x , p);
    // & is the Address operator and * for Dereferencing

    *p = 100 ; // change the value of the variable x with the pointer p
    printf("Value of x =%d and value of x with p =%d \n", x, *p);

    // pointer of different data types

    char ch= 'c';
    float pi = 3.14f ;

    char * p_char = &ch;
    float * p_float = &pi;

    printf("value of ch =%c and value of ch with pointer = %c \n",ch,*p_char);
    printf("value of pi =%.2f and value of pi with pointer = %.2f \n",pi,*p_float);


    // Arrays with pointers

    int nums [5] = {-1,-7,3,5,0};
    int *p_nums = nums;
    /*
     * Both statements are equivalent
     * int *p_nums = nums;
     * int* p_nums = & nums [0]
     */
    // print the elements of the Array nums with the help of the pointer p_nums
    // p_nums + 0 , p_nums + 1 , p_nums+2 etc. this is pointer arithmetic  , this will add in case of in , 4 byts, such that the pointer will point on the next element in the Array
    int i = 0 ;
    while (i < 5) {
        printf("%d\t",*(p_nums+i));
        i++;
    }
    printf("\n");
    /*
     * nums [2] = * (p_nums + 2)
     */

    // Functions

    int var = 5;

    calc(var);
    printf("var = %d\n",var); // value of var has not changed , because we've passed by value and not by address

    // to change the value of , we should pass by address

    calc_Address(&var);
    printf("var = %d\n",var);


    // find min and max

    int testArray[] = { 3,1,7,2,9};
    int min , max ;
    minMax(testArray,5,&min,&max);
    printf("Min = %d and Max = %d \n", min, max);

    // strings and user Input

    char name []= "omar";
    printf("name = %s\n",name);
    printf("size of name =%d\n",sizeof(name));

    char otherName [6]={'o','m','a','r','\0'};
    printf("otherName = %s\n",otherName);

    printf("size of otherName =%d\n",sizeof(otherName));
    // strig functions in the string.h

    char s1 [] = "Hallo";
    char s2 [20] ;

    // length of a string
    printf("length of s1 = %lu \n",strlen(s1));
    // copy to target from the source , strcpy ( target, source)
    strcpy(s2,s1);
    printf("s1 =%s and s2 =%s\n",s1,s2);
    // concatenation

    strcat(s2," World");
    printf("s2 =%s\n",s2);

    // comparison  of 2 strings
    int compare =strcmp(s1,s2);
    printf("compare  = %d\n",compare);
     compare = strcmp("Hallo","Hallo");
    printf("compare  = %d\n",compare); // if equal  ->  0 , if s1 > s2  -> + value otherwise - value
    compare=strcmp ("b","a"); // b > a by 1  -> +1
    printf("compare  = %d\n",compare);
    compare=strcmp ("a","b"); // a < b by 1 -> - 1
    printf("compare  = %d\n",compare);

    // userInput to take values from user and store them in the variable

    // int input;
    //
    // printf("please give a value for input: ");
    // scanf("%d",&input);
    // printf("input = %d\n",input);
    //
    // char myName [50];
    // printf("please enter a value of myName: ");
    // scanf("%s",&myName);


    // Memory Addresses

    int arr[3] ={1,2,3};
    printf("Memory address of arr[0] = %d\n",&arr[0]);
    printf("Memory address of arr[1] = %d\n",&arr[1]);
    printf("Memory address of arr[2] = %d\n",&arr[2]);
    // between the array elements there is 4 Bytes

    // Double pointer
    int y = 42 ;
    int *pointer = &y;
    int **pp = &pointer ;

    printf("Value of y = %d\n",y);
    printf("Value of y = %d\n",*pointer);
    printf("Value of y = %d\n",**pp);


    // Double pointer
    // 1st case
    p = NULL;
    printf("%p \n",p);
    create(&p);
    printf("%d \n",*p);

    /*
     * p = NULL
     * add of p = 200 , is pointing on NULL
     * create(&p) ,  pp is for example in the address 300 will get the address 200
     * pp address 300 will get the address 200, so will point on pointer p
     * x =1000 in the Address 400
     * *pp=&x; go the the address of p and put the address of x inside , now p will point on x
     *  (300) pp ->   200(p)  -> NULL
     *  300 pp  -> 200 (p) -> x with address (400 ) with the value 100
     */

    // array of strings

    char *names [] = {"Anna","Bob","Clara"};
    char ** pointerNames =names;

    for (int i = 0 ; i < 3; i++) {
        printf("%s\n",*(names+i));
    }
    printf(".........\n");
    for (int i = 0 ; i < 3; i++) {
        printf("%s\n",pointerNames[i]);
        //printf("%s\n",*pointerNames(i+1);

    }










    return 0;
}
