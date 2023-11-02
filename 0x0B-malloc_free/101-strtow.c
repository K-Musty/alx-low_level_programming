#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * countWords - counts words
 * @str: string
 *
 * Return: word count
 */
int countWords(const char *str)
{
       	int wordCount = 0;
	int inWord = 0;
	
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			inWord = 0;
		}
		else if (inWord == 0)
		{
			wordCount++;
			inWord = 1;
		}
	}
	return wordCount;
}

/**
 * freee - Helper function to free the memory of a string array
 *
 */
void freee(char **array)
{
	if (array)
	{
		for (int i = 0; array[i] != NULL; i++)
		{
			free(array[i]);
		}
		free(array);
	}
}

/**
 * strtow - splits sentence into words
 * @str: the sentence string
 *
 * Return: pointer to string array
 */
char **strtow(char *str)
{
	if (str == NULL || *str == '\0')
	{
		return (NULL);
	
		int wordCount = countWords(str);
		char **words = (char **)malloc((wordCount + 1) * sizeof(char *));
		
		if (words == NULL)
	{
		return (NULL);
	}

	int wordIndex = 0;
	char *word = strtok(str, " ");

	while (word != NULL)
	{
		words[wordIndex] = strdup(word);
		if (words[wordIndex] == NULL)
		{
			freee(words);
			return (NULL);
		}
		word = strtok(NULL, " ");
		wordIndex++;
	}
	words[wordIndex] = NULL;
	return words;
}
