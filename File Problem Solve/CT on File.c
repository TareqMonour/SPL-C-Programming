/* Q1: Prepare a text file with numbers.Read all the numbers from the file and assign them in an array.
   Find the max, min, and sum of those numbers. Print the max, min, and sum in another text file.
   Print the numbers in another text file.
Ans:

text.txt
1
2
3
4
5 */
#include <stdio.h>
int main()
{
    FILE *file;
    FILE *tfile;
    FILE *cfile;
    file = fopen("text.txt", "r");

    int i, count = 0, sum = 0, arr[100];

    if (file == NULL)
    {
        printf("File doesn't Exist");
    }
    else
    {
        while (!feof(file))
        {
            fscanf(file, "%d", &i);
            arr[count] = i;
            count++;
        }
    }
    fclose(file);

    int max = -9999;
    int min = 9999;

    for (int i = 0; i < count; i++)
    {
        sum += arr[i];

        if (max < arr[i])
        {
            max = arr[i];
        }
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    tfile = fopen("text2.txt", "w");
    fprintf(tfile, "%d\n%d\n%d", max, min, sum);
    fclose(tfile);

    int j;
    file = fopen("text.txt", "r");
    cfile = fopen("text3.txt", "w");
    while (!feof(file))
    {
        fscanf(file, "%d", &j);
        fprintf(cfile, "%d\n", j);
    }
    fclose(file);
    fclose(cfile);

    return 0;
}

/*text2.txt
5
1
15



text3.txt
1
2
3
4
5 */
