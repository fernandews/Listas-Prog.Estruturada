#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>

void handleInput (char *user) {
    char ch;

    for (size_t i = 0; i < 8;) {
        ch = getch();

        if (isalnum(ch) != 0) {
            user[i] = ch;
            printf("%c", ch);
            i++;
        }
        else if (ch == 10 || ch == 13) {
            printf("\n");
            break;
        }
    }

    return;
}

void handlePassword (char *password) {
    char ch;

    for (size_t i = 0; i < 8;) {
        ch = getch();

        if (isalnum(ch) != 0) {
            password[i] = ch;
            printf("*");
            i++;
        }
        else if (ch == 10 || ch == 13) {
            printf("\n");
            break;
        }
    }

    return;
}

int main() {
    char user[9] = "", senha[9] = "", login[9] = "", password[9] = "";

    printf("\n--------------- CADASTRO --------------- \n");
    printf("Informe o nome de usuario: ");
    handleInput(user);
    // printf("%s \n", user);
        
    printf("Informe a senha: ");
    handlePassword(senha);
    // printf("%s \n", senha);

    printf("\n--------------- LOGIN --------------- \n");
    printf("Informe seu nome de usuario: ");
    handleInput(login);
    // printf("%s \n", login);

    printf("Informe a senha: ");
    handlePassword(password);
    // printf("%s \n", password);

    if(strcmp(user, login) == 0 && strcmp(senha, password) == 0) {
        printf("\n OK");
    }
    else {
        printf("\n Acesso Negado.");
    }
    
    return 0;
}