void getNumber(void)
{
	printf("Please enter a number between 0 - 172,486: \n");
	int number = 0;
	scanf("%d", &number);
	while(number < LOWER || number > UPPER)
	{
		printf("Invalid choice!\n");
		scanf("%d", &number);
	}
	printTwice(number);
}
