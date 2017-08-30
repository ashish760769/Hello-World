void main()
{
  int length;
  char name[100];
  printf("Enter the name\n");
  for(i=0;i<101;i++)
  {
      scanf("%c",&name[i]);
  }
  length=strlen(name);
  printf("%d",length);
}
