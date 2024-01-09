#include <stdio.h>

int i = 1, c = 1, b = 0;
float width, height, result;
float side1, side2, side3, side4;
int main();

void asking()
{
    char ask;

    while (c > 0)
    {
        printf("\ndo you want to continu y/n ? \n");
        scanf("%s", &ask);
        if ((ask != 'Y') && (ask != 'y') && (ask != 'N') && (ask != 'n'))
        {
            printf("\n?!?!?!?!?!?!?!\n");
        }
        else if ((ask == 'N') || (ask == 'n'))
        {
            i = 0;
//            c = 0;
            break;
        }
        else
        {
            main();
            break;
        }
    }
}

void C_to_F()
{
    while (i > 0)
    {
        float tempertur;

        printf("\nplease enter your teaertur : \n");
        scanf("%f", &tempertur);

        result = ((tempertur * 9 / 5) + 32);

        printf("%.1f", result);

        asking();
    }
}

void F_to_C()
{
    while (i > 0)
    {
        float tempertur;

        printf("\nplease enter your teaertur : \n");
        scanf("%f", &tempertur);

        result = (((tempertur - 32) * 5) / 9);

        printf("%.1f", result);

        asking();
    }
}

void S_P_R_S()
{
    while (i > 0)
    {
        printf("\nplease enter width & height : \n");
        scanf("%f %f", &width, &height);

        result = width * height;

        printf("\nS : %.2f\n", result);

        result = 2 * (width + height);

        printf("\nP : %.2f\n", result);

        asking();
    }
}

void O_T()
{
    while (i > 0)
    {
        printf("\nplease enter three sides : \n");
        scanf("%f %f %f", &side1, &side2, &side3);

        if ((side1 + side2 <= side3) || (side1 + side3 <= side2) || (side2 + side3 <= side1))
        {
            printf("\nnot really\n");

            if (b != 1)
            {
                asking();
            }
            else
            {
                i = 0;
            }
        }
        else
        {
            if (b == 1)
            {
                result = side1 + side2 + side3;

                printf("\nP : %.2f\n", result);

                i = 0;
            }
            else
            {
                printf("\nis really\n");

                asking();
            }
        }
    }
    i = 1;
}

void S_P_T()
{
    while (i > 0)
    {
        b = 1;

        printf("\nplease enter width and hieght : \n");
        scanf("%f %f", &width, &height);

        result = (width * height) / 2;

        printf("\nS : %.2f\n", result);

        O_T();

        b = 0;

        asking();
    }
}

void S_P_M()
{
    while (i > 0)
    {
        printf("\nplease enter width and hieght : \n");
        scanf("%f %f", &width, &height);

        result = width * height;

        printf("\nS : %.2f\n", result);

        printf("\nplease enter two adjacent sides : \n");
        scanf("%f %f", &side1, &side2);

        result = 2 * (side1 + side2);

        printf("\nP : %.2f\n", result);

        asking();
    }
}

void S_P_Z()
{
    while (i > 0)
    {
        float base1, base2;

        printf("\nplease enter base1 & base2 & height : \n");
        scanf("%f %f %f", &base1, &base2, &height);

        result = ((base1 + base2) * height) / 2;

        printf("\nS : %.2f\n", result);

        printf("\nplease enter four sides : \n");
        scanf("%f %f %f %f", &side1, &side2, &side3, &side4);

        result = side1 + side2 + side3 + side4;

        printf("\nP : %.2f\n", result);

        asking();
    }
}

void S_P_C()
{
    while (i > 0)
    {
        float R;

        printf("\nplease enter R : \n");
        scanf("%f", &R);

        result = (3.14) * R * R;

        printf("\nS : %.2f\n", result);

        result = 2 * (3.14) * R;

        printf("\nP : %.2f\n", result);

        asking();
    }
}

int main()
{
    while (i > 0)
    {
        int doing;

        printf("Celsius to Fahrenheit : 1\nFahrenheit to Celsius : 2\nS & P mostatil : 3\n");
        printf("S & P mosalas : 4\nis mosalas or not ? : 5\nS & P moraba : 6\nS & P motevazy : 7\n");
        printf("S & P zozanagheh : 8\nS & P circle : 9");
        printf("\nwhat do want to do ? \n");
        scanf("%d", &doing);

        switch (doing)
        {
            case 1:
                C_to_F();
                break;

            case 2:
                F_to_C();
                break;

            case 3:
                S_P_R_S();
                break;

            case 4:
                S_P_T();
                break;

            case 5:
                O_T();
                break;

            case 6:
                S_P_R_S();
                break;

            case 7:
                S_P_M();
                break;

            case 8:
                S_P_Z();
                break;

            case 9:
                S_P_C();
                break;

            default:
                printf("\n?!?!?!?!?!?!?!?!?\n");
                break;
        }

        i = 1;
        asking();
    }


    return 0;
}