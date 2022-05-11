#include <stdio.h>

int main(void)
{
   char first[11], last[11];
   char grade;
   int ID;

   int score_num;
   int score;
   int avg, cnt;

    scanf("%s %s %d", first, last, &ID);
    scanf("%d", &score_num);
    for(avg=0, cnt=0;cnt<score_num;cnt++)
    {
        scanf("%d", &score);
        avg += score;
    }

    avg = avg / cnt;
    printf("Name : %s, %s\n", first, last);
    printf("ID : %d\n", ID);
       

    if ((100 >= avg) && (avg >= 90)) printf("Grade : O\n", avg / cnt);
    else if (avg >= 80) printf("Grade : E\n", avg / cnt);
    else if (avg >= 70) printf("Grade : A\n", avg / cnt);
    else if (avg >= 55) printf("Grade : P\n", avg / cnt);
    else if (avg >= 40) printf("Grade : D\n", avg / cnt);
    else printf("Grade : T\n", avg / cnt);

}

/*
Heraldo Memelli 8135627
2
100 80
*/