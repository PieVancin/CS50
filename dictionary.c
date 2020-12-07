// Implements a dictionary's functionality

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

#include "dictionary.h"

#define HASH_SIZE 10000
// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
}
node;

int count_words;

// Number of buckets in hash table
const unsigned int N = 65536;

// Hash table
node *table[N];

node *head = NULL;

// Returns true if word is in dictionary else false
bool check(const char *word)
{
    int length =strlen(word);
    char copy[length+1];
    copy[length] = '\0';
    
    //iterates through the word
     for (int i = 0; i < length; i++)
    {   
        //copy the word
        copy[i] = tolower(word[i]);
    }
        // take hash code from the copy
       int hashcode=hash(copy); 
       node *tmp=table[hashcode];
       
       if(tmp==NULL)
       {
           return false;
       }

       while(tmp!=NULL)
       {
           if(strcasecmp(tmp->word,copy)==0)
           {
               return true; 
           }

                tmp=tmp->next;
        }

       return false;
}


// Hashes word to a number
unsigned int hash(const char *word)
{
    // TODO
    return 0;
}

// Loads dictionary into memory, returning true if successful else false
bool load(const char *dictionary)
{
    // TODO
    return false;
}

// Returns number of words in dictionary if loaded else 0 if not yet loaded
unsigned int size(void)
{
    // TODO
    return 0;
}

// Unloads dictionary from memory, returning true if successful else false
bool unload(void)
{
    
    node *cursor = head;
    while (cursor != NULL)
    {
        node *temp = cursor;
        cursor = cursor->next;
        free(temp);
    }
    return true;
}
