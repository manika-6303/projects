#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <windows.h>
void rule();
main()
{
	int fiftyfiftycount = 0;
	int flipcount = 0;
	char option;
	int i, j;
	char choice, name[50];

	system("color B0");
	printf("*******************************************************************************************************************************************************************************************************************");
	printf("\n\t\t\t\t\t\t\t\t\t\t\t||KAUN BANEGA CROREPATI||\n");
	printf("_________________________________________________________________________________________________________________________________________________________________________________________________________________");

	printf("\n\t\t\t\t\t\t\t\t\t\t\t*************************");
	printf("\n\t\t\t\t\t\t\t\t\t\t\t*  WELCOME TO THE GAME  *");
	printf("\n\t\t\t\t\t\t\t\t\t\t\t*************************");
	printf("\n\t\t\t\t\t\t\t\t\t\t!!YOUR CHANCE TO BECOME A CROREPATI!!");
	printf("\n\n\n_________________________________________________________________________________________________________________________________________________________________________________________________________________");
	printf("\n\n\t\t > Press 'S' TO START");
	printf("\n\n\t\t > press 'R' FOR RULES");
	printf("\n\n\t\t > press 'Q' TO QUIT");
	printf("\n\n\n*******************************************************************************************************************************************************************************************************************");

	printf("\n\t\tENTER YOUR CHOICE: ");

	int ch;
line35:
	do
	{
		ch = getch(); ///ASCII of S=83,Q=81,R=82;
		ch = toupper(ch);
		if (ch == 83 || ch == 81 || ch == 82)
		{
			printf("%c", ch);
			break;
		}
		else
			goto line35;
	} while(0);

	if (ch == 'S')
		goto start;
	else if (ch == 'Q')
		exit(0);
	else if (ch == 'R')
	{
		system("cls");
		printf("*******************************************************************************************************************************************************************************************************************");
		printf("\n\n\t\t RULES FOR THE GAME ARE: ");
		rule();
		printf("\n\n\n\n ENTER YOUR NAME: ");
		gets(name);
		printf("\n\n\n\t\t NOW PRESS ENTER TO START GAME: ");
		goto line75;
	}

start:
	printf("\n\n\n\n\t\t ENTER YOUR NAME: ");
	gets(name);
	system("cls");
	printf("*******************************************************************************************************************************************************************************************************************");
	printf("\n\t\t\t\t\t\t\t\t\t\t\tWELCOME %s GET READY!!", strupr(name));
	printf("\n\n_________________________________________________________________________________________________________________________________________________________________________________________________________________");
	printf("\n\n\t\t RULES FOR THE GAME ARE:\n\n ");
	rule();
	printf("\n\n\n\t\t PRESS ENTER TO START GAME");
line75:
	ch = getch();
	if (ch == 13)///13 is ASCII for enter key
		goto line82;
	else
		goto line75;

line82:
	system("cls");

	int amount[16] = {0, 1000, 2000, 3000, 5000, 10000, 20000, 50000, 100000, 320000, 640000, 1250000, 2500000, 5000000, 10000000, 70000000};
	int QuestionIndex = 0, QuestionAmount = 0, temp, b[15], k;

	srand(time(0));

	for (i = 1; i <= 15; i++)
	{
	line92:
		temp = rand() % 46;

		for (k = 0; k <= i - 1; k++)
		{
			if (temp == b[k])
				break;
		}
		if (i == k)
		{
			b[i] = temp;
		}
		else
			i--;
		if (b[i] == 0)
			goto line92;
	}

	for (i = 1; i <= 15; i++)
	{
		QuestionAmount = amount[QuestionIndex];
		if (i != 1)
		{
			printf("\n You won Rupees %d till now!!!", QuestionAmount);
			printf("\n*******************************************************************************************************************************************************************************************************************");
		}

		printf("\nPRESS F IF YOU WANT FIFTY-FIFTY LIFELINE\n");
		printf("\nPRESS L IF YOU WANT FLIP THE QUESTION LIFELINE\n");
		printf("\nPRESS Q TO EXIT THE GAME\n");
		printf("\n*******************************************************************************************************************************************************************************************************************");

		if (fiftyfiftycount < 1)

			printf("\nYou have 1 50-50 lifeline left");
		else
			printf("\nYou have 0 50-50 lifeline left");
		if (flipcount < 1)
			printf("\nYou have 1 flip the question lifeline left");

		else
			printf("\nYou have 0 flip the question lifeline left");

		printf("\n*******************************************************************************************************************************************************************************************************************");
		printf("\nQUESTION %d :", i);
		printf("\t[Rupees %d ]", amount[i]);

		switch (b[i])
		{
		case 1:
			printf("\n\n\nWhich of the following is the binary of 38?");
			printf("\n\nA)100110\t\tB)101010\n\nC)110010\t\tD)100100\n");

			option = toupper(getch());
			if ((fiftyfiftycount < 1) && (toupper(option) == 'F'))
			{
				fiftyfiftycount++;
				system("cls");
				printf("\n\n\nWhich of the following is the binary of 38?");
				printf("\n\nA)100110\t\tB)      \n\nC)        \t\tD)100100\n");
				option = toupper(getch());
			}

			do
			{

				if (option == 81) ///81 ASCII of Q
					exit(1);
				if (option == 65 || option == 66 || option == 67 || option == 68) ///A,B,C,D
				{
					printf("%c", option);
					break;
				}
				else if ((option == 70) && (fiftyfiftycount == 0))///ASCII of F
				{
					printf("%c", option);
					break;
				}
				else if ((option == 76) && (flipcount == 0))
				{
					printf("%c", option);
					break;
				}
				else
				{
					printf("\nWrong option selected.Press again.\n");
					option = toupper(getch());
				}

			} while (1);

			if (toupper(option) == 'Q')
				exit(1);

			else if (toupper(option) == 'L' && flipcount == 0)
			{
				flipcount++;
				goto flip;
			}

			if (toupper(option) == 'A')
				printf("\n\nCorrect!!!");
			else if (toupper(option) == 'B' || toupper(option) == 'C' || toupper(option) == 'D')
			{
				printf("\n\nWrong!!! The correct answer is A)100110");
				getch();
				goto score;

				break;
			}
			break;

		case 2:

			printf("\n\n\n  Who is the Agriculture Minister of India?");
			printf("\n\nA)J.P.Nadda\t\tB)Narendra Singh Tomar\n\nC)Ananth Kumar\t\tD)Radha Mohan Singh\n");

			option = toupper(getch());
			if ((fiftyfiftycount < 1) && (toupper(option) == 'F'))
			{
				fiftyfiftycount++;
				system("cls");
				printf("\n\n\n  Who is the Agriculture Minister of India?");
				printf("\n\nA)J.P.Nadda\t\tB)Narendra Singh Tomar\n\nC)              \t\tD)                 \n");
				option = toupper(getch());
			}

			do
			{

				if (option == 81)
					exit(1);
				if (option == 65 || option == 66 || option == 67 || option == 68)
				{
					printf("%c", option);
					break;
				}
				else if ((option == 70) && (fiftyfiftycount == 0))
				{
					printf("%c", option);
					break;
				}
				else if ((option == 76) && (flipcount == 0))
				{
					printf("%c", option);
					break;
				}
				else
				{
					printf("\nWrong option selected.Press again.\n");
					option = toupper(getch()); ///ASCII of S=83,Q=81,R=82;
				}

			} while (1);

			if (toupper(option) == 'Q')
				exit(1);

			else if (toupper(option) == 'L' && flipcount == 0)
			{
				flipcount++;
				goto flip;
			}
			if (toupper(option) == 'B')
				printf("\n\nCorrect!!!");
			else if (toupper(option) == 'A' || toupper(option) == 'C' || toupper(option) == 'D')

			{
				printf("\n\nWrong!!! The correct answer is B)Narendra Singh Tomar");
				getch();
				goto score;
				break;
			}
			break;
		case 3:
			printf("\n\n\nWhat is Compound of Cricket called:");
			printf("\n\nA)Pool\t\t\tB)Track\n\nC)Lawn\t\t\tD)Pitch\n");
			option = toupper(getch());
			if ((fiftyfiftycount < 1) && (toupper(option) == 'F'))
			{
				fiftyfiftycount++;
				system("cls");
				printf("\n\n\nWhat is Compound of Cricket called:");
				printf("\n\nA)    \t\t\tB)        \n\nC)Lawn\t\tD)Pitch\n");
				option = toupper(getch());
			}
			do
			{

				if (option == 81)
					exit(1);
				if (option == 65 || option == 66 || option == 67 || option == 68)
				{
					printf("%c", option);
					break;
				}
				else if ((option == 70) && (fiftyfiftycount == 0))
				{
					printf("%c", option);
					break;
				}
				else if ((option == 76) && (flipcount == 0))
				{
					printf("%c", option);
					break;
				}
				else
				{
					printf("\nWrong option selected.Press again.\n");
					option = toupper(getch()); ///ASCII of S=83,Q=81,R=82;
				}

			} while (1);

			if (toupper(option) == 'Q')
				exit(1);

			else if (toupper(option) == 'L' && flipcount == 0)
			{
				flipcount++;
				goto flip;
			}
			if (toupper(option) == 'D')
				printf("\n\nCorrect!!!");
			else if (toupper(option) == 'A' || toupper(option) == 'C' || toupper(option) == 'B')
			{
				printf("\n\nWrong!!! The correct answer is D)Yacht Racing");
				getch();
				goto score;
				break;
			}
			break;

		case 4:
			printf("\n\n\nLittle Corporal was the common name of __?");
			printf("\n\nA)Adolf Hitler\t\t\tB)George Bernard Shaw\n\nC)Napolean Bonaparte\t\tD)Walter Scott\n");
			option = toupper(getch());
			if ((fiftyfiftycount < 1) && (toupper(option) == 'F'))
			{
				fiftyfiftycount++;
				system("cls");
				printf("\n\n\nLittle Corporal was the common name of __?");
				printf("\n\nA)Adolf Hitler\t\tB)                  \n\nC)Napolean Bonaparte\t\tD)               \n");
				option = toupper(getch());
			}

			do
			{

				if (option == 81)
					exit(1);
				if (option == 65 || option == 66 || option == 67 || option == 68)
				{
					printf("%c", option);
					break;
				}
				else if ((option == 70) && (fiftyfiftycount == 0))
				{
					printf("%c", option);
					break;
				}
				else if ((option == 76) && (flipcount == 0))
				{
					printf("%c", option);
					break;
				}
				else
				{
					printf("\nWrong option selected.Press again.\n");
					option = toupper(getch()); ///ASCII of S=83,Q=81,R=82;
				}

			} while (1);

			if (toupper(option) == 'Q')
				exit(1);

			else if (toupper(option) == 'L' && flipcount == 0)
			{
				flipcount++;
				goto flip;
			}
			if (toupper(option) == 'C')
				printf("\n\nCorrect!!!");
			else if (toupper(option) == 'A' || toupper(option) == 'D' || toupper(option) == 'B')
			{
				printf("\n\nWrong!!! The correct answer is C)Napolean Bonaparte");
				getch();
				goto score;
				break;
			}
			break;
		case 5:
			printf("\n\n\nWhen is World Forestry Day celebrated?");
			printf("\n\nA)21st March\t\tB)24th October\n\nC)10th September\t\tD)5th November\n");
			option = toupper(getch());
			if ((fiftyfiftycount < 1) && (toupper(option) == 'F'))
			{
				fiftyfiftycount++;
				system("cls");
				printf("\n\n\nWhen is World Forestry Day celebrated?");
				printf("\n\nA)21st March\t\tB)                \n\nC)                 \t\tD)5th November\n");
				option = toupper(getch());
			}

			do
			{

				if (option == 81)
					exit(1);
				if (option == 65 || option == 66 || option == 67 || option == 68)
				{
					printf("%c", option);
					break;
				}
				else if ((option == 70) && (fiftyfiftycount == 0))
				{
					printf("%c", option);
					break;
				}
				else if ((option == 76) && (flipcount == 0))
				{
					printf("%c", option);
					break;
				}
				else
				{
					printf("\nWrong option selected.Press again.\n");
					option = toupper(getch()); ///ASCII of S=83,Q=81,R=82;
				}

			} while (1);

			if (toupper(option) == 'Q')
				exit(1);

			else if (toupper(option) == 'L' && flipcount == 0)
			{
				flipcount++;
				goto flip;
			}
			if (toupper(option) == 'A')
				printf("\n\nCorrect!!!");
			else if (toupper(option) == 'D' || toupper(option) == 'C' || toupper(option) == 'B')
			{
				printf("\n\nWrong!!! The correct answer is A)21st March");
				getch();
				goto score;
				break;
			}
			break;
		case 6:
			printf("\n\n\nWhich element is found in Vitamin B12?");
			printf("\n\nA)Zinc\t\t\tB)Cobalt\n\nC)Calcium\t\tD)Iron\n");
			option = toupper(getch());
			if ((fiftyfiftycount < 1) && (toupper(option) == 'F'))
			{
				fiftyfiftycount++;
				system("cls");
				printf("\n\n\nWhich element is found in Vitamin B12?");
				printf("\n\nA)     \t\t\tB)Cobalt\n\nC)          \t\tD)Iron\n");
				option = toupper(getch());
			}

			do
			{

				if (option == 81)
					exit(1);
				if (option == 65 || option == 66 || option == 67 || option == 68)
				{
					printf("%c", option);
					break;
				}
				else if ((option == 70) && (fiftyfiftycount == 0))
				{
					printf("%c", option);
					break;
				}
				else if ((option == 76) && (flipcount == 0))
				{
					printf("%c", option);
					break;
				}
				else
				{
					printf("\nWrong option selected.Press again.\n");
					option = toupper(getch()); ///ASCII of S=83,Q=81,R=82;
				}

			} while (1);

			if (toupper(option) == 'Q')
				exit(1);

			else if (toupper(option) == 'L' && flipcount == 0)
			{
				flipcount++;
				goto flip;
			}
			if (toupper(option) == 'B')
				printf("\n\nCorrect!!!");
			else if (toupper(option) == 'A' || toupper(option) == 'C' || toupper(option) == 'D')
			{
				printf("\n\nWrong!!! The correct answer is B)Cobalt");
				goto score;
				getch();
				break;
			}
			break;
		case 7:
			printf("\n\n\nWhere is the Angkor Vat situated?");
			printf("\n\nA)Cambodia\t\tB)Jordan\n\nC)Brazil\t\tD)Russia\n");
			option = toupper(getch());
			if ((fiftyfiftycount < 1) && (toupper(option) == 'F'))
			{
				fiftyfiftycount++;
				system("cls");
				printf("\n\n\nWhere is the Angkor Vat situated?");
				printf("\n\nA)Cambodia\t\tB)        \n\nC)         \t\tD)Russia\n");
				option = toupper(getch());
			}

			do
			{

				if (option == 81)
					exit(1);
				if (option == 65 || option == 66 || option == 67 || option == 68)
				{
					printf("%c", option);
					break;
				}
				else if ((option == 70) && (fiftyfiftycount == 0))
				{
					printf("%c", option);
					break;
				}
				else if ((option == 76) && (flipcount == 0))
				{
					printf("%c", option);
					break;
				}
				else
				{
					printf("\nWrong option selected.Press again.\n");
					option = toupper(getch()); ///ASCII of S=83,Q=81,R=82;
				}

			} while (1);

			if (toupper(option) == 'Q')
				exit(1);

			else if (toupper(option) == 'L' && flipcount == 0)
			{
				flipcount++;
				goto flip;
			}
			if (toupper(option) == 'A')
				printf("\n\nCorrect!!!");
			else if (toupper(option) == 'D' || toupper(option) == 'C' || toupper(option) == 'B')
			{
				printf("\n\nWrong!!! The correct answer is A)Cambodia");
				getch();
				goto score;
				break;
			}
			break;
		case 8:
			printf("\n\n\nHow many times a piece of paper can be folded at the most?");
			printf("\n\nA)6\t\tB)7\n\nC)8\t\tD)Depends on the size of paper\n");
			option = toupper(getch());
			if ((fiftyfiftycount < 1) && (toupper(option) == 'F'))
			{
				fiftyfiftycount++;
				system("cls");
				printf("\n\n\nHow many times a piece of paper can be folded at the most?");
				printf("\n\nA) \t\tB)7\n\nC) \t\tD)Depends on the size of paper\n");
				option = toupper(getch());
			}

			do
			{

				if (option == 81)
					exit(1);
				if (option == 65 || option == 66 || option == 67 || option == 68)
				{
					printf("%c", option);
					break;
				}
				else if ((option == 70) && (fiftyfiftycount == 0))
				{
					printf("%c", option);
					break;
				}
				else if ((option == 76) && (flipcount == 0))
				{
					printf("%c", option);
					break;
				}
				else
				{
					printf("\nWrong option selected.Press again.\n");
					option = toupper(getch()); ///ASCII of S=83,Q=81,R=82;
				}

			} while (1);

			if (toupper(option) == 'Q')
				exit(1);

			else if (toupper(option) == 'L' && flipcount == 0)
			{
				flipcount++;
				goto flip;
			}
			if (toupper(option) == 'B')
				printf("\n\nCorrect!!!");
			else if (toupper(option) == 'A' || toupper(option) == 'C' || toupper(option) == 'D')
			{
				printf("\n\nWrong!!! The correct answer is B)7");
				getch();
				goto score;
				break;
			}

			break;
		case 9:
			printf("\n\n\nWhat is the capital of Denmark?");
			printf("\n\nA)Copenhagen\t\tB)Helsinki\n\nC)Ajax\t\t\tD)Galatasaray\n");
			option = toupper(getch());
			if ((fiftyfiftycount < 1) && (toupper(option) == 'F'))
			{
				fiftyfiftycount++;
				system("cls");
				printf("\n\n\nWhat is the capital of Denmark?");
				printf("\n\nA)Copenhagen\t\tB)          \n\nC)Ajax\t\t\tD)              \n");
				option = toupper(getch());
			}

			do
			{

				if (option == 81)
					exit(1);
				if (option == 65 || option == 66 || option == 67 || option == 68)
				{
					printf("%c", option);
					break;
				}
				else if ((option == 70) && (fiftyfiftycount == 0))
				{
					printf("%c", option);
					break;
				}
				else if ((option == 76) && (flipcount == 0))
				{
					printf("%c", option);
					break;
				}
				else
				{
					printf("\nWrong option selected.Press again.\n");
					option = toupper(getch()); ///ASCII of S=83,Q=81,R=82;
				}

			} while (1);

			if (toupper(option) == 'Q')
				exit(1);

			else if (toupper(option) == 'L' && flipcount == 0)
			{
				flipcount++;
				goto flip;
			}
			if (toupper(option) == 'A')
				printf("\n\nCorrect!!!");
			else if (toupper(option) == 'D' || toupper(option) == 'C' || toupper(option) == 'B')
			{
				printf("\n\nWrong!!! The correct answer is A)Copenhagen");
				getch();
				goto score;
				break;
			}

			break;
		case 10:
			printf("\n\n\nWhich is the Largest Lake in the world?");
			printf("\n\nA)Baikal\t\tB)Titicaca\n\nC)Caspian Sea\t\tD)Amazon\n");
			option = toupper(getch());
			if ((fiftyfiftycount < 1) && (toupper(option) == 'F'))
			{
				fiftyfiftycount++;
				system("cls");
				printf("\n\n\nWhich is the Largest Lake in the world?");
				printf("\n\nA)         \t\tB)Titicaca\n\nC)Caspian Sea\t\tD)          \n");
				option = toupper(getch());
			}

			do
			{

				if (option == 81)
					exit(1);
				if (option == 65 || option == 66 || option == 67 || option == 68)
				{
					printf("%c", option);
					break;
				}
				else if ((option == 70) && (fiftyfiftycount == 0))
				{
					printf("%c", option);
					break;
				}
				else if ((option == 76) && (flipcount == 0))
				{
					printf("%c", option);
					break;
				}
				else
				{
					printf("\nWrong option selected.Press again.\n");
					option = toupper(getch()); ///ASCII of S=83,Q=81,R=82;
				}

			} while (1);

			if (toupper(option) == 'Q')
				exit(1);

			else if (toupper(option) == 'L' && flipcount == 0)
			{
				flipcount++;
				goto flip;
			}
			if (toupper(option) == 'C')
				printf("\n\nCorrect!!!");
			else if (toupper(option) == 'A' || toupper(option) == 'D' || toupper(option) == 'B')
			{
				printf("\n\nWrong!!! The correct answer is C)Caspian Sea");
				getch();
				goto score;
				break;
			}
			break;

		case 11:
			printf("\n\n\nWhat is the color of the Black Box in aeroplanes?");
			printf("\n\nA)White\t\tB)Black\n\nC)Orange\t\tD)Red\n");
			option = toupper(getch());
			if ((fiftyfiftycount < 1) && (toupper(option) == 'F'))
			{
				fiftyfiftycount++;
				system("cls");
				printf("\n\n\nWhat is the color of the Black Box in aeroplanes?");
				printf("\n\nA)       \t\tB)        \n\nC)Orange\t\tD)Red\n");
				option = toupper(getch());
			}

			do
			{

				if (option == 81)
					exit(1);
				if (option == 65 || option == 66 || option == 67 || option == 68)
				{
					printf("%c", option);
					break;
				}
				else if ((option == 70) && (fiftyfiftycount == 0))
				{
					printf("%c", option);
					break;
				}
				else if ((option == 76) && (flipcount == 0))
				{
					printf("%c", option);
					break;
				}
				else
				{
					printf("\nWrong option selected.Press again.\n");
					option = toupper(getch()); ///ASCII of S=83,Q=81,R=82;
				}

			} while (1);

			if (toupper(option) == 'Q')
				exit(1);

			else if (toupper(option) == 'L' && flipcount == 0)
			{
				flipcount++;
				goto flip;
			}
			if (toupper(option) == 'C')
				printf("\n\nCorrect!!!");
			else if (toupper(option) == 'A' || toupper(option) == 'D' || toupper(option) == 'B')
			{
				printf("\n\nWrong!!! The correct answer is C)Orange");
				getch();

				goto score;
				break;
			}
			break;
		case 12:
			printf("\n\n\nWhich city is known at 'The City of Seven Hills'?");
			printf("\n\nA)Rome\t\tB)Vatican City\n\nC)Madrid\t\tD)Berlin\n");
			option = toupper(getch());
			if ((fiftyfiftycount < 1) && (toupper(option) == 'F'))
			{
				fiftyfiftycount++;
				system("cls");
				printf("\n\n\nWhich city is known at 'The City of Seven Hills'?");
				printf("\n\nA)Rome\t\tB)             \n\nC)         \t\tD)Berlin\n");
				option = toupper(getch());
			}

			do
			{

				if (option == 81)
					exit(1);
				if (option == 65 || option == 66 || option == 67 || option == 68)
				{
					printf("%c", option);
					break;
				}
				else if ((option == 70) && (fiftyfiftycount == 0))
				{
					printf("%c", option);
					break;
				}
				else if ((option == 76) && (flipcount == 0))
				{
					printf("%c", option);
					break;
				}
				else
				{
					printf("\nWrong option selected.Press again.\n");
					option = toupper(getch()); ///ASCII of S=83,Q=81,R=82;
				}

			} while (1);

			if (toupper(option) == 'Q')
				exit(1);

			else if (toupper(option) == 'L' && flipcount == 0)
			{
				flipcount++;
				goto flip;
			}
			if (toupper(option) == 'A')
				printf("\n\nCorrect!!!");
			else if (toupper(option) == 'D' || toupper(option) == 'C' || toupper(option) == 'B')
			{
				printf("\n\nWrong!!! The correct answer is A)Rome");
				getch();

				goto score;
				break;
			}
			break;

		case 13:
			printf("\n\n\nName the country where there no mosquitoes are found?");
			printf("\n\nA)Japan\t\tB)Italy\n\nC)Argentina\t\tD)France\n");
			option = toupper(getch());
			if ((fiftyfiftycount < 1) && (toupper(option) == 'F'))
			{
				fiftyfiftycount++;
				system("cls");
				printf("\n\n\nName the country where there no mosquitoes are found?");
				printf("\n\nA)Japan\t\tB)       \n\nC)             \t\tD)France\n");
				option = toupper(getch());
			}

			do
			{

				if (option == 81)
					exit(1);
				if (option == 65 || option == 66 || option == 67 || option == 68)
				{
					printf("%c", option);
					break;
				}
				else if ((option == 70) && (fiftyfiftycount == 0))
				{
					printf("%c", option);
					break;
				}
				else if ((option == 76) && (flipcount == 0))
				{
					printf("%c", option);
					break;
				}
				else
				{
					printf("\nWrong option selected.Press again.\n");
					option = toupper(getch()); ///ASCII of S=83,Q=81,R=82;
				}

			} while (1);

			if (toupper(option) == 'Q')
				exit(1);

			else if (toupper(option) == 'L' && flipcount == 0)
			{
				flipcount++;
				goto flip;
			}
			if (toupper(option) == 'D')
				printf("\n\nCorrect!!!");
			else if (toupper(option) == 'A' || toupper(option) == 'C' || toupper(option) == 'B')
			{
				printf("\n\nWrong!!! The correct answer is D)France");
				getch();

				goto score;
				break;
			}

			break;
		case 14:
			printf("\n\n\nWhen did Alexander die?");
			printf("\n\nA)323 B.C.\t\tB)383 B.C.\n\nC)327 A.D.\t\tD)494 A.D.\n");
			option = toupper(getch());
			if ((fiftyfiftycount < 1) && (toupper(option) == 'F'))
			{
				fiftyfiftycount++;
				system("cls");
				printf("\n\n\nWhen did Alexander die?");
				printf("\n\nA)323 B.C.\t\tB)383 B.C.\n\nC)        \t\tD)           \n");
				option = toupper(getch());
			}

			do
			{

				if (option == 81)
					exit(1);
				if (option == 65 || option == 66 || option == 67 || option == 68)
				{
					printf("%c", option);
					break;
				}
				else if ((option == 70) && (fiftyfiftycount == 0))
				{
					printf("%c", option);
					break;
				}
				else if ((option == 76) && (flipcount == 0))
				{
					printf("%c", option);
					break;
				}
				else
				{
					printf("\nWrong option selected.Press again.\n");
					option = toupper(getch()); ///ASCII of S=83,Q=81,R=82;
				}

			} while (1);

			if (toupper(option) == 'Q')
				exit(1);

			else if (toupper(option) == 'L' && flipcount == 0)
			{
				flipcount++;
				goto flip;
			}
			if (toupper(option) == 'A')
				printf("\n\nCorrect!!!");
			else if (toupper(option) == 'D' || toupper(option) == 'C' || toupper(option) == 'B')
			{
				printf("\n\nWrong!!! The correct answer is A)323 B.C.");
				getch();
				goto score;
				break;
			}
			break;

		case 15:
			printf("\n\n\nWhich Blood Group is known as the Universal Recipient?");
			printf("\n\nA)A\t\tB)AB+\n\nC)B\t\tD)O\n");
			option = toupper(getch());
			if ((fiftyfiftycount < 1) && (toupper(option) == 'F'))
			{
				fiftyfiftycount++;
				system("cls");
				printf("\n\n\nWhich Blood Group is known as the Universal Recipient?");
				printf("\n\nA)A\t\tB)AB+\n\nC) \t\tD) \n");
				option = toupper(getch());
			}

			do
			{

				if (option == 81)
					exit(1);
				if (option == 65 || option == 66 || option == 67 || option == 68)
				{
					printf("%c", option);
					break;
				}
				else if ((option == 70) && (fiftyfiftycount == 0))
				{
					printf("%c", option);
					break;
				}
				else if ((option == 76) && (flipcount == 0))
				{
					printf("%c", option);
					break;
				}
				else
				{
					printf("\nWrong option selected.Press again.\n");
					option = toupper(getch()); ///ASCII of S=83,Q=81,R=82;
				}

			} while (1);

			if (toupper(option) == 'Q')
				exit(1);

			else if (toupper(option) == 'L' && flipcount == 0)
			{
				flipcount++;
				goto flip;
			}
			if (toupper(option) == 'B')
				printf("\n\nCorrect!!!");
			else if (toupper(option) == 'A' || toupper(option) == 'C' || toupper(option) == 'D')
			{
				printf("\n\nWrong!!! The correct answer is B)AB+");
				getch();
				goto score;
				break;
			}

			break;
		case 16:
			printf("\n\n\nWhat is the unit of measurement of distance between Stars?");
			printf("\n\nA)Light Year\t\tB)Coulomb\n\nC)Nautical Mile\t\tD)Kilometer\n");
			option = toupper(getch());
			if ((fiftyfiftycount < 1) && (toupper(option) == 'F'))
			{
				fiftyfiftycount++;
				system("cls");
				printf("\n\n\nWhat is the unit of measurement of distance between Stars?");
				printf("\n\nA)Light Year\t\tB)         \n\nC)Nautical Mile\t\tD)          \n");
				option = toupper(getch());
			}

			do
			{

				if (option == 81)
					exit(1);
				if (option == 65 || option == 66 || option == 67 || option == 68)
				{
					printf("%c", option);
					break;
				}
				else if ((option == 70) && (fiftyfiftycount == 0))
				{
					printf("%c", option);
					break;
				}
				else if ((option == 76) && (flipcount == 0))
				{
					printf("%c", option);
					break;
				}
				else
				{
					printf("\nWrong option selected.Press again.\n");
					option = toupper(getch()); ///ASCII of S=83,Q=81,R=82;
				}

			} while (1);

			if (toupper(option) == 'Q')
				exit(1);

			else if (toupper(option) == 'L' && flipcount == 0)
			{
				flipcount++;
				goto flip;
			}
			if (toupper(option) == 'A')
				printf("\n\nCorrect!!!");
			else if (toupper(option) == 'D' || toupper(option) == 'C' || toupper(option) == 'B')
			{
				printf("\n\nWrong!!! The correct answer is A)Light Year");
				getch();
				goto score;
				break;
			}
			break;

		case 17:
			printf("\n\n\nThe country famous for Samba Dance is ______");
			printf("\n\nA)Brazil\t\tB)Venezuela\n\nC)Nigeria\t\tD)Bolivia\n");
			option = toupper(getch());
			if ((fiftyfiftycount < 1) && (toupper(option) == 'F'))
			{
				fiftyfiftycount++;
				system("cls");
				printf("\n\n\nThe country famous for Samba Dance is ______");
				printf("\n\nA)Brazil\t\tB)Venezuela\n\nC)          \t\tD)         \n");
				option = toupper(getch());
			}

			do
			{

				if (option == 81)
					exit(1);
				if (option == 65 || option == 66 || option == 67 || option == 68)
				{
					printf("%c", option);
					break;
				}
				else if ((option == 70) && (fiftyfiftycount == 0))
				{
					printf("%c", option);
					break;
				}
				else if ((option == 76) && (flipcount == 0))
				{
					printf("%c", option);
					break;
				}
				else
				{
					printf("\nWrong option selected.Press again.\n");
					option = toupper(getch()); ///ASCII of S=83,Q=81,R=82;
				}

			} while (1);

			if (toupper(option) == 'Q')
				exit(1);

			else if (toupper(option) == 'L' && flipcount == 0)
			{
				flipcount++;
				goto flip;
			}
			if (toupper(option) == 'A')
				printf("\n\nCorrect!!!");
			else if (toupper(option) == 'D' || toupper(option) == 'C' || toupper(option) == 'B')
			{
				printf("\n\nWrong!!! The correct answer is A)Brazil");
				getch();
				goto score;
				break;
			}
			break;

		case 18:
			printf("\n\n\nWhat is the height of Kanchenjunga Peak in metres?");
			printf("\n\nA)8848\t\tB)8611\n\nC)8964\t\tD)8597\n");
			option = toupper(getch());
			if ((fiftyfiftycount < 1) && (toupper(option) == 'F'))
			{
				fiftyfiftycount++;
				system("cls");
				printf("\n\n\nWhat is the height of Kanchenjunga Peak in metres?");
				printf("\n\nA)     \t\tB)     \n\nC)8964\t\tD)8597\n");
				option = toupper(getch());
			}

			do
			{

				if (option == 81)
					exit(1);
				if (option == 65 || option == 66 || option == 67 || option == 68)
				{
					printf("%c", option);
					break;
				}
				else if ((option == 70) && (fiftyfiftycount == 0))
				{
					printf("%c", option);
					break;
				}
				else if ((option == 76) && (flipcount == 0))
				{
					printf("%c", option);
					break;
				}
				else
				{
					printf("\nWrong option selected.Press again.\n");
					option = toupper(getch()); ///ASCII of S=83,Q=81,R=82;
				}

			} while (1);

			if (toupper(option) == 'Q')
				exit(1);

			else if (toupper(option) == 'L' && flipcount == 0)
			{
				flipcount++;
				goto flip;
			}
			if (toupper(option) == 'D')
				printf("\n\nCorrect!!!");
			else if (toupper(option) == 'A' || toupper(option) == 'C' || toupper(option) == 'B')
			{
				printf("\n\nWrong!!! The correct answer is D)8597");
				getch();
				goto score;
				break;
			}
			break;

		case 19:
			printf("\n\n\nOrange Book is the official document of _?");
			printf("\n\nA)India\t\tB)Netherlands\n\nC)Italy\t\tD)Iran\n");
			option = toupper(getch());
			if ((fiftyfiftycount < 1) && (toupper(option) == 'F'))
			{
				fiftyfiftycount++;
				system("cls");
				printf("\n\n\nOrange Book is the official document of _?");
				printf("\n\nA)       \t\tB)Netherlands\n\nC)Italy\t\tD)    \n");
				option = toupper(getch());
			}

			do
			{

				if (option == 81)
					exit(1);
				if (option == 65 || option == 66 || option == 67 || option == 68)
				{
					printf("%c", option);
					break;
				}
				else if ((option == 70) && (fiftyfiftycount == 0))
				{
					printf("%c", option);
					break;
				}
				else if ((option == 76) && (flipcount == 0))
				{
					printf("%c", option);
					break;
				}
				else
				{
					printf("\nWrong option selected.Press again.\n");
					option = toupper(getch()); ///ASCII of S=83,Q=81,R=82;
				}

			} while (1);

			if (toupper(option) == 'Q')
				exit(1);

			else if (toupper(option) == 'L' && flipcount == 0)
			{
				flipcount++;
				goto flip;
			}
			if (toupper(option) == 'B')
				printf("\n\nCorrect!!!");
			else if (toupper(option) == 'A' || toupper(option) == 'C' || toupper(option) == 'D')
			{
				printf("\n\nWrong!!! The correct answer is B)Netherlands");
				getch();
				goto score;
				break;
			}
			break;

		case 20:
			printf("\n\n\nWhich hardware was used in the First Generation Computer?");
			printf("\n\nA)Transistor\t\tB)Valves\n\nC)I.C\t\tD)S.S.I\n");
			option = toupper(getch());
			if ((fiftyfiftycount < 1) && (toupper(option) == 'F'))
			{
				fiftyfiftycount++;
				system("cls");
				printf("\n\n\nWhich hardware was used in the First Generation Computer?");
				printf("\n\nA)Transistor\t\tB)Valves\n\nC)    \t\tD)       \n");
				option = toupper(getch());
			}

			do
			{

				if (option == 81)
					exit(1);
				if (option == 65 || option == 66 || option == 67 || option == 68)
				{
					printf("%c", option);
					break;
				}
				else if ((option == 70) && (fiftyfiftycount == 0))
				{
					printf("%c", option);
					break;
				}
				else if ((option == 76) && (flipcount == 0))
				{
					printf("%c", option);
					break;
				}
				else
				{
					printf("\nWrong option selected.Press again.\n");
					option = toupper(getch()); ///ASCII of S=83,Q=81,R=82;
				}

			} while (1);

			if (toupper(option) == 'Q')
				exit(1);

			else if (toupper(option) == 'L' && flipcount == 0)
			{
				flipcount++;
				goto flip;
			}
			if (toupper(option) == 'B')
				printf("\n\nCorrect!!!");
			else if (toupper(option) == 'A' || toupper(option) == 'C' || toupper(option) == 'D')
			{
				printf("\n\nWrong!!! The correct answer is B)Valves");
				getch();
				goto score;
				break;
			}
			break;
		case 21:
			printf("\n\n\nOzone plate is being destroyed regularly because of__ ?");
			printf("\n\nA)L.P.G\t\tB)Nitrogen\n\nC)Methane\t\tD) C.F.C\n");
			option = toupper(getch());
			if ((fiftyfiftycount < 1) && (toupper(option) == 'F'))
			{
				fiftyfiftycount++;
				system("cls");
				printf("\n\n\nOzone plate is being destroyed regularly because of__ ?");
				printf("\n\nA)       \t\tB)          \n\nC)Methane\t\tD) C.F.C\n");
				option = toupper(getch());
			}

			do
			{

				if (option == 81)
					exit(1);
				if (option == 65 || option == 66 || option == 67 || option == 68)
				{
					printf("%c", option);
					break;
				}
				else if ((option == 70) && (fiftyfiftycount == 0))
				{
					printf("%c", option);
					break;
				}
				else if ((option == 76) && (flipcount == 0))
				{
					printf("%c", option);
					break;
				}
				else
				{
					printf("\nWrong option selected.Press again.\n");
					option = toupper(getch()); ///ASCII of S=83,Q=81,R=82;
				}

			} while (1);

			if (toupper(option) == 'Q')
				exit(1);

			else if (toupper(option) == 'L' && flipcount == 0)
			{
				flipcount++;
				goto flip;
			}
			if (toupper(option) == 'D')
				printf("\n\nCorrect!!!");
			else if (toupper(option) == 'A' || toupper(option) == 'C' || toupper(option) == 'B')
			{
				printf("\n\nWrong!!! The correct answer is D) C.F.C");
				getch();
				goto score;
				break;
			}
			break;

		case 22:
			printf("\n\n\nWho won the Nobel Prize for Physics in 1930?");
			printf("\n\nA)C.V.Raman\t\tB)Isaac Newton\n\nC)Albert Einstein\t\tD)Marie Curie\n");
			option = toupper(getch());
			if ((fiftyfiftycount < 1) && (toupper(option) == 'F'))
			{
				fiftyfiftycount++;
				system("cls");
				printf("\n\n\nWho won the Nobel Prize for Physics in 1930?");
				printf("\n\nA)C.V.Raman\t\tB)           \n\nC)Albert Einstein\t\tD)             \n");
				option = toupper(getch());
			}

			do
			{

				if (option == 81)
					exit(1);
				if (option == 65 || option == 66 || option == 67 || option == 68)
				{
					printf("%c", option);
					break;
				}
				else if ((option == 70) && (fiftyfiftycount == 0))
				{
					printf("%c", option);
					break;
				}
				else if ((option == 76) && (flipcount == 0))
				{
					printf("%c", option);
					break;
				}
				else
				{
					printf("\nWrong option selected.Press again.\n");
					option = toupper(getch()); ///ASCII of S=83,Q=81,R=82;
				}

			} while (1);

			if (toupper(option) == 'Q')
				exit(1);

			else if (toupper(option) == 'L' && flipcount == 0)
			{
				flipcount++;
				goto flip;
			}
			if (toupper(option) == 'A')
				printf("\n\nCorrect!!!");
			else if (toupper(option) == 'D' || toupper(option) == 'C' || toupper(option) == 'B')
			{
				printf("\n\nWrong!!! The correct answer is A)C.V.Raman");
				getch();
				goto score;
				break;
			}

			break;
		case 23:
			printf("\n\n\nWho won Miss Universe in 2019?");
			printf("\n\nA)Madison Anderson\t\tB)Mariana Varela\n\nC)Zozibini Tunzi\t\tD)Priya Serrao\n");
			option = toupper(getch());
			if ((fiftyfiftycount < 1) && (toupper(option) == 'F'))
			{
				fiftyfiftycount++;
				system("cls");
				printf("\n\n\nWho won Miss Universe in 2019?");
				printf("\n\nA)                 \t\tB)Mariana Varela\n\nC)Zozibini Tunzi\t\tD)            \n");
				option = toupper(getch());
			}

			do
			{

				if (option == 81)
					exit(1);
				if (option == 65 || option == 66 || option == 67 || option == 68)
				{
					printf("%c", option);
					break;
				}
				else if ((option == 70) && (fiftyfiftycount == 0))
				{
					printf("%c", option);
					break;
				}
				else if ((option == 76) && (flipcount == 0))
				{
					printf("%c", option);
					break;
				}
				else
				{
					printf("\nWrong option selected.Press again.\n");
					option = toupper(getch()); ///ASCII of S=83,Q=81,R=82;
				}

			} while (1);

			if (toupper(option) == 'Q')
				exit(1);

			else if (toupper(option) == 'L' && flipcount == 0)
			{
				flipcount++;
				goto flip;
			}
			if (toupper(option) == 'C')
				printf("\n\nCorrect!!!");
			else if (toupper(option) == 'A' || toupper(option) == 'D' || toupper(option) == 'B')
			{
				printf("\n\nWrong!!! The correct answer is C)Zozibini Tunzi");
				getch();
				goto score;
				break;
			}
			break;

		case 24:
			printf("\n\n\nWho won Men's US Open 2020?");
			printf("\n\nA)Alexander Zverev\t\tB)Bruno Soares\n\nC)Dominic Thiem\t\t\tD)Rafael Nadal\n");
			option = toupper(getch());
			if ((fiftyfiftycount < 1) && (toupper(option) == 'F'))
			{
				fiftyfiftycount++;
				system("cls");
				printf("\n\n\nWho won Men's US Open 2020?");
				printf("\n\nA)Alexander Zverev\t\tB)             \n\nC)Dominic Thiem\t\t\tD)             \n");
				option = toupper(getch());
			}

			do
			{

				if (option == 81)
					exit(1);
				if (option == 65 || option == 66 || option == 67 || option == 68)
				{
					printf("%c", option);
					break;
				}
				else if ((option == 70) && (fiftyfiftycount == 0))
				{
					printf("%c", option);
					break;
				}
				else if ((option == 76) && (flipcount == 0))
				{
					printf("%c", option);
					break;
				}
				else
				{
					printf("\nWrong option selected.Press again.\n");
					option = toupper(getch()); ///ASCII of S=83,Q=81,R=82;
				}

			} while (1);

			if (toupper(option) == 'Q')
				exit(1);

			else if (toupper(option) == 'L' && flipcount == 0)
			{
				flipcount++;
				goto flip;
			}
			if (toupper(option) == 'C')
				printf("\n\nCorrect!!!");
			else if (toupper(option) == 'A' || toupper(option) == 'D' || toupper(option) == 'B')
			{
				printf("\n\nWrong!!! The correct answer is C)Dominic Thiem");
				getch();
				goto score;
				break;
			}
			break;
		case 25:
			printf("\n\n\nWhich Cricketer became the first cricketer to score 1000 T20 sixes?");
			printf("\n\nA)David Warner\t\tB)Virat Kohli\n\nC)Rohit Sharma\t\tD)Chris Gayle\n");
			option = toupper(getch());
			if ((fiftyfiftycount < 1) && (toupper(option) == 'F'))
			{
				fiftyfiftycount++;
				system("cls");
				printf("\n\n\nWhich Cricketer became the first cricketer to score 1000 T20 sixes?");
				printf("\n\nA)               \t\tB)              \n\nC)Rohit Sharma\t\tD)Chris Gayle\n");
				option = toupper(getch());
			}

			do
			{

				if (option == 81)
					exit(1);
				if (option == 65 || option == 66 || option == 67 || option == 68)
				{
					printf("%c", option);
					break;
				}
				else if ((option == 70) && (fiftyfiftycount == 0))
				{
					printf("%c", option);
					break;
				}
				else if ((option == 76) && (flipcount == 0))
				{
					printf("%c", option);
					break;
				}
				else
				{
					printf("\nWrong option selected.Press again.\n");
					option = toupper(getch()); ///ASCII of S=83,Q=81,R=82;
				}

			} while (1);

			if (toupper(option) == 'Q')
				exit(1);

			else if (toupper(option) == 'L' && flipcount == 0)
			{
				flipcount++;
				goto flip;
			}
			if (toupper(option) == 'D')
				printf("\n\nCorrect!!!");
			else if (toupper(option) == 'A' || toupper(option) == 'C' || toupper(option) == 'B')
			{
				printf("\n\nWrong!!! The correct answer is D)Chris Gayle");
				getch();
				goto score;
				break;
			}
			break;

		case 26:
			printf("\n\n\nWho won Miss Universe in 2019?");
			printf("\n\nA)Madison Anderson\t\tB)Mariana Varela\n\nC)Zozibini Tunzi\t\tD)Priya Serrao\n");
			option = toupper(getch());
			if ((fiftyfiftycount < 1) && (toupper(option) == 'F'))
			{
				fiftyfiftycount++;
				system("cls");

				printf("\n\n\nWho won Miss Universe in 2019?");
				printf("\n\nA)                  \t\tB)            \n\nC)Zozibini Tunzi\t\tD)Priya Serrao\n");
				option = toupper(getch());
			}

			do
			{

				if (option == 81)
					exit(1);
				if (option == 65 || option == 66 || option == 67 || option == 68)
				{
					printf("%c", option);
					break;
				}
				else if ((option == 70) && (fiftyfiftycount == 0))
				{
					printf("%c", option);
					break;
				}
				else if ((option == 76) && (flipcount == 0))
				{
					printf("%c", option);
					break;
				}
				else
				{
					printf("\nWrong option selected.Press again.\n");
					option = toupper(getch()); ///ASCII of S=83,Q=81,R=82;
				}

			} while (1);

			if (toupper(option) == 'Q')
				exit(1);

			else if (toupper(option) == 'L' && flipcount == 0)
			{
				flipcount++;
				goto flip;
			}
			if (toupper(option) == 'C')
				printf("\n\nCorrect!!!");
			else if (toupper(option) == 'A' || toupper(option) == 'D' || toupper(option) == 'B')
			{
				printf("\n\nWrong!!! The correct answer is C)Zozibini Tunzi");
				getch();
				goto score;
				break;
			}
			break;
		case 27:
			printf("\n\n\nWhich Cricketer became the fastest cricketer to reach 12000 ODI runs?");
			printf("\n\nA)Brian Lara\t\t\tB)Virat Kohli\n\nC)Sachin Tendulkar\t\tD)Ricky Ponting\n");
			option = toupper(getch());
			if ((fiftyfiftycount < 1) && (toupper(option) == 'F'))
			{
				fiftyfiftycount++;
				system("cls");
				printf("\n\n\nWhich Cricketer became the fastest cricketer to reach 12000 ODI runs?");
				printf("\n\nA)             \t\t\tB)Virat Kohli\n\nC)              \t\tD)Ricky Ponting\n");
				option = toupper(getch());
			}

			do
			{

				if (option == 81)
					exit(1);
				if (option == 65 || option == 66 || option == 67 || option == 68)
				{
					printf("%c", option);
					break;
				}
				else if ((option == 70) && (fiftyfiftycount == 0))
				{
					printf("%c", option);
					break;
				}
				else if ((option == 76) && (flipcount == 0))
				{
					printf("%c", option);
					break;
				}
				else
				{
					printf("\nWrong option selected.Press again.\n");
					option = toupper(getch()); ///ASCII of S=83,Q=81,R=82;
				}

			} while (1);

			if (toupper(option) == 'Q')
				exit(1);

			else if (toupper(option) == 'L' && flipcount == 0)
			{
				flipcount++;
				goto flip;
			}
			if (toupper(option) == 'B')
				printf("\n\nCorrect!!!");
			else if (toupper(option) == 'A' || toupper(option) == 'C' || toupper(option) == 'D')
			{
				printf("\n\nWrong!!! The correct answer is B)Virat Kohli");
				getch();
				goto score;
				break;
			}
			break;

		case 28:
			printf("\n\n\nWhich famous personality is related to Chittorgarh?");
			printf("\n\nA)Chaudhary Charan Singh\t\tB)Mother Teresa\n\nC)Maharana Pratap\t\tD)Gandhiji\n");
			option = toupper(getch());
			if ((fiftyfiftycount < 1) && (toupper(option) == 'F'))
			{
				fiftyfiftycount++;
				system("cls");
				printf("\n\n\nWhich famous personality is related to Chittorgarh?");
				printf("\n\nA)                      \t\tB)Mother Teresa\n\nC)Maharana Pratap\t\tD)         \n");
				option = toupper(getch());
			}

			do
			{

				if (option == 81)
					exit(1);
				if (option == 65 || option == 66 || option == 67 || option == 68)
				{
					printf("%c", option);
					break;
				}
				else if ((option == 70) && (fiftyfiftycount == 0))
				{
					printf("%c", option);
					break;
				}
				else if ((option == 76) && (flipcount == 0))
				{
					printf("%c", option);
					break;
				}
				else
				{
					printf("\nWrong option selected.Press again.\n");
					option = toupper(getch()); ///ASCII of S=83,Q=81,R=82;
				}

			} while (1);

			if (toupper(option) == 'Q')
				exit(1);

			else if (toupper(option) == 'L' && flipcount == 0)
			{
				flipcount++;
				goto flip;
			}
			if (toupper(option) == 'C')
				printf("\n\nCorrect!!!");
			else if (toupper(option) == 'A' || toupper(option) == 'D' || toupper(option) == 'B')
			{
				printf("\n\nWrong!!! The correct answer is C)Maharana Pratap");
				getch();
				goto score;
				break;
			}
			break;
		case 29:
			printf("\n\n\nWho was founder of Arya Samaj?");
			printf("\n\nA)Swami Dayanand Saraswati\tB)Swami Vivekanad\n\nC)Raja Ram Mohan Rai\t\tD)Gandhiji\n");
			option = toupper(getch());
			if ((fiftyfiftycount < 1) && (toupper(option) == 'F'))
			{
				fiftyfiftycount++;
				system("cls");
				printf("\n\n\nWho was founder of Arya Samaj?");
				printf("\n\nA)Swami Dayanand Saraswati\tB)Swami Vivekanad\n\nC)              \t\tD)                 \n");
				option = toupper(getch());
			}

			do
			{

				if (option == 81)
					exit(1);
				if (option == 65 || option == 66 || option == 67 || option == 68)
				{
					printf("%c", option);
					break;
				}
				else if ((option == 70) && (fiftyfiftycount == 0))
				{
					printf("%c", option);
					break;
				}
				else if ((option == 76) && (flipcount == 0))
				{
					printf("%c", option);
					break;
				}
				else
				{
					printf("\nWrong option selected.Press again.\n");
					option = toupper(getch()); ///ASCII of S=83,Q=81,R=82;
				}

			} while (1);

			if (toupper(option) == 'Q')
				exit(1);

			else if (toupper(option) == 'L' && flipcount == 0)
			{
				flipcount++;
				goto flip;
			}
			if (toupper(option) == 'A')
				printf("\n\nCorrect!!!");
			else if (toupper(option) == 'D' || toupper(option) == 'C' || toupper(option) == 'B')
			{
				printf("\n\nWrong!!! The correct answer is A)Swami Dayanand Saraswati");
				getch();
				goto score;
				break;
			}
			break;
		case 30:
			printf("\n\n\nWhich of following is not an example of Rabi Crop?");
			printf("\n\nA)Wheat\t\tB)Barley\n\nC)Gram\t\tD)Rice\n");
			option = toupper(getch());
			if ((fiftyfiftycount < 1) && (toupper(option) == 'F'))
			{
				fiftyfiftycount++;
				system("cls");
				printf("\n\n\nWhich of following is not an example of Rabi Crop?");
				printf("\n\nA)       \t\tB)Barley\n\nC)      \t\tD)Rice\n");
				option = toupper(getch());
			}

			do
			{

				if (option == 81)
					exit(1);
				if (option == 65 || option == 66 || option == 67 || option == 68)
				{
					printf("%c", option);
					break;
				}
				else if ((option == 70) && (fiftyfiftycount == 0))
				{
					printf("%c", option);
					break;
				}
				else if ((option == 76) && (flipcount == 0))
				{
					printf("%c", option);
					break;
				}
				else
				{
					printf("\nWrong option selected.Press again.\n");
					option = toupper(getch()); ///ASCII of S=83,Q=81,R=82;
				}

			} while (1);

			if (toupper(option) == 'Q')
				exit(1);

			else if (toupper(option) == 'L' && flipcount == 0)
			{
				flipcount++;
				goto flip;
			}
			if (toupper(option) == 'D')
			{
				printf("\n\nCorrect!!!");
			}
			else if (toupper(option) == 'A' || toupper(option) == 'C' || toupper(option) == 'B')
			{
				printf("\n\nWrong!!! The correct answer is D)Rice");
				getch();
				goto score;
				break;
			}

			break;
		case 31:
			printf("\n\n\nWhere is Gir National Park situated?");
			printf("\n\nA)Gujarat\t\tB)Kerala\n\nC)Jharkhand\t\tD)Karnataka\n");
			option = toupper(getch());
			if ((fiftyfiftycount < 1) && (toupper(option) == 'F'))
			{
				fiftyfiftycount++;
				system("cls");
				printf("\n\n\nWhere is Gir National Park situated?");
				printf("\n\nA)Gujarat \t\tB)         \n\nC)          \t\tD)Karnataka\n");

				option = toupper(getch());
			}

			do
			{

				if (option == 81)
					exit(1);
				if (option == 65 || option == 66 || option == 67 || option == 68)
				{
					printf("%c", option);
					break;
				}
				else if ((option == 70) && (fiftyfiftycount == 0))
				{
					printf("%c", option);
					break;
				}
				else if ((option == 76) && (flipcount == 0))
				{
					printf("%c", option);
					break;
				}
				else
				{
					printf("\nWrong option selected.Press again.\n");
					option = toupper(getch()); ///ASCII of S=83,Q=81,R=82;
				}

			} while (1);

			if (toupper(option) == 'Q')
				exit(1);

			else if (toupper(option) == 'L' && flipcount == 0)
			{
				flipcount++;
				goto flip;
			}
			if (toupper(option) == 'A')
				printf("\n\nCorrect!!!");
			else if (toupper(option) == 'B' || toupper(option) == 'C' || toupper(option) == 'D')
			{
				printf("\n\nWrong!!! The correct answer is A)Gujarat");
				getch();
				goto score;
				break;
			}
			break;
		case 32:
			printf("\n\n\nWhat is the Highest attainable rank in Army?");
			printf("\n\nA)general\t\tB)Major\n\nC)Captain\t\tD)Feild Marshal\n");
			option = toupper(getch());
			if ((fiftyfiftycount < 1) && (toupper(option) == 'F'))
			{
				fiftyfiftycount++;
				system("cls");
				printf("\n\n\nWhat is the Highest attainable rank in Army?");
				printf("\n\nA)         \t\tB)        \n\nC)Captain\t\tD)Field Marshal\n");
				option = toupper(getch());
			}

			do
			{

				if (option == 81)
					exit(1);
				if (option == 65 || option == 66 || option == 67 || option == 68)
				{
					printf("%c", option);
					break;
				}
				else if ((option == 70) && (fiftyfiftycount == 0))
				{
					printf("%c", option);
					break;
				}
				else if ((option == 76) && (flipcount == 0))
				{
					printf("%c", option);
					break;
				}
				else
				{
					printf("\nWrong option selected.Press again.\n");
					option = toupper(getch()); ///ASCII of S=83,Q=81,R=82;
				}

			} while (1);

			if (toupper(option) == 'Q')
				exit(1);

			else if (toupper(option) == 'L' && flipcount == 0)
			{
				flipcount++;
				goto flip;
			}
			if (toupper(option) == 'D')
				printf("\n\nCorrect!!!");
			else if (toupper(option) == 'A' || toupper(option) == 'C' || toupper(option) == 'B')
			{
				printf("\n\nWrong!!! The correct answer is D)Field Marshal");
				getch();
				goto score;
				break;
			}
			break;
		case 33:
			printf("\n\n\nWhat is the study of insects called?");
			printf("\n\nA)Chronology\t\tB)Ecology\n\nC)Anatomy\t\tD)Astrology\n");
			option = toupper(getch());
			if ((fiftyfiftycount < 1) && (toupper(option) == 'F'))
			{
				fiftyfiftycount++;
				system("cls");
				printf("\n\n\nWhat is the study of insects called?");
				printf("\n\nA)            \t\tB)Ecology\n\nC)          \t\tD)Astrology\n");
				option = toupper(getch());
			}

			do
			{

				if (option == 81)
					exit(1);
				if (option == 65 || option == 66 || option == 67 || option == 68)
				{
					printf("%c", option);
					break;
				}
				else if ((option == 70) && (fiftyfiftycount == 0))
				{
					printf("%c", option);
					break;
				}
				else if ((option == 76) && (flipcount == 0))
				{
					printf("%c", option);
					break;
				}
				else
				{
					printf("\nWrong option selected.Press again.\n");
					option = toupper(getch()); ///ASCII of S=83,Q=81,R=82;
				}

			} while (1);

			if (toupper(option) == 'Q')
				exit(1);

			else if (toupper(option) == 'L' && flipcount == 0)
			{
				flipcount++;
				goto flip;
			}

			if (toupper(option) == 'B')
				printf("\n\nCorrect!!!");
			else if (toupper(option) == 'A' || toupper(option) == 'C' || toupper(option) == 'D')
			{
				printf("\n\nWrong!!! The correct answer is B)Ecology");
				getch();
				goto score;
				break;
			}
			break;

		case 34:
			printf("\n\n\nWho was the First living being sent in space?");
			printf("\n\nA)Louika\t\tB)Neil Armstrong\n\nC)Buzz Aldrin\t\tD)Kalpana Chawla\n");
			option = toupper(getch());
			if ((fiftyfiftycount < 1) && (toupper(option) == 'F'))
			{
				fiftyfiftycount++;
				system("cls");
				printf("\n\n\nWho was the First living being sent in space?");
				printf("\n\nA)Louika\t\tB)             \n\nC)          \t\tD)Kalpana Chawla\n");
				option = toupper(getch());
			}

			do
			{

				if (option == 81)
					exit(1);
				if (option == 65 || option == 66 || option == 67 || option == 68)
				{
					printf("%c", option);
					break;
				}
				else if ((option == 70) && (fiftyfiftycount == 0))
				{
					printf("%c", option);
					break;
				}
				else if ((option == 76) && (flipcount == 0))
				{
					printf("%c", option);
					break;
				}
				else
				{
					printf("\nWrong option selected.Press again.\n");
					option = toupper(getch()); ///ASCII of S=83,Q=81,R=82;
				}

			} while (1);

			if (toupper(option) == 'Q')
				exit(1);

			else if (toupper(option) == 'L' && flipcount == 0)
			{
				flipcount++;
				goto flip;
			}
			if (toupper(option) == 'A')
				printf("\n\nCorrect!!!");
			else if (toupper(option) == 'D' || toupper(option) == 'C' || toupper(option) == 'B')
			{
				printf("\n\nWrong!!! The correct answer is A)Louika");
				getch();
				goto score;
				break;
			}
			break;

		case 35:
			printf("\n\n\nName the device used for measuring humidity in Air?");
			printf("\n\nA)Hygrometer\t\tB)Barometer\n\nC)Audiometer\t\tD)Aerometer\n");
			option = toupper(getch());
			if ((fiftyfiftycount < 1) && (toupper(option) == 'F'))
			{
				fiftyfiftycount++;
				system("cls");
				printf("\n\n\nName the device used for measuring humidity in Air?");
				printf("\n\nA)Hygrometer\t\tB)             \n\nC)            \t\tD)Aerometer\n");
				option = toupper(getch());
			}

			do
			{

				if (option == 81)
					exit(1);
				if (option == 65 || option == 66 || option == 67 || option == 68)
				{
					printf("%c", option);
					break;
				}
				else if ((option == 70) && (fiftyfiftycount == 0))
				{
					printf("%c", option);
					break;
				}
				else if ((option == 76) && (flipcount == 0))
				{
					printf("%c", option);
					break;
				}
				else
				{
					printf("\nWrong option selected.Press again.\n");
					option = toupper(getch()); ///ASCII of S=83,Q=81,R=82;
				}

			} while (1);

			if (toupper(option) == 'Q')
				exit(1);

			else if (toupper(option) == 'L' && flipcount == 0)
			{
				flipcount++;
				goto flip;
			}
			if (toupper(option) == 'A')
				printf("\n\nCorrect!!!");
			else if (toupper(option) == 'D' || toupper(option) == 'C' || toupper(option) == 'B')
			{
				printf("\n\nWrong!!! The correct answer is A)Hygrometer");
				getch();
				goto score;
				break;
			}
			break;
		case 36:
			printf("\n\n\nWhich disease is caused due to deficiency of Vitamin B12?");
			printf("\n\nA)Pellagra\t\tB)Scurvy\n\nC)Bloodlessness\t\tD)Rickets\n");
			option = toupper(getch());
			if ((fiftyfiftycount < 1) && (toupper(option) == 'F'))
			{
				fiftyfiftycount++;
				system("cls");
				printf("\n\n\nWhich disease is caused due to deficiency of Vitamin B12?");
				printf("\n\nA)Pellagra\t\tB)        \n\nC)Bloodlessness\t\tD)         \n");
				option = toupper(getch());
			}

			do
			{

				if (option == 81)
					exit(1);
				if (option == 65 || option == 66 || option == 67 || option == 68)
				{
					printf("%c", option);
					break;
				}
				else if ((option == 70) && (fiftyfiftycount == 0))
				{
					printf("%c", option);
					break;
				}
				else if ((option == 76) && (flipcount == 0))
				{
					printf("%c", option);
					break;
				}
				else
				{
					printf("\nWrong option selected.Press again.\n");
					option = toupper(getch()); ///ASCII of S=83,Q=81,R=82;
				}

			} while (1);

			if (toupper(option) == 'Q')
				exit(1);

			else if (toupper(option) == 'L' && flipcount == 0)
			{
				flipcount++;
				goto flip;
			}
			if (toupper(option) == 'C')
				printf("\n\nCorrect!!!");
			else if (toupper(option) == 'A' || toupper(option) == 'D' || toupper(option) == 'B')
			{
				printf("\n\nWrong!!! The correct answer is C)Bloodlessness");
				getch();
				goto score;
				break;
			}
			break;
		case 37:
			printf("\n\n\nCataract is related to which body part?");
			printf("\n\nA)Eyes\t\t\tB)Lungs\n\nC)Intestine\t\tD)Blood\n");
			option = toupper(getch());
			if ((fiftyfiftycount < 1) && (toupper(option) == 'F'))
			{
				fiftyfiftycount++;
				system("cls");
				printf("\n\n\nCataract is related to which body part?");
				printf("\n\nA)Eyes\t\t\tB)      \n\nC)            \t\tD)Blood\n");
				option = toupper(getch());
			}

			do
			{

				if (option == 81)
					exit(1);
				if (option == 65 || option == 66 || option == 67 || option == 68)
				{
					printf("%c", option);
					break;
				}
				else if ((option == 70) && (fiftyfiftycount == 0))
				{
					printf("%c", option);
					break;
				}
				else if ((option == 76) && (flipcount == 0))
				{
					printf("%c", option);
					break;
				}
				else
				{
					printf("\nWrong option selected.Press again.\n");
					option = toupper(getch()); ///ASCII of S=83,Q=81,R=82;
				}

			} while (1);

			if (toupper(option) == 'Q')
				exit(1);

			else if (toupper(option) == 'L' && flipcount == 0)
			{
				flipcount++;
				goto flip;
			}
			if (toupper(option) == 'A')
				printf("\n\nCorrect!!!");
			else if (toupper(option) == 'D' || toupper(option) == 'C' || toupper(option) == 'B')
			{
				printf("\n\nWrong!!! The correct answer is A)Eyes");
				getch();
				goto score;
				break;
			}
			break;

		case 38:
			printf("\n\n\nWho invented Petrol Car?");
			printf("\n\nA)Benjamin Franklin\t\tB)Karl Benz\n\nC)Thomas Alva Edison\t\tD)Louis Prince\n");
			option = toupper(getch());
			if ((fiftyfiftycount < 1) && (toupper(option) == 'F'))
			{
				fiftyfiftycount++;
				system("cls");
				printf("\n\n\nWho invented Petrol Car?");
				printf("\n\nA)Benjamin Franklin\t\tB)Karl Benz\n\nC)                    \t\tD)            \n");

				option = toupper(getch());
			}

			do
			{

				if (option == 81)
					exit(1);
				if (option == 65 || option == 66 || option == 67 || option == 68)
				{
					printf("%c", option);
					break;
				}
				else if ((option == 70) && (fiftyfiftycount == 0))
				{
					printf("%c", option);
					break;
				}
				else if ((option == 76) && (flipcount == 0))
				{
					printf("%c", option);
					break;
				}
				else
				{
					printf("\nWrong option selected.Press again.\n");
					option = toupper(getch()); ///ASCII of S=83,Q=81,R=82;
				}

			} while (1);

			if (toupper(option) == 'Q')
				exit(1);

			else if (toupper(option) == 'L' && flipcount == 0)
			{
				flipcount++;
				goto flip;
			}
			if (toupper(option) == 'B')
				printf("\n\nCorrect!!!");
			else if (toupper(option) == 'A' || toupper(option) == 'C' || toupper(option) == 'D')
			{
				printf("\n\nWrong!!! The correct answer is B)Karl Benz");
				getch();
				goto score;
				break;
			}

			break;
		case 39:
			printf("\n\n\nWhen was the First Battle of Panipat fought?");
			printf("\n\nA)1192 A.D.\t\tB)1526 A.D.\n\nC)1527 A.D.\t\tD)1761 A.D.\n");
			option = toupper(getch());
			if ((fiftyfiftycount < 1) && (toupper(option) == 'F'))
			{
				fiftyfiftycount++;
				system("cls");
				printf("\n\n\nWhen was the First Battle of Panipat fought?");
				printf("\n\nA)            \t\tB)1526 A.D.\n\nC)1527 A.D.\t\tD)            \n");

				option = toupper(getch());
			}

			do
			{

				if (option == 81)
					exit(1);
				if (option == 65 || option == 66 || option == 67 || option == 68)
				{
					printf("%c", option);
					break;
				}
				else if ((option == 70) && (fiftyfiftycount == 0))
				{
					printf("%c", option);
					break;
				}
				else if ((option == 76) && (flipcount == 0))
				{
					printf("%c", option);
					break;
				}
				else
				{
					printf("\nWrong option selected.Press again.\n");
					option = toupper(getch()); ///ASCII of S=83,Q=81,R=82;
				}

			} while (1);

			if (toupper(option) == 'Q')
				exit(1);

			else if (toupper(option) == 'L' && flipcount == 0)
			{
				flipcount++;
				goto flip;
			}
			if (toupper(option) == 'B')
				printf("\n\nCorrect!!!");
			else if (toupper(option) == 'A' || toupper(option) == 'C' || toupper(option) == 'D')
			{
				printf("\n\nWrong!!! The correct answer is B)1526 A.D.");
				getch();
				goto score;
				break;
			}
			break;
		case 40:
			printf("\n\n\nWhat is the full form of JCO?");
			printf("\n\nA)Junior Commisioned Officer\t\tB)Junior Corporate Office\n\nC)Joint Corporal Organisation\t\tD)Joint Commisioned Officer\n");
			option = toupper(getch());
			if ((fiftyfiftycount < 1) && (toupper(option) == 'F'))
			{
				fiftyfiftycount++;
				system("cls");
				printf("\n\n\nWhat is the full form of JCO?");
				printf("\n\nA)Junior Commisioned Officer\t\tB)                          \n\nC)\t\tD)Joint Commisioned Officer\n");
				option = toupper(getch());
			}

			do
			{

				if (option == 81)
					exit(1);
				if (option == 65 || option == 66 || option == 67 || option == 68)
				{
					printf("%c", option);
					break;
				}
				else if ((option == 70) && (fiftyfiftycount == 0))
				{
					printf("%c", option);
					break;
				}
				else if ((option == 76) && (flipcount == 0))
				{
					printf("%c", option);
					break;
				}
				else
				{
					printf("\nWrong option selected.Press again.\n");
					option = toupper(getch()); ///ASCII of S=83,Q=81,R=82;
				}

			} while (1);

			if (toupper(option) == 'Q')
				exit(1);

			else if (toupper(option) == 'L' && flipcount == 0)
			{
				flipcount++;
				goto flip;
			}
			if (toupper(option) == 'A')
				printf("\n\nCorrect!!!");
			else if (toupper(option) == 'D' || toupper(option) == 'C' || toupper(option) == 'B')
			{
				printf("\n\nWrong!!! The correct answer is A)Junior Commisioned Officer");
				getch();
				goto score;
				break;
			}
			break;
		case 41:
			printf("\n\n\nWho was the author of Candida?");
			printf("\n\nA)Karl Max\t\tB) G.B.Shaw\n\nC)Charles Dickens\tD)Jonathan Swift\n");
			option = toupper(getch());
			if ((fiftyfiftycount < 1) && (toupper(option) == 'F'))
			{
				fiftyfiftycount++;
				system("cls");
				printf("\n\n\nWho was the author of Candida?");
				printf("\n\nA)          \t\tB) G.B.Shaw\n\nC)                 \tD)Jonathan Swift\n");
				option = toupper(getch());
			}

			do
			{

				if (option == 81)
					exit(1);
				if (option == 65 || option == 66 || option == 67 || option == 68)
				{
					printf("%c", option);
					break;
				}
				else if ((option == 70) && (fiftyfiftycount == 0))
				{
					printf("%c", option);
					break;
				}
				else if ((option == 76) && (flipcount == 0))
				{
					printf("%c", option);
					break;
				}
				else
				{
					printf("\nWrong option selected.Press again.\n");
					option = toupper(getch()); ///ASCII of S=83,Q=81,R=82;
				}

			} while (1);

			if (toupper(option) == 'Q')
				exit(1);

			else if (toupper(option) == 'L' && flipcount == 0)
			{
				flipcount++;
				goto flip;
			}
			if (toupper(option) == 'B')
				printf("\n\nCorrect!!!");
			else if (toupper(option) == 'A' || toupper(option) == 'C' || toupper(option) == 'D')
			{
				printf("\n\nWrong!!! The correct answer is B)G.B.Shaw");
				getch();
				goto score;
				break;
			}
			break;
		case 42:
			printf("\n\n\nWhat was the first commercially available Programming Language?");
			printf("\n\nA)DotNet\t\tB)Fortran\n\nC)Java\t\tD)JavaScript\n");
			option = toupper(getch());
			if ((fiftyfiftycount < 1) && (toupper(option) == 'F'))
			{
				fiftyfiftycount++;
				system("cls");
				printf("\n\n\nWhat was the first commercially available Programming Language?");
				printf("\n\nA)           \t\tB)Fortran\n\nC)Java\t\tD)              \n");
				option = toupper(getch());
			}

			do
			{

				if (option == 81)
					exit(1);
				if (option == 65 || option == 66 || option == 67 || option == 68)
				{
					printf("%c", option);
					break;
				}
				else if ((option == 70) && (fiftyfiftycount == 0))
				{
					printf("%c", option);
					break;
				}
				else if ((option == 76) && (flipcount == 0))
				{
					printf("%c", option);
					break;
				}
				else
				{
					printf("\nWrong option selected.Press again.\n");
					option = toupper(getch()); ///ASCII of S=83,Q=81,R=82;
				}

			} while (1);

			if (toupper(option) == 'Q')
				exit(1);

			else if (toupper(option) == 'L' && flipcount == 0)
			{
				flipcount++;
				goto flip;
			}
			if (toupper(option) == 'B')
				printf("\n\nCorrect!!!");
			else if (toupper(option) == 'A' || toupper(option) == 'C' || toupper(option) == 'D')
			{
				printf("\n\nWrong!!! The correct answer is B)Fortran");
				getch();
				goto score;
				break;
			}
			break;

		case 43:
			printf("\n\n\nWhen was the First Summer Olympics held?");
			printf("\n\nA)1924\t\tB)1869\n\nC)1896\t\tD)1900\n");
			option = toupper(getch());
			if ((fiftyfiftycount < 1) && (toupper(option) == 'F'))
			{
				fiftyfiftycount++;
				system("cls");
				printf("\n\n\nWhen was the First Summer Olympics held?");
				printf("\n\nA)     \t\tB)1869\n\nC)1896\t\tD)       \n");
				option = toupper(getch());
			}

			do
			{

				if (option == 81)
					exit(1);
				if (option == 65 || option == 66 || option == 67 || option == 68)
				{
					printf("%c", option);
					break;
				}
				else if ((option == 70) && (fiftyfiftycount == 0))
				{
					printf("%c", option);
					break;
				}
				else if ((option == 76) && (flipcount == 0))
				{
					printf("%c", option);
					break;
				}
				else
				{
					printf("\nWrong option selected.Press again.\n");
					option = toupper(getch()); ///ASCII of S=83,Q=81,R=82;
				}

			} while (1);

			if (toupper(option) == 'Q')
				exit(1);

			else if (toupper(option) == 'L' && flipcount == 0)
			{
				flipcount++;
				goto flip;
			}
			if (toupper(option) == 'C')
				printf("\n\nCorrect!!!");
			else if (toupper(option) == 'A' || toupper(option) == 'D' || toupper(option) == 'B')
			{
				printf("\n\nWrong!!! The correct answer is C)1896");
				getch();
				goto score;
				break;
			}

			break;
		case 44:
			printf("\n\n\nWhere is the Ambedkar Stadium situated?");
			printf("\n\nA)Mumbai\t\tB)Kolkata\n\nC)Delhi\t\t\tD)Hyderabad\n");
			option = toupper(getch());
			if ((fiftyfiftycount < 1) && (toupper(option) == 'F'))
			{
				fiftyfiftycount++;
				system("cls");
				printf("\n\n\nWhere is the Ambedkar Stadium situated?");
				printf("\n\nA)Mumbai\t\tB)         \n\nC)Delhi\t\tD)             \n");
				option = toupper(getch());
			}

			do
			{

				if (option == 81)
					exit(1);
				if (option == 65 || option == 66 || option == 67 || option == 68)
				{
					printf("%c", option);
					break;
				}
				else if ((option == 70) && (fiftyfiftycount == 0))
				{
					printf("%c", option);
					break;
				}
				else if ((option == 76) && (flipcount == 0))
				{
					printf("%c", option);
					break;
				}
				else
				{
					printf("\nWrong option selected.Press again.\n");
					option = toupper(getch()); ///ASCII of S=83,Q=81,R=82;
				}

			} while (1);

			if (toupper(option) == 'Q')
				exit(1);

			else if (toupper(option) == 'L' && flipcount == 0)
			{
				flipcount++;
				goto flip;
			}
			if (toupper(option) == 'C')
				printf("\n\nCorrect!!!");
			else if (toupper(option) == 'A' || toupper(option) == 'D' || toupper(option) == 'B')
			{
				printf("\n\nWrong!!! The correct answer is C)Delhi");
				getch();
				goto score;
				break;
			}
			break;

		case 45:
			printf("\n\n\nWhere will be OLYMPIC GAMES 2024 held?");
			printf("\n\nA)Tokyo\t\tB)Paris\n\nC)London\t\tD)Bejing\n");
			option = toupper(getch());
			if ((fiftyfiftycount < 1) && (toupper(option) == 'F'))
			{
				fiftyfiftycount++;
				system("cls");
				printf("\n\n\nWhere will be OLYMPIC GAMES 2024 held?");
				printf("\n\nA)      \t\tB)Paris\n\nC)         \t\tD)Bejing\n");
				option = toupper(getch());
			}

			do
			{

				if (option == 81)
					exit(1);
				if (option == 65 || option == 66 || option == 67 || option == 68)
				{
					printf("%c", option);
					break;
				}
				else if ((option == 70) && (fiftyfiftycount == 0))
				{
					printf("%c", option);
					break;
				}
				else if ((option == 76) && (flipcount == 0))
				{
					printf("%c", option);
					break;
				}
				else
				{
					printf("\nWrong option selected.Press again.\n");
					option = toupper(getch()); ///ASCII of S=83,Q=81,R=82;
				}

			} while (1);

			if (toupper(option) == 'Q')
				exit(1);

			else if (toupper(option) == 'L' && flipcount == 0)
			{
				flipcount++;
				goto flip;
			}
			if (toupper(option) == 'B')
				printf("\n\nCorrect!!!");
			else if (toupper(option) == 'A' || toupper(option) == 'C' || toupper(option) == 'D')
			{
				printf("\n\nWrong!!! The correct answer is B)Paris");
				getch();
				goto score;
				break;
			}
		flip:
			system("cls");
			printf("YOUR FLIPPED QUESTION IS");
			printf("\n\n\nAmerican Cup is related to which of the following sports:");
			printf("\n\nA)Golf\t\t\tB)Football\n\nC)Tennis\t\tD)Yacht Racing\n");
			option = toupper(getch());
			if ((fiftyfiftycount < 1) && (toupper(option) == 'F'))
			{
				fiftyfiftycount++;
				system("cls");
				printf("\n\n\nAmerican Cup is related to which of the following sports:");
				printf("\n\nA)      \t\tB)Football\n\nC)         \t\tD)Yacht Racing\n");
				option = toupper(getch());
			}

			do
			{

				if (option == 81)///ASCII of Q
					exit(1);
				if (option == 66 || option == 68||option==67||option==65)
				{
					printf("%c", option);
					break;
				}
				else
				{
					printf("\nWrong option selected.Press again.\n");
					option = toupper(getch());
				}

			} while (1);

			if (toupper(option) == 'Q')
				exit(1);

			if (toupper(option) == 'D')
				printf("\n\nCorrect!!!");
			else
                if (toupper(option) == 'B'||toupper(option) == 'C'||toupper(option) == 'A')
			{
				printf("\n\nWrong!!! The correct answer is D)Yacht Racing");
				getch();
				goto score;
				break;
			}

			break;
		}

		QuestionIndex++;
		QuestionAmount = amount[QuestionIndex];
		printf("\n Congratulations!!!You won Rupees %d!!!", QuestionAmount);
		printf("\nPress Enter to go to next question\n");
		getch();
		system("cls");
	}

score:
	system("cls");
	if (QuestionIndex == 0)
	{
		printf("\n\n*******************************************************************************************************************************************************************************************************************");
		printf("\n\n\t\t\t\t\t\t\t\t\t\t\tSORRY! %s  YOU COULD NOT WIN ANY MONEY  ", strupr(name));
		printf("\n_________________________________________________________________________________________________________________________________________________________________________________________________________________");
		printf("\n\n\t\t\t\t\t\t\t\t\t\t\tTRY AGAIN NEXT TIME.");
	}
	else
	{
		printf("\n\n*******************************************************************************************************************************************************************************************************************");
		printf("\n\t\t\t\t\t\t\t\t\t\t\tCONGRATULATIONS  %s    ", strupr(name));
		printf("\n*******************************************************************************************************************************************************************************************************************");
		printf("\n\t\t\t\t\t\t\t\t\t\t\tYOU WON Rs %d !!\n\n\n", QuestionAmount);
	}
	printf("\n\n*******************************************************************************************************************************************************************************************************************");
	printf("\n\n\tBY: MANIKA AGARWAL \t SAKSHAM TYAGI \t SARTHAK SAINI \t PRIYANSHI GUPTA\n\n\n\n\n");
}

