#include <stdio.h>

int main()
{

    char ch[50];
    int ct = 0;
    int count = 0;

    printf("Enter word or sentance : ");
    scanf(" %[^\n]s", &ch);

    for (int i = 0; i <= 50; i++)
    {
        ct = ch[i];
        if ((ch[i] == 'a') || (ch[i] == 'e') || (ch[i] == 'i') || (ch[i] == 'o') || (ch[i] == 'u') || (ch[i] == 'A') || (ch[i] == 'E') || (ch[i] == 'I') || (ch[i] == 'O') || (ch[i] == 'U') && (ct != 0) && (ct != 32))
        {
            ++count;
        }
    }

    printf("Vovel count : %d", count);

    return 0;
}
