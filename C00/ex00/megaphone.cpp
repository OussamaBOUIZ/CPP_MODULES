#include <iostream>
#include <cctype>
#include <string>

class Megaphone {
	private:
		char			**sentences;
		unsigned int	numOfSentences;
		void	strToUpper(char *str);
	public:
		Megaphone(char **sentences, unsigned int numOfSentences);
		void	speakLoudly(void);
};

Megaphone::Megaphone(char **sentences, unsigned int numOfSentences)
{
	this->sentences = sentences;
	this->numOfSentences = numOfSentences;
}

void	Megaphone::strToUpper(char *str)
{
	for (int i = 0; str[i]; i++)
		str[i] = toupper(str[i]);
}

void	Megaphone::speakLoudly(void)
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

int	main(int ac, char **av)
{
	Megaphone newMegaphone = Megaphone(av + 1, ac - 1);
	newMegaphone.speakLoudly();
	return 0;
}
