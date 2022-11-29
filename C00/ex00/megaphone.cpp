#include <iostream>
#include <cctype>
#include <string>

// USING THE C MANNER WE'LL HAVE THIS
/*
void	strToUpper(char *str)
{
	for (int i = 0; str[i]; i++)
		str[i] = toupper(str[i]);
}

int main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; i < ac; i++)
	{
		strToUpper(av[i]);
		std::cout << av[i] << " ";
	}
	std::cout << std::endl;
	return (0);
}
*/


// LET'S NOW RESOLVE THIS EXERCISE IN A C++ MANNER

class Megaphone {
	private:
		char			**sentences;
		unsigned int	numOfSentences;
		void	strToUpper(char *str)
		{
			for (int i = 0; str[i]; i++)
				str[i] = toupper(str[i]);
		}
	public:
		Megaphone(char **sentences, unsigned int numOfSentences){
			this->sentences = sentences;
			this->numOfSentences = numOfSentences;
		}
		void	speakLoudly(void)
		{
			if (!this->numOfSentences)
			{
				std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
				return ;
			}
			for (unsigned int i = 0; i < this->numOfSentences; i++)
			{
				strToUpper(this->sentences[i]);
				std::cout << this->sentences[i];
			}
			std::cout << std::endl;
		}
};


int	main(int ac, char **av)
{
	Megaphone newMegaphone = Megaphone(av + 1, ac - 1);
	newMegaphone.speakLoudly();
	return 0;
}
