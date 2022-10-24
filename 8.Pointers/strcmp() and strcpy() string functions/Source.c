
int cmp1, cmp2;
char string1[10] = "abcxyz";
char string2[10] = "xyz";
char newText[10];
char *subStr = NULL;

cmp1 = strcmp(string1, string2);
printf("strcmp of \"%s\" and \"", string1);
printf("%s\" returned %d\n", string2, cmp1);

subStr = &string1[3];

cmp2 = strcmp(subStr, "xyz");
printf("strcmp of \"%s", subStr);
printf("\" and \"xyz\" returned ");
printf("%d\n", cmp2);

strcpy(newText, subStr);
printf("newText is now \"%s\"", newText);
printf("\n");