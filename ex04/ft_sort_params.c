int g_i;
int g_j;

void	ft_putchar(char c);

int		strcomp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(char*)s1 - *(char*)s2);
}

void	swap(char **str1, char **str2)
{
	char	*temp;

	temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}

int		main(int argc, char **argv)
{
	g_i = 1;
	while (argc > g_i)
	{
		g_j = 1;
		while (argc > g_j + 1)
		{
			if (strcomp(argv[g_j], argv[g_j + 1]) > 0)
				swap(&argv[g_j], &argv[g_j + 1]);
			g_j++;
		}
		g_i++;
	}
	g_i = 1;
	while (argc > g_i)
	{
		g_j = 0;
		while (argv[g_i][g_j] != '\0')
		{
			ft_putchar(argv[g_i][g_j]);
			g_j++;
		}
		ft_putchar('\n');
		g_i++;
	}
	return (0);
}
