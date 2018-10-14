

int main(int argc, char const *argv[])
{
	pid_t child_pid_1;
	pid_t child_pid_2;
	pid_t child_pid_3;
	printf("%d\n",(int) getpid() );

	 child_pid_1 = fork();
	if (child_pid_1==0)
	{
		printf("filho1\n");
		Incrementa_Variavel_Global(getpid());
	}
	else
	{
		child_pid_2 = fork();
		if (child_pid_2==0)
		{
			printf("filho2\n");
			Incrementa_Variavel_Global(getpid());
		}
		else
		{
			child_pid_3 = fork();
			if (child_pid_3==0)
			{
				printf("filho3\n");
				Incrementa_Variavel_Global(getpid());
			}
			else
			{
				printf("pai\n");
				Incrementa_Variavel_Global(getpid());
			}
		}

		

	}
	
	
		
	return 0;
}
