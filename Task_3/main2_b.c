#include <stdio.h>

#define MODE 7
#define IOS

int main() {
    /*Control flow statements */
    int x =5;
    if(x == 0)
    { printf("X is zero");}
    else if(x>0)
    { printf("X is positive\n");}
    else
    { printf("X is negative");}
    // here it is excuted in the runtime , where each specified condition
    //excutes a block of statements if verified

    /*PreProcessor Directives*/
    #if MODE == 5
        printf("mode 5\n");
        /*.......*/
    #elif MODE == 7
        printf("mode 7\n");
        /*.......*/
    #else
       /*........*/
    #endif
    // affect the compilation process
    // by controlling which parts of the code are included or excluded from the final excution
    //based on the specified value of macro

    //**Another way**//
    #ifdef IOS
    printf("excute IOS Code\n");
    /*........*/
    #else
    printf("excute Android Code");
    /*........*/
    #endif
    //here it excute wither of the two given blocks of statements based on
    //wether the macro "IOS" is defined or not
    
    return 0;
}
