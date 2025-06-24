#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
char string[50];
int neegal;
char de_mutat;
int ce_expresie_e;  // 1 pt if; 2 pt while si 3 pt for

de_mutat = '0';

while (fgets(string, 50, stdin)) {
	neegal = 0;
	if (string[0] == '}' && ce_expresie_e == 1) {
	printf("end_label:\n");
	ce_expresie_e = 0;
  }
	if (string[0] == '}' && ce_expresie_e == 3) {
	printf("ADD e%cx, 1\n", de_mutat);
	printf("JMP start_loop\n");
	printf("end_loop:\n");
	ce_expresie_e = 0;
  }
  if (string[0] == '}' && ce_expresie_e == 2) {
   printf("JMP start_loop\n");
   printf("end_label:\n");
   ce_expresie_e = 0;
  }
  // CAZUL IF
  if (string[0] == 'i' && string[1] == 'f') {
   neegal = 0;
   ce_expresie_e = 1;
   for (int i = 0; i < (int)strlen(string); i++) {
    if (string[i] == '>') {
     neegal = 1;
     if (string[i + 1] == '=') {
      if (!isdigit(string[i + 3]))
       printf("CMP e%cx, e%cx\n", string[i - 2], string[i + 3]);
      else if (!isdigit(string[i + 4]))
       printf("CMP e%cx, %c\n", string[i - 2], string[i + 3]);
      else
       printf("CMP e%cx, %c%c\n", string[i - 2], string[i + 3], string[i + 4]);
      printf("JL end_label\n");
     }

    else {
      if (!isdigit(string[i + 2]))
       printf("CMP e%cx, e%cx\n", string[i - 2], string[i + 2]);
      else if (!isdigit(string[i + 3]))
       printf("CMP e%cx, %c\n", string[i - 2], string[i + 2]);
      else
       printf("CMP e%cx, %c%c\n", string[i - 2], string[i + 2], string[i + 3]);
      printf("JLE end_label\n");
    }
    }
    if (string[i] == '<') {
     neegal = 1;
     if (string[i + 1] == '=') {
      if (!isdigit(string[i + 3]))
       printf("CMP e%cx, e%cx\n", string[i - 2], string[i + 3]);
      else if (!isdigit(string[i + 4]))
       printf("CMP e%cx, %c\n", string[i - 2], string[i + 3]);
      else
       printf("CMP e%cx, %c%c\n", string[i - 2], string[i + 3], string[i + 4]);
      printf("JG end_label\n");
     }

     else {
      if (!isdigit(string[i + 2]))
       printf("CMP e%cx, e%cx\n", string[i - 2], string[i + 2]);
      else if (!isdigit(string[i + 3]))
       printf("CMP e%cx, %c\n", string[i - 2], string[i + 2]);
      else
       printf("CMP e%cx, %c%c\n", string[i - 2], string[i + 2], string[i + 3]);
      printf("JGE end_label\n");
     }
    }
    if (string[i] == '=' && string[i + 1] == '=' && neegal == 0) {
     if (!isdigit(string[i + 3]))
      printf("CMP e%cx, e%cx\n", string[i - 2], string[i + 3]);
     else if (!isdigit(string[i + 4]))
      printf("CMP e%cx, %c\n", string[i - 2], string[i + 3]);
     else
      printf("CMP e%cx, %c%c\n", string[i - 2], string[i + 3], string[i + 4]);
     printf("JNE end_label\n");
    }
   }

   fgets(string, 50, stdin);
  }
  // CAZUL WHILE

  if (string[0] == 'w' && string[1] == 'h') {
   neegal = 0;
   ce_expresie_e = 2;
   printf("start_loop:\n");
   for (int i = 0; i < (int)strlen(string); i++) {
    if (string[i] == '>') {
     neegal = 1;
     if (string[i + 1] == '=') {
      if (!isdigit(string[i + 3]))
       printf("CMP e%cx, e%cx\n", string[i - 2], string[i + 3]);
      else if (!isdigit(string[i + 4]))
       printf("CMP e%cx, %c\n", string[i - 2], string[i + 3]);
      else
       printf("CMP e%cx, %c%c\n", string[i - 2], string[i + 3], string[i + 4]);
      printf("JL end_label\n");
     }

     else {
      if (!isdigit(string[i + 2]))
       printf("CMP e%cx, e%cx\n", string[i - 2], string[i + 2]);
      else if (!isdigit(string[i + 3]))
       printf("CMP e%cx, %c\n", string[i - 2], string[i + 2]);
      else
       printf("CMP e%cx, %c%c\n", string[i - 2], string[i + 2], string[i + 3]);
      printf("JLE end_label\n");
     }
    }
    if (string[i] == '<') {
     neegal = 1;
     if (string[i + 1] == '=') {
      if (!isdigit(string[i + 3]))
       printf("CMP e%cx, e%cx\n", string[i - 2], string[i + 3]);
      else if (!isdigit(string[i + 4]))
       printf("CMP e%cx, %c\n", string[i - 2], string[i + 3]);
      else
       printf("CMP e%cx, %c%c\n", string[i - 2], string[i + 3], string[i + 4]);
      printf("JG end_label\n");
     }

     else {
      if (!isdigit(string[i + 2]))
       printf("CMP e%cx, e%cx\n", string[i - 2], string[i + 2]);
      else if (!isdigit(string[i + 3]))
       printf("CMP e%cx, %c\n", string[i - 2], string[i + 2]);
      else
       printf("CMP e%cx, %c%c\n", string[i - 2], string[i + 2], string[i + 3]);
      printf("JGE end_label\n");
     }
    }
    if (string[i] == '=' && string[i + 1] == '=' && neegal == 0) {
     if (!isdigit(string[i + 3]))
      printf("CMP e%cx, e%cx\n", string[i - 2], string[i + 3]);
     else if (!isdigit(string[i + 4]))
      printf("CMP e%cx, %c\n", string[i - 2], string[i + 3]);
     else
      printf("CMP e%cx, %c%c\n", string[i - 2], string[i + 3], string[i + 4]);
     printf("JNE end_label\n");
    }
   }

   fgets(string, 50, stdin);
  }

  // CAZUL FOR
  if (string[0] == 'f' && string[1] == 'o') {
   neegal = 0;
   ce_expresie_e = 3;

   for (int i = 0; i < (int)strlen(string); i++) {
    if (string[i] == '(') {
     de_mutat = string[i + 1];
     if (!isdigit(string[i + 5]))
      printf("MOV e%cx, e%cx\n", string[i + 1], string[i + 5]);
     else if (!isdigit(string[i + 6]))
      printf("MOV e%cx, %c\n", string[i + 1], string[i + 5]);
     else
      printf("MOV e%cx, %c%c\n", string[i + 1], string[i + 5], string[i + 6]);
     printf("start_loop:\n");
    }

    if (string[i] == '<') {
     if (string[i + 1] == '=') {
      if (!isdigit(string[i + 3]))
       printf("CMP e%cx, e%cx\n", string[i - 2], string[i + 3]);
      else if (!isdigit(string[i + 4]))
       printf("CMP e%cx, %c\n", string[i - 2], string[i + 3]);
      else
       printf("CMP e%cx, %c%c\n", string[i - 2], string[i + 3], string[i + 4]);
      printf("JG end_label\n");
     }

     else {
      if (!isdigit(string[i + 2]))
       printf("CMP e%cx, e%cx\n", string[i - 2], string[i + 2]);
      else if (!isdigit(string[i + 3]))
       printf("CMP e%cx, %c\n", string[i - 2], string[i + 2]);
      else
       printf("CMP e%cx, %c%c\n", string[i - 2], string[i + 2], string[i + 3]);
      printf("JGE end_label\n");
     }
    }
   }

   fgets(string, 50, stdin);
  }

  neegal = 0;

  for (int i = (int)strlen(string); i >= 0; i--) {  // CAZUL AND
   if (string[i] == '&') {
    if (!isdigit(string[i + 2]))
     printf("AND e%cx, e%cx\n", string[i - 2], string[i + 2]);
    else if (!isdigit(string[i + 3]))
     printf("AND e%cx, %c\n", string[i - 2], string[i + 2]);
    else
     printf("AND e%cx, %c%c\n", string[i - 2], string[i + 2], string[i + 3]);
    neegal = 1;
   }

   // CAZUL XOR
   else if (string[i] == '^') {
    if (!isdigit(string[i + 2]))
     printf("XOR e%cx, e%cx\n", string[i - 2], string[i + 2]);
    else if (!isdigit(string[i + 3]))
     printf("XOR e%cx, %c\n", string[i - 2], string[i + 2]);
    else
     printf("XOR e%cx, %c%c\n", string[i - 2], string[i + 2], string[i + 3]);
    neegal = 1;
   }
   // CAZUL OR
   else if (string[i] == '|') {
    if (!isdigit(string[i + 2]))
     printf("OR e%cx, e%cx\n", string[i - 2], string[i + 2]);
    else if (!isdigit(string[i + 3]))
     printf("OR e%cx, %c\n", string[i - 2], string[i + 2]);
    else
     printf("OR e%cx, %c%c\n", string[i - 2], string[i + 2], string[i + 3]);
    neegal = 1;
   }
   // CAZUL AND
   else if (string[i] == '+') {
    if (!isdigit(string[i + 2]))
     printf("ADD e%cx, e%cx\n", string[i - 2], string[i + 2]);
    else if (!isdigit(string[i + 3]))
     printf("ADD e%cx, %c\n", string[i - 2], string[i + 2]);
    else
     printf("ADD e%cx, %c%c\n", string[i - 2], string[i + 2], string[i + 3]);
    neegal = 1;
   }
   // CAZUL SUB
   else if (string[i] == '-') {
    if (!isdigit(string[i + 2]))
     printf("SUB e%cx, e%cx\n", string[i - 2], string[i + 2]);
    else if (!isdigit(string[i + 3]))
     printf("SUB e%cx, %c\n", string[i - 2], string[i + 2]);
    else
     printf("SUB e%cx, %c%c\n", string[i - 2], string[i + 2], string[i + 3]);
    neegal = 1;
   }
   // CAZUL MUL
   else if (string[i] == '*') {
    if (string[i - 2] == 'a') {
     if (!isdigit(string[i + 2]))
      printf("MUL e%cx\n", string[i + 2]);
     else if (!isdigit(string[i + 3]))
      printf("MUL %c\n", string[i + 2]);
     else
      printf("MUL %c%c\n", string[i + 2], string[i + 3]);
    }

    else {
     if (!isdigit(string[i + 2])) {
      printf("MOV eax, e%cx\n", string[i - 2]);
      printf("MUL e%cx\n", string[i + 2]);
      printf("MOV e%cx, eax\n", string[i - 2]);
     }

     else if (!isdigit(string[i + 3])) {
      printf("MOV eax, e%cx\n", string[i - 2]);
      printf("MUL %c\n", string[i + 2]);
      printf("MOV e%cx, eax\n", string[i - 2]);
     }

    else {
      printf("MOV eax, e%cx\n", string[i - 2]);
      printf("MUL %c%c\n", string[i + 2], string[i + 3]);
      printf("MOV e%cx, eax\n", string[i - 2]);
     }
    }
    neegal = 1;
   }

  else if (string[i] == '/') {
    if (string[i + 2] == '0') {
      printf("Error\n"); }

    else if (string[i - 2] == 'a') {
      if (!isdigit(string[i + 2]))
       printf("DIV e%cx\n", string[i + 2]);
      else if (!isdigit(string[i + 3]))
       printf("DIV %c\n", string[i + 2]);
      else
       printf("DIV %c%c\n", string[i + 2], string[i + 3]);
    }

    else {
      if (!isdigit(string[i + 2])) {
       printf("MOV eax, e%cx\n", string[i - 2]);
       printf("DIV e%cx\n", string[i + 2]);
       printf("MOV e%cx, eax\n", string[i - 2]);
      }

     else if (!isdigit(string[i + 3])) {
      printf("MOV eax, e%cx\n", string[i - 2]);
      printf("DIV %c\n", string[i + 2]);
      printf("MOV e%cx, eax\n", string[i - 2]);
      }

     else {
      printf("MOV eax, e%cx\n", string[i - 2]);
      printf("DIV %c%c\n", string[i + 2], string[i + 3]);
      printf("MOV e%cx, eax\n", string[i - 2]);
     }
    }
    neegal = 1;
   }

   else if (string[i] == '<' && string[i - 1] == '<') {
    if (!isdigit(string[i + 3]))
      printf("SHL e%cx, %c\n", string[i - 3], string[i + 2]);
    else
      printf("SHL e%cx, %c%c\n", string[i - 3], string[i + 2], string[i + 3]);
    neegal = 1;
    }

   else if (string[i] == '>' && string[i - 1] == '>') {
    if (!isdigit(string[i + 3]))
      printf("SHR e%cx, %c\n", string[i - 3], string[i + 2]);
    else
      printf("SHR e%cx, %c%c\n", string[i - 3], string[i + 2], string[i + 3]);
    neegal = 1;
  }

	else if (string[i] == '=' && neegal == 0) {
	if (!isdigit(string[i + 2]))
      printf("MOV e%cx, e%cx\n", string[i - 2], string[i + 2]);
    else if (!isdigit(string[i + 3]))
      printf("MOV e%cx, %c\n", string[i - 2], string[i + 2]);
    else
      printf("MOV e%cx, %c%c\n", string[i - 2], string[i + 2], string[i + 3]);
    }
  }
}

return 0;
}