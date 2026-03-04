#include <stdio.h>
#include <string.h>

typedef struct {
    char loginname[64];
    char password[64];
} account;

typedef struct {
    char stdID[16];
    char nameSurname[25];
    account stdACC;
} hoststd;

int main() {

    hoststd cs[5] = {
        {"66-040626-2686-9","MR.A",{"user1","passwd1"}},
        {"66-040626-2686-8","MR.B",{"user2","passwd2"}},
        {"66-040626-2686-7","MR.C",{"user3","passwd3"}},
        {"66-040626-2686-6","MR.D",{"user4","passwd4"}},
        {"66-040626-2686-5","MR.E",{"user5","passwd5"}}
    };

    char username[64], password[64];
    int i, found = 0;

    printf("Enter username: ");
    scanf("%s", username);

    printf("Enter password: ");
    scanf("%s", password);

    for(i = 0; i < 5; i++) {
        if(strcmp(username, cs[i].stdACC.loginname) == 0 &&
           strcmp(password, cs[i].stdACC.password) == 0) {
            found = 1;
            break;
        }
    }

    if(found)
        printf("Welcome\n");
    else
        printf("Incorrect login or password\n");

    return 0;
}
