#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct elem
{
  char polnnazv[25];
  char simv[3];
  char atommas[5];
  char prinad[2]; //m, n, g
};
typedef struct elem Elem;
void show(Elem c);
struct elem inpstud(void);

int main()
{
  FILE *fp;
  char napr[100];
  Elem el;
  int al = 1;
  int a, b, f, t;
  while (al != 0)
   {
     int k1 = 1; int k2 = 1;
     printf("Что вы хотите сделать со списком химических элементов?\n");
     printf("1. Открыть документ\n");
     printf("2. Редактировать документ\n");
     printf("3. Завершить программу\n");
     scanf("%i", &a);
     switch (a)
      {
        case 1://открытие файла
         {
           while(k1 != 0)
            {
              printf("Что конкретно вы хотите сделать?\n");
              printf("1. Вывести файл на экран\n");
              printf("2. Найти по заданным параметрам\n");
              printf("3. Назад\n");
              scanf("%i", &b);
              int k5 = 1;
              switch(b)
               {
                 case 1://вывод на печать
                 {
                   fp = fopen("list.txt", "a+");
                   while(!feof(fp))
                    {
                      fscanf(fp, "%s", el.polnnazv);
                      fscanf(fp, "%s", el.simv);
                      fscanf(fp, "%s", el.atommas);
                      fscanf(fp, "%s", el.prinad);
                      printf("Химический элемент: %s Символ: %s Атомная масса: %s Принадлежность: %s\n", el.polnnazv, el.simv, el.atommas, el.prinad);
                   }
                   fclose(fp);
                   break;
                 }
                case 2://нахождение в файле по параметрам
                {
                  while(k5!=0)
                   {
                     printf("Выберите параметр\n");
                     printf("1. Химический Элемент\n");
                     printf("2. Символ\n");
                     printf("3. Атомная масса\n");
                     printf("4. Принадлежность\n");
                     printf("5. Вернуться назад\n");
                     scanf("%i", &f);
                     t = 0;
                     switch(f)
                      {
                        case 1: //имя
                         {
                           fp = fopen("list.txt", "a+");
                           printf("Введите Химический элемент \n");
                           scanf("%s", napr);
                           while(!feof(fp))
                            {
                              fscanf(fp, "%s", el.polnnazv);
                              fscanf(fp, "%s", el.simv);
                              fscanf(fp, "%s", el.atommas);
                              fscanf(fp, "%s", el.prinad);
                              if(!strcmp(napr, el.polnnazv))
                                 printf("Химический элемент: %s Символ: %s Атомная масса: %s Принадлежность: %s\n", el.polnnazv, el.simv, el.atommas, el.prinad);
                              t = t + 1;
                            }
                          if(t == 0)
                            printf("Нет химических элементов удовлетворяющих параметрам поиска. Попробуйте снова\n");
                         fclose(fp);
                         break;
                       }
                       case 2: //символ
                         {
                           fp = fopen("list.txt", "a+");
                           printf("Введите Символ химического элеента \n");
                           scanf("%s", napr);
                           while(!feof(fp))
                            {
                              fscanf(fp, "%s", el.polnnazv);
                              fscanf(fp, "%s", el.simv);
                              fscanf(fp, "%s", el.atommas);
                              fscanf(fp, "%s", el.prinad);
                              if(!strcmp(napr, el.simv))
                                printf("Химический элемент: %s Символ: %s Атомная масса: %s Принадлежность: %s\n", el.polnnazv, el.simv, el.atommas, el.prinad);
                              t = t + 1;
                             }
                          if(t == 0)
                            printf("Нет химических элементов удовлетворяющих параметрам поиска. Попробуйте снова\n");
                          fclose(fp);
                          break;
                        }
                       case 3: //ам
                         {
                           fp = fopen("list.txt", "a+");
                           printf("Введите Атомную массу химического элемента \n");
                           scanf("%s", napr);
                           while(!feof(fp))
                            {
                              fscanf(fp, "%s", el.polnnazv);
                              fscanf(fp, "%s", el.simv);
                              fscanf(fp, "%s", el.atommas);
                              fscanf(fp, "%s", el.prinad);
                              if(!strcmp(napr, el.atommas))
                                printf("Химический элемент: %s Символ: %s Атомная масса: %s Принадлежность: %s\n", el.polnnazv, el.simv, el.atommas, el.prinad);
                              t = 1 + t;
                            }
                          if(t == 0)
                            printf("Нет химических элементов удовлетворяющих параметрам поиска. Попробуйте снова\n");
                          fclose(fp);
                          break;
                        }
                       case 4: //m, n, g
                         {
                           fp = fopen("list.txt", "a+");
                           printf("Введите Принадлежность к металлам(m), неметаллам(n), газам(g) \n");
                           scanf("%s", napr);
                           while(!feof(fp))
                            {
                              fscanf(fp, "%s", el.polnnazv);
                              fscanf(fp, "%s", el.simv);
                              fscanf(fp, "%s", el.atommas);
                              fscanf(fp, "%s", el.prinad);
                              if(!strcmp(napr, el.prinad))
                                printf("Химический элемент: %s Символ: %s Атомная масса: %s Принадлежность: %s\n", el.polnnazv, el.simv, el.atommas, el.prinad);
                                 t = 1 + t;
                            }
                            if(t == 0)
                              printf("Нет химических элементов удовлетворяющих параметрам поиска. Попробуйте снова\n");
                            fclose(fp);
                            break;
                        }
                       case 5: //выход
                         {
                           k5 = 0;
                           break;
                         }
                      }
                   }
                break;
              }
                case 3:
                  {
                    k1 = 0;
                    break;
                  }
               }
             }
         break;
       }
      case 2://редактирование файла
      {
        fp = fopen("list.txt", "a+");
        printf("Заполните данные нового Химического элемента \n");
        printf("Введите Название: ");
        scanf("%s", el.polnnazv);
        fprintf(fp, "%s ", el.polnnazv);
        printf("Введите Символы: ");
        scanf("%s", el.simv);
        fprintf(fp, "%s ", el.simv);
        printf("Введите Атомную массу: ");
        scanf("%s" , el.atommas);
        fprintf(fp, "%s ", el.atommas);
        printf("Введите Принадлежность: ");
        scanf("%s", el.prinad);
        fprintf(fp, "%s ", el.prinad);
        fclose(fp);
        break;
     }
      case 3://конец
      {
        al = 0;
        break;
      }
    }
  }
 return 0;
}
