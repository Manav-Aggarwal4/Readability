#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
float get_lettersper100word(string text);
float get_sentencesper100words(string text);

int main(void)
{
    string text = get_string("Text: ");

    // plan: get text from user. calculate avg number of letters per 100 words + calc avg number of
    // sentences per 100 words
    float avgletters = get_lettersper100word(text);
    float avgsentences = get_sentencesper100words(text);
    float floatreadinglevel = 0.0588 * avgletters - 0.296 * avgsentences - 15.8;
    int realreadinglevel = round(floatreadinglevel);
    if (realreadinglevel < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (realreadinglevel >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %d\n", realreadinglevel);
    }
}

float get_lettersper100word(string text)
{
    float letters = 0;
    for (int i = 0, len = strlen(text); i < len; i++)
    {
        if (isalpha(text[i]))
        {
            letters++;
        }
        else
        {
            letters += 0;
        }
    } // this gets number of letters in text. now we must calculate number of words below:
    float words = 0;
    for (int j = 0, len = strlen(text); j < len; j++)
    {
        if (isblank(text[j]))
        {
            words++;
        }
        else
        {
            words += 0;
        }
    }
    words += 1;                                       // for last word that will have a period
    float lettersperword = (letters / words) * 100.0; // letters per 100 words
    return lettersperword;
}

float get_sentencesper100words(string text)
{
    float sentences = 0;
    for (int k = 0, len = strlen(text); k < len; k++)
    {
        if (text[k] == '.' || text[k] == '?' || text[k] == '!')
        {
            sentences++;
        }
        else
        {
            sentences += 0; // calcs number of sentences
        }
    }
    float words = 0;
    for (int j = 0, len = strlen(text); j < len; j++)
    {
        if (isblank(text[j]))
        {
            words++;
        }
        else
        {
            words += 0;
        }
    }
    words += 1;
    float avgsentencesper100words = (sentences / words) * 100.0;
    return avgsentencesper100words;
}
