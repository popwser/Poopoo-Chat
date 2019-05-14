#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>

struct ProgramProperties
{
  char startMode[6];
  // TODO: Add IP and port that server starts on
};

struct ProgramProperties* getProgramProperties()
{
  char inputModeStr[6];

  printf("Mode to start in: ");
  scanf("%s", inputModeStr);

  if(!strcmp(inputModeStr, "client"))
  {
    printf("Starting in %s mode...\n", "client");

    struct ProgramProperties* prop = malloc(sizeof(struct ProgramProperties));
    strcpy(prop->startMode, "client");

    return prop;
  }
  if(!strcmp(inputModeStr, "server"))
  {
    printf("Starting in %s mode...\n", "server");

    struct ProgramProperties* prop = malloc(sizeof(struct ProgramProperties));
    strcpy(prop->startMode, "server");

    return prop;
  }

  printf("\"%s\" is not a valid mode, please try one of the following:\n\"client\", \"server\"\n", inputModeStr);
  return getProgramProperties();
}

int main()
{

  struct ProgramProperties* prop = getProgramProperties();

  int sockfd = socket(AF_INET, SOCK_STREAM, 0); // IPv4, TCP, IP

  if(!strcmp(prop->startMode, "client"))
  {}

  if(!strcmp(prop->startMode, "server"))
  {}

  free(prop->startMode);
  free(prop);

  return 0;
}
