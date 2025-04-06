/*
Q.Write a program to define a structure Company that contains companyName, location, and an embedded structure CEO with name and
age. Accept details from the user and display them.
*/

#include <stdio.h>

struct COMPANY
{
  char Company_Name[40];
  char Location[50];

  struct CEO
  {
    char Name[30];
    int Age;
  } C;
};

int main()
{
  int N;

  printf("\n\nENTER THE NUMBER OF COMPANIES: ");
  scanf("%d", &N);

  struct COMPANY I[N];

  for (int i = 0; i < N; i++)
  {
    if (N > 1)
    {
      printf("\n\nENTER THE DETAILS OF COMPANY %d:\n\n", (i + 1));
    }
    else
    {
      printf("\n\nENTER THE DETAILS OF COMPANY:\n\n");
    }

    printf("ENTER THE NAME OF THE COMPANY: ");
    scanf(" %39[^\n]s", I[i].Company_Name);

    printf("ENTER THE LOCATION: ");
    scanf(" %49[^\n]s", I[i].Location);

    printf("ENTER THE NAME OF THE \"CEO\": ");
    scanf(" %29[^\n]s", I[i].C.Name);

    printf("ENTER THE AGE OF THE CEO: ");
    scanf("%d", &I[i].C.Age);
  }

  for (int j = 0; j < N; j++)
  {
    if (N > 1)
    {
      printf("\n\n\nHERE ARE THE DETAILS OF THE COMPANY %d:-\n\n", (j + 1));
    }
    else
    {
      printf("\n\n\nHERE ARE THE DETAILS OF THE COMPANY:-\n\n");
    }

    printf("--> Name of the \"Company\": %s\n--> Location: %s\n--> Name of \"CEO\": %s\n--> Age of the CEO: %d", I[j].Company_Name, I[j].Location, I[j].C.Name, I[j].C.Age);
  }

  return 0;
}