void rule()
{
	printf("\n\t\t> THERE WILL BE 15 QUESTIONS IN ALL. PRIZES STARTING FROM Rs 1 THOUSAND TO A JACKPOT PRIZE OF Rs 7 CRORES FOR QUESTION 15TH.");
	printf("\n\t\t> YOU WILL BE GIVEN 4 OPTIONS AND YOU HAVE TO PRESS A,B,C OR D FOR THE CORRECT OPTION.");
	printf("\n\t\t> QUESTIONS WILL BE ASKED CONTINUOUSLY, TILL THE CORRECT ANSWERS ARE GIVEN.");
	printf("\n\t\t> GAME WILL END IF INCORRECT ANSWER IS GIVEN AND YOU WILL GET THE AMOUNT EARNED TILL THE LAST CORRECT ANSWER  YOU GAVE.");
	printf("\n\t\t> FOR YOUR HELP, YOU ARE PROVIDED WITH TWO LIFELINES:\n\t\t\t>>50-50            : TWO INCORRECT OPTIONS WILL BE ERASED FROM THE SCREEN.\n\t\t\t>>FLIP THE QUESTION: A NEW QUESTION WILL APPEAR ON YOUR SCREEN.");
	printf("\n\t\t> YOU CAN USE BOTH LIFELINES ONLY ONCE.");
	printf("\n\n_________________________________________________________________________________________________________________________________________________________________________________________________________________");
	printf("\n\n\t\t\t\t\t\t\t\t\t\t\t!!ALL THE BEST!!\n");
}
