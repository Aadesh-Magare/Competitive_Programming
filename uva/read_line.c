char *readline() {
	long int count = 0;
	string = malloc(sizeof(char) * 1024);
	char ch;
	while((ch = getchar()) != EOF && ch != '\n')
		string[count++] = ch;
	string[count] = '\0';
	return string;
}
