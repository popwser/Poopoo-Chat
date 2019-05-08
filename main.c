#include <stdio.h>
#include <string.h>

const char *getStartMode()
{
  char inputModeStr[6];

  printf("Mode to start in: ");
  scanf("%s", inputModeStr);

  if(!strcmp(inputModeStr, "client"))
  {
    printf("Starting in %s mode...\n", "client");
    return "client";
  }
  if(!strcmp(inputModeStr, "server"))
  {
    printf("Starting in %s mode...\n", "server");
    return "server";
  }

  printf("\"%s\" is not a valid mode, please try one of the following:\n\"client\", \"server\"\n", inputModeStr);
  return getStartMode();
}

int main()
{

  const char *startMode = getStartMode();
  // Do other stuff

  return 0;
}
