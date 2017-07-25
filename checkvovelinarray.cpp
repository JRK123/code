/*try examles string like aeiou, eiouaeio, arectiouae, aeiouaauieo : program gives you the possible number of vovel sequennce together */

#include <iostream>
#include <cstdio>
using namespace std;
int checksuccess(int *arr) {
    if (arr[0] && arr[1] && arr[2] && arr[3] && arr[4] )
        return 1;
    else 
        return 0;
}
void reset(int *arr) {
    for (int i = 0; i < 5; i++) {
        arr[i] = 0;
    }
}
int checkvovel(char *s)  {
    int arr[5] ;
    reset(arr);
    int count = 0;
    int i = 0;
    while(s[i] != '\0') {
        switch (s[i]) {
            case 'a':
                if (arr[0] == 1) {
                    reset(arr);
                    arr[0] = 1;
                    i++;
                    continue;
                }
                arr[0] = 1;
                if (checksuccess(arr) == 1 ) {
                    count++;
                    reset(arr);
                    i = i - 3;
                    continue;
                    
                }
                else {
                    i++;
                    continue;
                }
                break;
       
            case 'e':
                arr[1] = 1;
                if (checksuccess(arr) == 1 ) {
                    count++;
                    reset(arr);
                    i = i - 3;
                    continue;
                }
                else {
                    i++;
                    continue;
                }
                break;
            case 'i':
                arr[2] = 1;
                if (checksuccess(arr) == 1 ) {
                    count++;
                    reset(arr);
                    i = i - 3;
                    continue;
                }
                else {
                    i++;
                    continue;
                }
                break;
            case 'o':
                arr[3] = 1;
                if (checksuccess(arr) == 1 ) {
                    count++;
                    reset(arr);
                    i = i - 3;
                    continue;
                }
                else {
                    i++;
                    continue;
                }
                break;
            case 'u':
                arr[4] = 1;
                if (checksuccess(arr) == 1 ) {
                    count++;
                    reset(arr);
                    i = i - 3;
                    continue;
                }
                else {
                    i++;
                    continue;
                }
                break;
        
            default :
                i++;
                reset(arr);
                continue;
        }
    }
    return count;
}
int main() {
    char s[100];
    printf("enter a string \n");
    scanf ("%s", s);
    int count = checkvovel(s);
    printf("%d", count);
    return 0; 
}
