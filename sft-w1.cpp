#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/**
* Determine if the string s starts with the string prefix.
* @param s - the string to see if it starts with prefix
* @param prefix - the prefix to test
* @returns true if the strings begins with the prefix.
*/

int startsWith(const char s[], const char prefix[])
{
    char buf[100];
    int i;
    int sz = strlen(prefix);
    
    if (sz != 0)
    {
        for (i = 0; i < sz; i++)
        {
            buf[i] = s[i];
        }
        buf[sz] = '\0';
        return 0 == strcmp(buf, prefix);
    }
    else
    {
        return 0;
    }
}

/**
* Determine if the string s ends with the string suffix.
* @param s - the string to see if it ends with suffix
* @param suffix - the suffix to test
* @returns true if the strings ends with the suffix.
*/

int endsWith(const char s[], const char suffix[])
{
    int sz = strlen(suffix);
    int slen = strlen(s);
    //printf("%s %d %d %s ", s, slen, sz, s - sz);
    if (sz != 0)
    {
        return 0 == strcmp(s + slen - sz, suffix);
    }
    else
    {
        return 0;
    }
}
int main(void)
{
    int flag = 0;
    char s1[] = { "append " };
    char prefix[] = { " app" };
    char suffix[] = { "nd " };

    if (startsWith(s1, prefix) && (strcmp(suffix,prefix)!= 0))
    {
        printf("'%s' does start with '%s'\n",s1, prefix);
    }
    else if(startsWith(s1,prefix) && endsWith(s1,suffix) &&  (strcmp(suffix,prefix) == 0))
    {
        printf("'%s' is '%s' itself", s1, suffix);
        flag = 1;
    }
    else
    {
        printf("'%s' does not start with '%s'\n",s1, prefix);
    }

    if(endsWith(s1, suffix) && (strcmp(suffix,prefix)!= 0))
    {
        printf("'%s' does end with '%s'\n",s1, suffix);
    }
    else if(flag == 0)
    {
        printf("'%s' does not end with '%s'\n",s1, suffix);
    }

    return 0;
}