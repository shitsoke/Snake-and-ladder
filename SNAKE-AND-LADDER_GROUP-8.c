#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rd() //role dice
{
    srand(time(NULL)) ;
    int rem;

  for (int i=1; i<=1; i++)
  {
      rem=rand()%6+1;

      break;

  }

}

int AI() //role dice
{
	int rem;
	A:rem=rand()%7;
	if(rem==0)
		goto A;
	else
	return rem;
}


void displaychart(int curp,char player[1000])  //s&l board/chart
{
    int i,j,t,c,sft=0,diceres,pos1,pos2,pos3,pos4,pos5,pos6,posAI,back;


        if(curp==100)
		{
			printf("--------------------------------------------------------------------------\n");
			printf("\t!!!!!!!!!!!!!!!!!!   CONGRATULATIONS    !!!!!!!!!!!!!!!!!!");
			printf("\n\n\n           =============    Player %s wins=============\n\n\n", player);
			printf("       !!!!!!!!!!!!!!!!!!  Thanks For Playing  !!!!!!!!!!!!!!!!!!\n");
			printf("--------------------------------------------------------------------------\n");
			exit(0);
		}


        if(curp==101)
		{
			printf("--------------------------------------------------------------------------\n");
			printf("\t!!!!!!!!!!!!!!!!!!   CONGRATULATIONS    !!!!!!!!!!!!!!!!!!");
			printf("\n\n\n           =============    Player %s wins=============\n\n\n", player);
printf("       !!!!!!!!!!!!!!!!!!  Thanks For Playing  !!!!!!!!!!!!!!!!!!\n");
printf("--------------------------------------------------------------------------\n");

			exit(0);
		}
		if(curp==102)
		{
		   printf("--------------------------------------------------------------------------\n");
			printf("\t!!!!!!!!!!!!!!!!!!   CONGRATULATIONS    !!!!!!!!!!!!!!!!!!");
			printf("\n\n\n           =============    Player %s wins=============\n\n\n", player);
printf("       !!!!!!!!!!!!!!!!!!  Thanks For Playing  !!!!!!!!!!!!!!!!!!\n");
printf("--------------------------------------------------------------------------\n");	exit(0);
		}
		if(curp==103)
		{
			printf("--------------------------------------------------------------------------\n");
			printf("\t!!!!!!!!!!!!!!!!!!   CONGRATULATIONS    !!!!!!!!!!!!!!!!!!");
			printf("\n\n\n           =============    Player %s wins=============\n\n\n", player);
printf("       !!!!!!!!!!!!!!!!!!  Thanks For Playing  !!!!!!!!!!!!!!!!!!\n");
printf("--------------------------------------------------------------------------\n");
	exit(0);
		}
		if(curp==104)
		{
			printf("--------------------------------------------------------------------------\n");
			printf("\t!!!!!!!!!!!!!!!!!!   CONGRATULATIONS    !!!!!!!!!!!!!!!!!!");
			printf("\n\n\n           =============    Player %s wins=============\n\n\n", player);
printf("       !!!!!!!!!!!!!!!!!!  Thanks For Playing  !!!!!!!!!!!!!!!!!!\n");
printf("--------------------------------------------------------------------------\n");
	exit(0);
		}
		if(curp==105)
		{
			printf("--------------------------------------------------------------------------\n");
			printf("\t!!!!!!!!!!!!!!!!!!   CONGRATULATIONS    !!!!!!!!!!!!!!!!!!");
			printf("\n\n\n           =============    Player %s wins=============\n\n\n", player);
printf("       !!!!!!!!!!!!!!!!!!  Thanks For Playing  !!!!!!!!!!!!!!!!!!\n");
printf("--------------------------------------------------------------------------\n");
			exit(0);
		}
		if(curp==106)
		{
			printf("--------------------------------------------------------------------------\n");
			printf("\t!!!!!!!!!!!!!!!!!!   CONGRATULATIONS    !!!!!!!!!!!!!!!!!!");
			printf("\n\n\n           =============    Player %s wins=============\n\n\n", player);
printf("       !!!!!!!!!!!!!!!!!!  Thanks For Playing  !!!!!!!!!!!!!!!!!!\n");
printf("--------------------------------------------------------------------------\n");
exit(0);
		}
		if(curp==107)
		{
			printf("--------------------------------------------------------------------------\n");
			printf("\t!!!!!!!!!!!!!!!!!!   CONGRATULATIONS    !!!!!!!!!!!!!!!!!!");
			printf("\n\n\n           =============    Player %s wins=============\n\n\n", player);
printf("       !!!!!!!!!!!!!!!!!!  Thanks For Playing  !!!!!!!!!!!!!!!!!!\n");
printf("--------------------------------------------------------------------------\n");
	exit(0);
		}
		if(curp==108)
		{
			printf("--------------------------------------------------------------------------\n");
			printf("\t!!!!!!!!!!!!!!!!!!   CONGRATULATIONS    !!!!!!!!!!!!!!!!!!");
			printf("\n\n\n           =============    Player %s wins=============\n\n\n", player);

printf("       !!!!!!!!!!!!!!!!!!  Thanks For Playing  !!!!!!!!!!!!!!!!!!\n");
printf("--------------------------------------------------------------------------\n");
	exit(0);
		}
		if(curp==109)
		{
			printf("--------------------------------------------------------------------------\n");
			printf("\t!!!!!!!!!!!!!!!!!!   CONGRATULATIONS    !!!!!!!!!!!!!!!!!!");
			printf("\n\n\n           =============    Player %s wins=============\n\n\n", player);
printf("       !!!!!!!!!!!!!!!!!!  Thanks For Playing  !!!!!!!!!!!!!!!!!!\n");			exit(0);
printf("--------------------------------------------------------------------------\n");
		}

	for(i=10;i>0;i--)
	{
		t=i-1;
		if((sft%2)==0)
		{
			c=0;//Starting
			for(j=10;j>=1;j--)
			{
				diceres=(i*j)+(t*c++);

				if(curp==diceres)
					printf("%s\t",player);
				else
				printf("%d\t",diceres);

			}
			sft++;
		}
		else
		{
			c=1;
			for(j=1;j<=10;j++)   //row
			{
				diceres=(i*j)+(t*c--);

				if(curp==diceres)
					printf("%s\t",player);
				else
					printf("%d\t",diceres);
			}


			sft++;
		}
		printf("\n\n");
	}



	printf("--------------------------------------------------------------------------\n");
}
void main()
{
    int i,dice,diceAI,cur_pos1=0,cur_pos2=0,cur_pos3=0,cur_pos4=0,cur_pos5=0,cur_pos6=0,cur_pos7=0;
    int SG, ABOUT, HTP, EXIT, back, number,count;

	char ch, plyr1,plyr2,plyr3,plyr4,plyr5,plyr6;
	char name_1[6],name_2[6],name_3[6],name_4[6],name_5[6],name_6[6];
    char menu;
    MM:while(1)
    {

        printf("================================================================================================================\n");
        printf("\t\t\t   !!!!!!!!!!!!!!!!!!!    MAIN MENU    !!!!!!!!!!!!!!!!!!!\n\n");
        printf("================================================================================================================\n");
        printf("\t\t\t\t\t\t [1] START GAME \n\n\t\t\t\t\t\t [2] ABOUT  \n\n\t\t\t\t\t\t [3] HOW TO PLAY \n\n\t\t\t\t\t\t [4] EXIT \n\n");
        scanf("%s", &menu);

        switch(menu)
        {
            case '1':
            system("cls");
            goto SG;
            break;

            case '2':
            system("cls");
            printf("________________________________________________________________________________________________________________\n");
            printf("                                                   ABOUT\n");
            printf("________________________________________________________________________________________________________________\n");

            printf("                                                GROUP EIGHT\n\n\n");
            printf(" ");
            printf("                              LEAD DEVELOPER:\n\n");
            printf("                                            CHRISTIAN JAYE FERNAN\n\n");
            printf("                              MEMBERS DEVELOPER:\n\n");
            printf("                                                JENNY REDELOSA\n\n");
            printf("                                                  NYSSA PAUYA\n\n\n\n");

            printf("                                     This game is created for the semifinal\n");
            printf("                                        and final requirement of BSCPE 1A.\n\n\n\n");
            printf(" \n");

            break;

            case '3':
            system("cls");
            printf("________________________________________________________________________________________________________________\n");
            printf("\t\t\t\t\t        HOW TO PLAY\n");
            printf("________________________________________________________________________________________________________________\n");
            printf("                                                 SNAKE AND LADDERS\n");

            printf("GAMEPLAY\n");
            printf(" \n");
            printf("     The players will move their pieces from left to right, starting at 1,following the numbers on the board,  \n");
            printf("then the next row from right to left and repeat.If a player rolls a 4, then the player would move \n");
            printf("                                     their piece four places.\n");
            printf("            \n");
        printf("================================================================================================================\n");
            printf("SNAKES\n");
            printf(" \n");
            printf(" When a player lands on a top of a snake, their playing piece will slide down to the bottom of the snake\n.");
            printf(" Whereas landing on the bottom of a snake the player will remain in the same spot until their next turn.\n");

            printf(" \n");
        printf("================================================================================================================\n");
            printf("LADDERS\n");
            printf("     When a player lands at the base of a ladder, it immediately climbs to the top of the ladder.\n");
            printf("        Whereas landing at the top of a ladder the player will stay there until the next turn. \n");
            printf("The player does not move to the bottom of the ladder.Whereas landing at the top of a ladder the player \n");
            printf("      will stay there until the next turn. The player does not move to the bottom of the ladder.\n");
            printf(" \n");
        printf("================================================================================================================\n");
			printf("POWERUPS\n");
            printf(" \n");
            printf(" When a player lands on power-up tile, their playing piece will get a special powers that can effect other players\n.");


            printf(" \n");
        printf("================================================================================================================\n");
            printf("WINNING THE GAME\n");
            printf("  The first player that reaches the highest space on the board, 100, wins the game. To win the player must need \n");
            printf("   to roll the exact number to get you to the last space. If the player rolls a higher number than needed to \n");
            printf("==================================================================================================================\n");
            printf(" \n");



            break;

            case '4':return 0; //exit
            break;

            default:
                printf("\n\n\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
                printf("\n\n\t\t\t\t    Incorrect choice.Try Again\n");
                printf("\n\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
        }
    }


    SG:while(2)
	{
 printf("________________________________________________________________________________________________________________\n");
         printf("\t\t\t   !!!!!!!!!!!!!!!!!!!    HOW MANY WILL PLAY    !!!!!!!!!!!!!!!!!!!\n\n");
 printf("________________________________________________________________________________________________________________\n");
         printf("\t\t\t\t\t\t     [a] 1 PLAYER \n\n\t\t\t\t\t\t     [b] 2 PLAYERS \n\n\t\t\t\t\t\t     [c] 3 PLAYERS \n\n\t\t\t\t\t\t     [d] 4 PLAYERS \n\n\t\t\t\t\t\t     [e] 5 PLAYERS \n\n\t\t\t\t\t\t     [f] 6 PLAYERS \n\n\t\t\t\t\t\t     [g] BACK TO MENU \n\n\t\t\t\t\t\t     [h] EXIT \n\n");
		printf("INPUT:  ");
		scanf("%s",&ch);


		switch(ch)
		{

			case 'a': //1 PLAYER
            system("cls");
            while(9)
                {
                      printf("----------------------------------------------------------------------------------------------------------------\n");
                      printf("SNAKE AND LADDER 1 PLAYER \n\n");
                      printf("----------------------------------------------------------------------------------------------------------------\n");
                      printf("Please Enter Four word Name\n\n");

                      printf("Enter Player 1 Name:  ");
                      scanf("%5s%n",&name_1, &count);


                      if (count == 5)
                        {
                     printf("\n\nEnter 1 to Play | Enter 2 to Rerturn\n");
                      printf("Input: ");
                    scanf("%d", &number);
                        while(number==1)
                       {
                          goto P1;
                          break;
                       }
                       while (number==2)
                          {
                            goto MM;
                            break;
                          }

                        }
                            else
                            {
                              printf("----------------------------------------------------------------------------------------------------------------\n");
                              printf("\n\n      !!!!!!!!!!! Error: please enter exactly 4 letters NAMES. !!!!!!!!!!!\n\n\n\n");
                              printf("----------------------------------------------------------------------------------------------------------------\n");
                            }

                  break;

                 }
                  break;


            case 'b'://2 PLAYER
                    system("cls");
            while(10)
                {
                      printf("----------------------------------------------------------------------------------------------------------------\n");
                      printf("SNAKE AND LADDER 2 PLAYERS \n\n");
                      printf("----------------------------------------------------------------------------------------------------------------\n");
                      printf("Please Enter Four word Name\n\n");

                      printf("Enter Player 1 Name:  ");
                      scanf("%5s%n",&name_1, &count);
                      printf("Enter Player 2 Name:  ");
                      scanf("%5s%n",&name_2, &count);




                      if (count == 5)
                        {
                     printf("\n\nEnter 1 to Play | Enter 2 to Rerturn\n");
                      printf("Input: ");
                    scanf("%d", &number);
                        while(number==1)
                       {
                          goto P2;
                          break;
                       }
                       while (number==2)
                          {
                            goto MM;
                            break;
                          }

                        }
                            else
                            {
                              printf("----------------------------------------------------------------------------------------------------------------\n");
                              printf("\n\n      !!!!!!!!!!! Error: please enter exactly 4 letters NAMES. !!!!!!!!!!!\n\n\n\n");
                              printf("----------------------------------------------------------------------------------------------------------------\n");
                            }

                  break;

                 }
                  break;



            case 'c'://3 PLAYER
                     system("cls");
            while(11)
                {
                      printf("----------------------------------------------------------------------------------------------------------------\n");
                      printf("SNAKE AND LADDER 3 PLAYERS \n\n");
                      printf("----------------------------------------------------------------------------------------------------------------\n");
                      printf("Please Enter Four word Name\n\n");

                      printf("Enter Player 1 Name:  ");
                      scanf("%5s%n",&name_1, &count);
                      printf("Enter Player 2 Name:  ");
                      scanf("%5s%n",&name_2, &count);
                      printf("Enter Player 3 Name:  ");
                      scanf("%5s%n",&name_3, &count);


                      if (count == 5)
                        {
                     printf("\n\nEnter 1 to Play | Enter 2 to Rerturn\n");
                      printf("Input: ");
                    scanf("%d", &number);
                        while(number==1)
                       {
                          goto P3;
                          break;
                       }
                       while (number==2)
                          {
                            goto MM;
                            break;
                          }

                        }
                            else
                            {
                              printf("----------------------------------------------------------------------------------------------------------------\n");
                              printf("\n\n      !!!!!!!!!!! Error: please enter exactly 4 letters NAMES. !!!!!!!!!!!\n\n\n\n");
                              printf("----------------------------------------------------------------------------------------------------------------\n");                            }

                            break;

                 }
                  break;



            case 'd'://4 PLAYER
                    system("cls");
            while(12)
            {



                      printf("----------------------------------------------------------------------------------------------------------------\n");
                      printf("SNAKE AND LADDER 4 PLAYERS \n\n");
                      printf("----------------------------------------------------------------------------------------------------------------\n");
                      printf("Please Enter Four word Name\n\n");

                      printf("Enter Player 1 Name:  ");
                      scanf("\n%5s%n",&name_1, &count);
                      printf("Enter Player 2 Name:  ");
                      scanf("\n%5s%n",&name_2, &count);
                      printf("Enter Player 3 Name:  ");
                      scanf("\n%5s%n",&name_3, &count);
                      printf("Enter Player 4 Name:  ");
                      scanf("%5s%n",&name_4, &count);



                      if (count == 5)
                        {
                     printf("\n\nEnter 1 to Play | Enter 2 to Rerturn\n");
                      printf("Input: ");
                    scanf("%d", &number);
                        while(number==1)
                       {
                          goto P4;
                          break;
                       }
                       while (number==2)
                          {
                            goto MM;
                            break;
                          }

                        }
                            else
                            {
                              printf("----------------------------------------------------------------------------------------------------------------\n");
                              printf("\n\n      !!!!!!!!!!! Error: please enter exactly 4 letters NAMES. !!!!!!!!!!!\n\n\n\n");
                              printf("----------------------------------------------------------------------------------------------------------------\n");
                            }

                  break;

                  }
                  break;


            case 'e'://5 PLAYER
                 system("cls");
                   while(12)
                   {


              printf("----------------------------------------------------------------------------------------------------------------\n");
                      printf("SNAKE AND LADDER 5 PLAYERS \n\n");
                      printf("----------------------------------------------------------------------------------------------------------------\n");
                      printf("Please Enter Four word Name\n\n");

                      printf("Enter Player 1 Name:  ");
                      scanf("%s%n",&name_1,&count);
                      printf("Enter Player 2 Name:  ");
                      scanf("%s%n",&name_2,&count);
                      printf("Enter Player 3 Name:  ");
                      scanf("%s%n",&name_3,&count);
                      printf("Enter Player 4 Name:  ");
                      scanf("%s%n",&name_4,&count);
                      printf("Enter Player 5 Name:  ");
                      scanf("%s%n",&name_5,&count);


                      if (count == 5)
                        {
                     printf("\n\nEnter 1 to Play | Enter 2 to Rerturn\n");
                      printf("Input: ");
                    scanf("%d", &number);
                        while(number==1)
                       {
                          goto P5;
                          break;
                       }
                       while (number==2)
                          {
                            goto MM;
                            break;
                          }

                        }
                            else
                            {
                              printf("----------------------------------------------------------------------------------------------------------------\n");
                              printf("\n\n      !!!!!!!!!!! Error: please enter exactly 4 letters NAMES. !!!!!!!!!!!\n\n\n\n");
                              printf("----------------------------------------------------------------------------------------------------------------\n");                            }

                            break;

                 }
                  break;


            case 'f'://6 PLAYER
                 system("cls");
                      while(13)
                {
                      printf("----------------------------------------------------------------------------------------------------------------\n");
                      printf("SNAKE AND LADDER 6 PLAYERS \n\n");
                      printf("----------------------------------------------------------------------------------------------------------------\n");
                      printf("Please Enter Four word Name\n\n");

                      printf("Enter Player 1 Name:  ");
                      scanf("%5s%n",&name_1, &count);
                      printf("Enter Player 2 Name:  ");
                      scanf("%5s%n",&name_2, &count);
                      printf("Enter Player 3 Name:  ");
                      scanf("%5s%n",&name_3, &count);
                      printf("Enter Player 4 Name:  ");
                      scanf("%5s%n",&name_4, &count);
                    printf("Enter Player 5 Name:  ");
                      scanf("%5s%n",&name_5, &count);
                       printf("Enter Player 6 Name:  ");
                      scanf("%5s%n",&name_6, &count);


                      if (count == 5)
                        {
                     printf("\n\nEnter 1 to Play | Enter 2 to Rerturn\n");
                      printf("Input: ");
                    scanf("%d", &number);
                        while(number==1)
                       {
                          goto P5;
                          break;
                       }
                       while (number==2)
                          {
                            goto MM;
                            break;
                          }

                        }
                            else
                            {
                              printf("----------------------------------------------------------------------------------------------------------------\n");
                              printf("\n\n      !!!!!!!!!!! Error: please enter exactly 4 letters NAMES. !!!!!!!!!!!\n\n\n\n");
                              printf("----------------------------------------------------------------------------------------------------------------\n");                            }

                            break;

                 }
                  break;

             case 'g'://TO MAIN MENU
                    system("cls");
                    goto MM;
                    break;

            case 'h'://Exit
                    system("cls");
                    exit(0);

          default:
                printf("\n\n\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
                printf("\n\n\t\t\t\t    Incorrect choice.Try Again\n");
                printf("\n\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");

   }

}



    P1: while (3) // 1 PLAYER LOOP
        {
                        printf("\tONE PLAYER\n\n");
                        printf("\t[e] to Exit\n\n");
                        printf("\t[1] TO Play %s\n\n",&name_1);

                        printf("\t| %s position is %d |",&name_1,cur_pos1);
                        printf(" Ai position is %d |\n\n\n",cur_pos7);

                        printf("\tSNAKES: | 30 to 7 | 47 to 15 | 56 to 19 | 73 to 51 | 82 to 42 | 92 to 75 | 98 to 55  |\n");
                        printf("\tLADDERS:| 4 to 25 | 21 to 39 | 27 to 74 | 43 to 76 | 71 to 89 | \n\n");
                        printf("\tPower Ups: | 48 = Random Deduction | 30 = Random Bonus To All | 11 = Random Bonus      |\n");
                        printf("\t           | 20 = Random Bonus     | 97 = Double Loss         | 14 = Random Deduction |\n\n\n");
                        printf("\tINPUT:  ");
                        scanf("\t%s", &plyr1);

                        switch(plyr1)

                        {
                    case 'e'://TO MAIN MENU
                    system("cls");
                    goto MM;
                    break;
                            case '1':
                            dice=rd();
                            system("cls");
                            printf("--------------------------------------------------------------------------\n");
                                    cur_pos1=dice+cur_pos1;
                                    if(cur_pos1<101)
                                    {
                                        if( cur_pos1 == 4)
										{
											printf("Horray! Up the ladder!\n\n");				//ladder
											 (cur_pos1=cur_pos1+21, "-P1-");
										}
										if( cur_pos1 == 21)
										{
											printf("Cheers! Up the ladder!\n\n");				//ladder
											 (cur_pos1=cur_pos1+18, "-P1-");
										}
										if( cur_pos1 == 27)
										{
											printf("Hiho! Up the ladder!\n\n");				//ladder
											 (cur_pos1=cur_pos1+47, "-P1-");
										}
										if( cur_pos1 == 43)
										{
											printf("Horray! Up the ladder!\n\n");				//ladder
											 (cur_pos1=cur_pos1+33, "-P1-");
										}
										if( cur_pos1 == 71)
										{
											printf("Bravo! Up the ladder!\n\n");				//ladder
											 (cur_pos1=cur_pos1+18, "-P1-");
										}
										if( cur_pos1 == 30)
										{
											printf("Ouch! Bitten by a snake!\n\n");								//snake
											 (cur_pos1=cur_pos1-23, "-P1-");
										}
										if( cur_pos1 == 47)
										{
											printf("Landed on a snake!Down we go '^'\n\n");						//snake
											 (cur_pos1=cur_pos1-32, "-P1-");
										}
										if( cur_pos1 == 56)
										{
											printf("Hmmm! You got bitten by a snake!Down we go '^'\n\n");			//snake
											 (cur_pos1=cur_pos1-37, "-P1-");
										}
										if( cur_pos1 == 73)
										{
											printf("Ouch! Bitten by a snake!Down we go '^'\n");					//snake
											 (cur_pos1=cur_pos1-22, "-P1-");
										}
										if( cur_pos1 == 82)
										{
											printf("Too bad you got bitten by a snake! Down we go '^'\n\n");		//snake
											 (cur_pos1=cur_pos1-40, "-P1-");
										}
										if( cur_pos1 == 92)
										{
											printf("Too bad you got bitten by a snake! Down we go '^'\n\n");		//snake
											 (cur_pos1=cur_pos1-12, "-P1-");
										}
										if( cur_pos1 == 98)
										{
											printf("Too bad you got bitten by a snake! Down we go '^'\n\n");		//snake
											 (cur_pos1=cur_pos1-43, "-P1-");
										}
										if (cur_pos1==48)
										{
											printf("WOW!Stepped on a power up. OPONENTS POSITION will we deducted by %d steps!\n\n",dice);	//POWERUPS_Deduction bonus
											  (cur_pos1=cur_pos1-dice, "-P1-");
											 (cur_pos7=cur_pos7-dice, "-AI-");
										}
										if (cur_pos1==30)
										{
											printf("WOW!Stepped on a power up. BONUS %d steps added to you and opponent !\n\n",dice);			//POWERUPS_Additional bonus
											 (cur_pos1=cur_pos1+dice, "-P1-");
											 (cur_pos7=cur_pos7+dice, "-AI-");

										}
										if (cur_pos1==11)
										{
											printf("WOW!Stepped on a power up. Bonus %d steps added!\n\n",dice);			//POWERUPS_Additional bonus
											 (cur_pos1=cur_pos1+dice, "-P1-");
										}
										if (cur_pos1==20)
										{
											printf("WOW!Stepped on a power up. Bonus Five s%d steps added!\n\n",dice);			//POWERUPS_Additional bonus
											 (cur_pos1=cur_pos1+dice, "-P1-");
										}
										if (cur_pos1==97)
										{
											printf("WOW!Stepped on a power up. Your Opponents of Position will divided by 2!\n");			//POWERUPS_double loss
											 (cur_pos1=cur_pos1/2, "-P1-");
											 (cur_pos7=cur_pos7/2, "-AI-");
										}
                                        else
                                        {
                                            displaychart(cur_pos1,"-P1-");
                                        }
                                        printf("\t\t\t\tDice = %d\n",dice);
                                        printf("--------------------------------------------------------------------------\n");

									}
										else
                                                {

                                                    printf("Range exceeded of Player 1.\n");
                                                    displaychart(cur_pos1,"-P1-");
                                                }




                                    diceAI=AI();
                                     // AI
                                    cur_pos7=diceAI+cur_pos7;
                                    if(cur_pos7<101)
                                    {
                                        if( cur_pos7 == 4)
										{
											printf("Horray! Up the ladder!\n\n");				//ladder
											 (cur_pos7=cur_pos7+21, "-AI-");
										}
										if( cur_pos7 == 21)
										{
											printf("Cheers! Up the ladder!\n\n");				//ladder
											 (cur_pos7=cur_pos7+18, "-AI-");
										}
										if( cur_pos7 == 27)
										{
											printf("Hiho! Up the ladder!\n\n");				//ladder
											 (cur_pos7=cur_pos7+47, "-AI  -");
										}
										if( cur_pos7 == 43)
										{
											printf("Horray! Up the ladder!\n\n");				//ladder
											 (cur_pos7=cur_pos7+33, "-AI-");
										}
										if( cur_pos7 == 71)
										{
											printf("Bravo! Up the ladder!\n\n");				//ladder
											 (cur_pos7=cur_pos7+18, "-AI-");
										}
										if( cur_pos7 == 30)
										{
											printf("Ouch! Bitten by a snake!\n\n");								//snake
											 (cur_pos7=cur_pos7-23, "-AI-");
										}
										if( cur_pos7 == 47)
										{
											printf("Landed on a snake!Down we go '^'\n\n");						//snake
											 (cur_pos7=cur_pos7-32, "-AI-");
										}
										if( cur_pos7 == 56)
										{
											printf("Hmmm! You got bitten by a snake!Down we go '^'\n\n");			//snake
											 (cur_pos7=cur_pos7-37, "-AI-");
										}
										if( cur_pos7 == 73)
										{
											printf("Ouch! Bitten by a snake!Down we go '^'\n");					//snake
											 (cur_pos7=cur_pos7-22, "-AI-");
										}
										if( cur_pos7 == 82)
										{
											printf("Too bad you got bitten by a snake! Down we go '^'\n\n");		//snake
											 (cur_pos7=cur_pos7-40, "-AI-");
										}
										if( cur_pos7 == 92)
										{
											printf("Too bad you got bitten by a snake! Down we go '^'\n\n");		//snake
											 (cur_pos7=cur_pos7-12, "-AI-");
										}
										if( cur_pos7 == 98)
										{
											printf("Too bad you got bitten by a snake! Down we go '^'\n\n");		//snake
											 (cur_pos7=cur_pos7-43, "-AI-");
										}
										if (cur_pos7==48)
										{
											printf("\nWOW!Stepped on a power up. OPONENTS POSITION will we deducted by %d steps!\n\n",dice);	//POWERUPS_Deduction bonus
											 (cur_pos1=cur_pos1-dice, "-P1-");

										}
										if (cur_pos7==30)
										{
											printf("WOW!Stepped on a power up. BONUS %d steps added to you and opponets !\n\n",dice);			//POWERUPS_Additional bonus
											 (cur_pos1=cur_pos1+dice, "-P1-");
											 (cur_pos7=cur_pos7+dice, "-AI");

										}
										if (cur_pos7==11)
										{
											printf("WOW!Stepped on a power up.Bonus %d steps added!\n\n",dice);			//POWERUPS_Additional bonus
											 (cur_pos7=cur_pos7+dice, "-AI-");
										}
										if (cur_pos7==20)
										{
											printf("WOW!Stepped on a power up.Bonus %d steps added!\n\n",dice);			//POWERUPS_Additional bonus
											 (cur_pos7=cur_pos7+dice, "-AI-");
										}
										if (cur_pos7==97)
										{
											printf("WOW!Stepped on a power up. ALL Position will divided by 2!\n");			//POWERUPS_double loss
											 (cur_pos1=cur_pos1/2, "-P1-");
											 (cur_pos7=cur_pos7/2, "-AI-");

										}
                                        else
                                        {
                                            (cur_pos7,"-AI-");
                                        }
                                        printf("\t\t\t\tAI Dice = %d\n",diceAI);
                                        printf("--------------------------------------------------------------------------\n");

									}
										else
                                                {

                                                    printf("Range exceeded of Player 1.\n");
                                                    (cur_pos7,"-AI-");
                                                }

        if(cur_pos7==100)
		{
		    system("cls");
			printf("--------------------------------------------------------------------------\n");
			printf("\t!!!!!!!!!!!!!!!!!!   CONGRATULATIONS    !!!!!!!!!!!!!!!!!!");
			printf("\n\n\n           =============    AI wins=============\n\n\n");
			printf("       !!!!!!!!!!!!!!!!!!  Thanks For Playing  !!!!!!!!!!!!!!!!!!\n");
			printf("--------------------------------------------------------------------------\n");
			exit(0);
		}


        if(cur_pos7==101)
		{
		    system("cls");
			printf("--------------------------------------------------------------------------\n");
			printf("\t!!!!!!!!!!!!!!!!!!   CONGRATULATIONS    !!!!!!!!!!!!!!!!!!");
printf("\n\n\n           =============    AI wins=============\n\n\n");
printf("       !!!!!!!!!!!!!!!!!!  Thanks For Playing  !!!!!!!!!!!!!!!!!!\n");
printf("--------------------------------------------------------------------------\n");

			exit(0);
		}
		if(cur_pos7==102)
		{
		    system("cls");
		   printf("--------------------------------------------------------------------------\n");
			printf("\t!!!!!!!!!!!!!!!!!!   CONGRATULATIONS    !!!!!!!!!!!!!!!!!!");
			printf("\n\n\n           =============    AI wins    =============\n\n\n");
printf("       !!!!!!!!!!!!!!!!!!  Thanks For Playing  !!!!!!!!!!!!!!!!!!\n");
printf("--------------------------------------------------------------------------\n");	exit(0);
		}
		if(cur_pos7==103)
		{
		    system("cls");
			printf("--------------------------------------------------------------------------\n");
			printf("\t!!!!!!!!!!!!!!!!!!   CONGRATULATIONS    !!!!!!!!!!!!!!!!!!");
			printf("\n\n\n           =============    AI wins    =============\n\n\n");
printf("       !!!!!!!!!!!!!!!!!!  Thanks For Playing  !!!!!!!!!!!!!!!!!!\n");
printf("--------------------------------------------------------------------------\n");
	exit(0);
		}
		if(cur_pos7==104)
		{
		    system("cls");
			printf("--------------------------------------------------------------------------\n");
			printf("\t!!!!!!!!!!!!!!!!!!   CONGRATULATIONS    !!!!!!!!!!!!!!!!!!");
			printf("\n\n\n           =============    AI wins    =============\n\n\n");
printf("       !!!!!!!!!!!!!!!!!!  Thanks For Playing  !!!!!!!!!!!!!!!!!!\n");
printf("--------------------------------------------------------------------------\n");
	exit(0);
		}
		if(cur_pos7==105)
		{
		    system("cls");
			printf("--------------------------------------------------------------------------\n");
			printf("\t!!!!!!!!!!!!!!!!!!   CONGRATULATIONS    !!!!!!!!!!!!!!!!!!");
			printf("\n\n\n           =============    AI wins    =============\n\n\n");
printf("       !!!!!!!!!!!!!!!!!!  Thanks For Playing  !!!!!!!!!!!!!!!!!!\n");
printf("--------------------------------------------------------------------------\n");
			exit(0);
		}
		if(cur_pos7==106)
		{
		    system("cls");
			printf("--------------------------------------------------------------------------\n");
			printf("\t!!!!!!!!!!!!!!!!!!   CONGRATULATIONS    !!!!!!!!!!!!!!!!!!");
			printf("\n\n\n           =============    AI wins    =============\n\n\n");
printf("       !!!!!!!!!!!!!!!!!!  Thanks For Playing  !!!!!!!!!!!!!!!!!!\n");
printf("--------------------------------------------------------------------------\n");
exit(0);
		}
		if(cur_pos7==107)
		{
		    system("cls");
			printf("--------------------------------------------------------------------------\n");
			printf("\t!!!!!!!!!!!!!!!!!!   CONGRATULATIONS    !!!!!!!!!!!!!!!!!!");
			printf("\n\n\n           =============    AI wins    =============\n\n\n");
printf("       !!!!!!!!!!!!!!!!!!  Thanks For Playing  !!!!!!!!!!!!!!!!!!\n");
printf("--------------------------------------------------------------------------\n");
	exit(0);
		}
		if(cur_pos7==108)
		{
		    system("cls");
			printf("--------------------------------------------------------------------------\n");
			printf("\t!!!!!!!!!!!!!!!!!!   CONGRATULATIONS    !!!!!!!!!!!!!!!!!!");
			printf("\n\n\n           =============    AI wins    =============\n\n\n");

printf("       !!!!!!!!!!!!!!!!!!  Thanks For Playing  !!!!!!!!!!!!!!!!!!\n");
printf("--------------------------------------------------------------------------\n");
	exit(0);
		}
		if(cur_pos7==109)
		{
		    system("cls");
			printf("--------------------------------------------------------------------------\n");
			printf("\t!!!!!!!!!!!!!!!!!!   CONGRATULATIONS    !!!!!!!!!!!!!!!!!!");
			printf("\n\n\n           =============    AI wins    =============\n\n\n");
printf("       !!!!!!!!!!!!!!!!!!  Thanks For Playing  !!!!!!!!!!!!!!!!!!\n");

printf("--------------------------------------------------------------------------\n");

exit(0);
		}
                                                break;





                default:
                printf("\n\n\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
                printf("\n\n\t\t\t\t    Incorrect choice.Try Again\n");
                printf("\n\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");

		}

}// plasyer 1

    P2: while (4) // 2 PLAYERS LOOP
		{
		    printf("\n\tTWO PLAYERS\n\n\n");
            printf("\t[e] to Exit\n\n\n");
            printf("\t[1] TO Play %s",&name_1);
            printf("\t[2] TO Play %s\n\n\n",&name_2);


            printf("\t%s position is %d",&name_1,cur_pos1);
            printf("  |  %s position is %d  |\n\n\n",&name_2,cur_pos2);

                        printf("\tSNAKES: | 30 to 7 | 47 to 15 | 56 to 19 | 73 to 51 | 82 to 42 | 92 to 75 | 98 to 55  |\n");
                        printf("\tLADDERS:| 4 to 25 | 21 to 39 | 27 to 74 | 43 to 76 | 71 to 89 | \n\n");
                        printf("\tPower Ups: | 48 = Random Deduction | 30 = Random Bonus To All | 11 = Random Bonus      |\n");
                        printf("\t           | 20 = Random Bonus     | 97 = Double Loss         | 14 = Random Deduction |\n\n\n");
                        printf("\tINPUT:  ");
		    scanf("%s", &plyr2);
            switch(plyr2)
                {

                    case 'e'://TO MAIN MENU
                    system("cls");
                    goto MM;
                    break;

                           case '1':dice=rd();
                            system("cls");
                            printf("--------------------------------------------------------------------------\n");
                                    cur_pos1=dice+cur_pos1;
                                    if(cur_pos1<101)
                                    {
                                        if( cur_pos1 == 4)
										{
											printf("Horray! Up the ladder!\n\n");				//ladder
											 (cur_pos1=cur_pos1+21, "-P1-");
										}
										if( cur_pos1 == 21)
										{
											printf("Cheers! Up the ladder!\n\n");				//ladder
											 (cur_pos1=cur_pos1+18, "-P1-");
										}
										if( cur_pos1 == 27)
										{
											printf("Hiho! Up the ladder!\n\n");				//ladder
											 (cur_pos1=cur_pos1+47, "-P1-");
										}
										if( cur_pos1 == 43)
										{
											printf("Horray! Up the ladder!\n\n");				//ladder
											 (cur_pos1=cur_pos1+33, "-P1-");
										}
										if( cur_pos1 == 71)
										{
											printf("Bravo! Up the ladder!\n\n");				//ladder
											 (cur_pos1=cur_pos1+18, "-P1-");
										}
										if( cur_pos1 == 30)
										{
											printf("Ouch! Bitten by a snake!\n\n");								//snake
											 (cur_pos1=cur_pos1-23, "-P1-");
										}
										if( cur_pos1 == 47)
										{
											printf("Landed on a snake!Down we go '^'\n\n");						//snake
											 (cur_pos1=cur_pos1-32, "-P1-");
										}
										if( cur_pos1 == 56)
										{
											printf("Hmmm! You got bitten by a snake!Down we go '^'\n\n");			//snake
											 (cur_pos1=cur_pos1-37, "-P1-");
										}
										if( cur_pos1 == 73)
										{
											printf("Ouch! Bitten by a snake!Down we go '^'\n");					//snake
											 (cur_pos1=cur_pos1-22, "-P1-");
										}
										if( cur_pos1 == 82)
										{
											printf("Too bad you got bitten by a snake! Down we go '^'\n\n");		//snake
											 (cur_pos1=cur_pos1-40, "-P1-");
										}
										if( cur_pos1 == 92)
										{
											printf("Too bad you got bitten by a snake! Down we go '^'\n\n");		//snake
											 (cur_pos1=cur_pos1-12, "-P1-");
										}
										if( cur_pos1 == 98)
										{
											printf("Too bad you got bitten by a snake! Down we go '^'\n\n");		//snake
											 (cur_pos1=cur_pos1-43, "-P1-");
										}
										if (cur_pos1==48)
										{
											printf("WOW!Stepped on a power up. OPONENTS POSITION will we deducted by %d steps!\n\n",dice);	//POWERUPS_Deduction bonus
											 (cur_pos2=cur_pos2-dice, "-P2-");

										}
										if (cur_pos1==30)
										{
											printf("WOW!Stepped on a power up. BONUS %d steps added to you and opponent !\n\n",dice);			//POWERUPS_Additional bonus
											 (cur_pos1=cur_pos1+dice, "-P1-");
											 (cur_pos2=cur_pos2+dice, "-P2-");

										}
										if (cur_pos1==11)
										{
											printf("WOW!Stepped on a power up. Bonus %d steps added!\n\n",dice);			//POWERUPS_Additional bonus
											 (cur_pos1=cur_pos1+dice, "-P1-");
										}
										if (cur_pos1==20)
										{
											printf("WOW!Stepped on a power up. Bonus Five %d steps added!\n\n",dice);					//POWERUPS_Additional bonus
											 (cur_pos1=cur_pos1+dice, "-P1-");
										}
										if (cur_pos1==97)
										{
											printf("WOW!Stepped on a power up. ALL Position will divided by 2!\n");			//POWERUPS_double loss
											 (cur_pos1=cur_pos1/2, "-P1-");
											 (cur_pos2=cur_pos2/2, "-P2-");


                                        }
                                        else
                                        {
                                            displaychart(cur_pos1,"-P1-");
                                        }
                                        printf("\t\t\t\tDice = %d\n",dice);
                                        printf("--------------------------------------------------------------------------\n");

									}
										else
                                                {

                                                    printf("Range exceeded of Player 1.\n");
                                                    displaychart(cur_pos1,"-P1-");
                                                }
                                                break;



							case '2':dice=rd();
                            system("cls");
                            printf("--------------------------------------------------------------------------\n");
                                    cur_pos2=dice+cur_pos2;
                                    if(cur_pos2<101)
                                    {
                                        if( cur_pos2 == 4)
										{
											printf("Horray! Up the ladder!\n\n");				//ladder
											 (cur_pos2=cur_pos2+21, "-P2-");
										}
										if( cur_pos2 == 21)
										{
											printf("Cheers! Up the ladder!\n\n");				//ladder
											 (cur_pos2=cur_pos2+18, "-P2-");
										}
										if( cur_pos2 == 27)
										{
											printf("Hiho! Up the ladder!\n\n");				//ladder
											 (cur_pos2=cur_pos2+47, "-P2-");
										}
										if( cur_pos2 == 43)
										{
											printf("Horray! Up the ladder!\n\n");				//ladder
											 (cur_pos2=cur_pos2+33, "-P2-");
										}
										if( cur_pos2 == 71)
										{
											printf("Bravo! Up the ladder!\n\n");				//ladder
											 (cur_pos2=cur_pos2+18, "-P2-");
										}
										if( cur_pos2 == 30)
										{
											printf("Ouch! Bitten by a snake!\n\n");								//snake
											 (cur_pos2=cur_pos2-23, "-P2-");
										}
										if( cur_pos2 == 47)
										{
											printf("Landed on a snake!Down we go '^'\n\n");						//snake
											 (cur_pos2=cur_pos2-32, "-P2-");
										}
										if( cur_pos2 == 56)
										{
											printf("Hmmm! You got bitten by a snake!Down we go '^'\n\n");			//snake
											 (cur_pos2=cur_pos2-37, "-P2-");
										}
										if( cur_pos2 == 73)
										{
											printf("Ouch! Bitten by a snake!Down we go '^'\n");					//snake
											 (cur_pos2=cur_pos2-22, "-P2-");
										}
										if( cur_pos2 == 82)
										{
											printf("Too bad you got bitten by a snake! Down we go '^'\n\n");		//snake
											 (cur_pos2=cur_pos2-40, "-P2-");
										}
										if( cur_pos2 == 92)
										{
											printf("Too bad you got bitten by a snake! Down we go '^'\n\n");		//snake
											 (cur_pos2=cur_pos2-12, "-P2-");
										}
										if( cur_pos2 == 98)
										{
											printf("Too bad you got bitten by a snake! Down we go '^'\n\n");		//snake
											 (cur_pos2=cur_pos2-43, "-P2-");
										}
										if (cur_pos2==48)
										{
											printf("WOW!Stepped on a power up. OPPONENTS will we deducted by %d steps!\n\n",dice);	//POWERUPS_Deduction bonus

											 (cur_pos1=cur_pos1-dice, "-P1-");
											 ;
										}
										if (cur_pos2==48)
										{
											printf("WOW!Stepped on a power up.ALL possotion will we deducted by %d steps!\n\n",dice);	//POWERUPS_Deduction bonus
											 (cur_pos1=cur_pos1-dice, "-P1-");

											 (cur_pos2=cur_pos2-dice, "-P2-");
											;
										}
										if (cur_pos2==30)
										{
											printf("WOW!Stepped on a power up.Bonus %d steps added to ALL players !\n\n",dice);			//POWERUPS_Additional bonus
											 (cur_pos1=cur_pos1+dice, "-P1-");

											 (cur_pos2=cur_pos2+dice, "-P2-");

										}
										if (cur_pos2==11)
										{
											printf("WOW!Stepped on a power up.Bonus %d steps added!\n\n",dice);			//POWERUPS_Additional bonus
											 (cur_pos2=cur_pos2+dice, "-P2-");
										}
										if (cur_pos2==20)
										{
											printf("WOW!Stepped on a power up. Bonus Five %d steps added!\n\n",dice);					//POWERUPS_Additional bonus
											 (cur_pos2=cur_pos2+dice, "-P2-");
										}
										if (cur_pos2==97)
										{
											printf("WOW!Stepped on a power up. ALL Player Position will divided by 2 !\n");			//POWERUPS_double loss
											 (cur_pos1=cur_pos1/2, "-P1-");
											 (cur_pos2=cur_pos2/2, "-P2-");

										}
                                        else
                                        {
                                            displaychart(cur_pos2,"-P2-");
                                        }
                                        printf("\t\t\t\tDice = %d\n",dice);
                                        printf("--------------------------------------------------------------------------\n");

									}
										else
                                                {

                                                    printf("Range exceeded of Player 1.\n");
                                                    displaychart(cur_pos2,"-P2-");
                                                }
                                                break;


                default:
                printf("\n\n\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
                printf("\n\n\t\t\t\t    Incorrect choice.Try Again\n");
                printf("\n\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");




		}

    }  //players2

    P3: while (5) // 3 PLAYERS LOOP
        {
            printf("\n\tTHREE PLAYERS\n\n\n");
            printf("\t[e] to Exit\n\n");
            printf("\t[1] TO Play %s",&name_1);
            printf("\t[2] TO Play %s\n",&name_2);
            printf("\t[3] TO Play %s\n\n\n",&name_3);


            printf("\t%s position is %d",&name_1,cur_pos1);
            printf("  |  %s position is %d  |\n",&name_2,cur_pos2);
            printf("\t%s position is %d\n\n\n",&name_3,cur_pos3);

            printf("\tSNAKES: | 30 to 7 | 47 to 15 | 56 to 19 | 73 to 51 | 82 to 42 | 92 to 75 | 98 to 55  |\n");
            printf("\tLADDERS:| 4 to 25 | 21 to 39 | 27 to 74 | 43 to 76 | 71 to 89 | \n\n");            printf("\tPower Ups: | 48 = Random Deduction | 30 = Random Bonus To All | 11 = Random Bonus      |\n");
            printf("\t           | 20 = Random Bonus     | 97 = Double Loss         | 14 = Random Deduction |\n\n\n");
            printf("\tINPUT:  ");
		    scanf("%s", &plyr3);
            switch(plyr3)
                {
                    case 'e'://TO MAIN MENU
                    system("cls");
                    goto MM;
                    break;

                    case '1':dice=rd();
                            system("cls");
                            printf("--------------------------------------------------------------------------\n");
                                    cur_pos1=dice+cur_pos1;
                                    if(cur_pos1<101)
                                    {
                                        if( cur_pos1 == 4)
										{
											printf("Horray! Up the ladder!\n\n");				//ladder
											 (cur_pos1=cur_pos1+21, "-P1-");
										}
										if( cur_pos1 == 21)
										{
											printf("Cheers! Up the ladder!\n\n");				//ladder
											 (cur_pos1=cur_pos1+18, "-P1-");
										}
										if( cur_pos1 == 27)
										{
											printf("Hiho! Up the ladder!\n\n");				//ladder
											 (cur_pos1=cur_pos1+47, "-P1-");
										}
										if( cur_pos1 == 43)
										{
											printf("Horray! Up the ladder!\n\n");				//ladder
											 (cur_pos1=cur_pos1+33, "-P1-");
										}
										if( cur_pos1 == 71)
										{
											printf("Bravo! Up the ladder!\n\n");				//ladder
											 (cur_pos1=cur_pos1+18, "-P1-");
										}
										if( cur_pos1 == 30)
										{
											printf("Ouch! Bitten by a snake!\n\n");								//snake
											 (cur_pos1=cur_pos1-23, "-P1-");
										}
										if( cur_pos1 == 47)
										{
											printf("Landed on a snake!Down we go '^'\n\n");						//snake
											 (cur_pos1=cur_pos1-32, "-P1-");
										}
										if( cur_pos1 == 56)
										{
											printf("Hmmm! You got bitten by a snake!Down we go '^'\n\n");			//snake
											 (cur_pos1=cur_pos1-37, "-P1-");
										}
										if( cur_pos1 == 73)
										{
											printf("Ouch! Bitten by a snake!Down we go '^'\n");					//snake
											 (cur_pos1=cur_pos1-22, "-P1-");
										}
										if( cur_pos1 == 82)
										{
											printf("Too bad you got bitten by a snake! Down we go '^'\n\n");		//snake
											 (cur_pos1=cur_pos1-40, "-P1-");
										}
										if( cur_pos1 == 92)
										{
											printf("Too bad you got bitten by a snake! Down we go '^'\n\n");		//snake
											 (cur_pos1=cur_pos1-12, "-P1-");
										}
										if( cur_pos1 == 98)
										{
											printf("Too bad you got bitten by a snake! Down we go '^'\n\n");		//snake
											 (cur_pos1=cur_pos1-43, "-P1-");
										}
										if (cur_pos1==48)
										{
											printf("WOW!Stepped on a power up. OPPONENTS will we deducted by %d steps!\n\n",dice);	//POWERUPS_Deduction bonus

											 (cur_pos2=cur_pos2-dice, "-P2-");
											 (cur_pos3=cur_pos3-dice, "-P3-");


										}
										if (cur_pos1==48)
										{
											printf("WOW!Stepped on a power up. ALL POSITION will we deducted by %d steps!\n\n",dice);	//POWERUPS_Deduction bonus
											 (cur_pos1=cur_pos1-dice, "-P1-");

											 (cur_pos2=cur_pos2-dice, "-P2-");
											 (cur_pos3=cur_pos3-dice, "-P3-");


										}
										if (cur_pos1==30)
										{
											printf("WOW!Stepped on a power up. Bonus %d steps added to you and opponets !\n\n",dice);			//POWERUPS_Additional bonus
											 (cur_pos1=cur_pos1+dice, "-P1-");

											 (cur_pos2=cur_pos2+dice, "-P2-");
											 (cur_pos3=cur_pos3+dice, "-P3-");


										}
										if (cur_pos1==11)
										{
											printf("WOW!Stepped on a power up.Bonus %d steps added!\n\n",dice);			//POWERUPS_Additional bonus
											 (cur_pos1=cur_pos1+dice, "-P1-");
										}
										if (cur_pos1==20)
										{
											printf("WOW!Stepped on a power up. Bonus Five %d steps added!\n\n",dice);					//POWERUPS_Additional bonus
											 (cur_pos1=cur_pos1+dice, "-P1-");
										}
										if (cur_pos1==97)
										{
											printf("WOW!Stepped on a power up. ALL Position will divided by 2!\n");			//POWERUPS_double loss
											 (cur_pos1=cur_pos1/2, "-P1-");
											 (cur_pos2=cur_pos2/2, "-P2-");
											 (cur_pos3=cur_pos3/2, "-P3-");


                                        }
                                        else
                                        {
                                            displaychart(cur_pos1,"-P1-");
                                        }
                                        printf("\t\t\t\tDice = %d\n",dice);
                                        printf("--------------------------------------------------------------------------\n");

									}
										else
                                                {

                                                    printf("Range exceeded of Player 1.\n");
                                                    displaychart(cur_pos1,"-P1-");
                                                }
                                                break;



							case '2':dice=rd();
                            system("cls");
                            printf("--------------------------------------------------------------------------\n");
                                    cur_pos2=dice+cur_pos2;
                                    if(cur_pos2<101)
                                    {
                                        if( cur_pos2 == 4)
										{
											printf("Horray! Up the ladder!\n\n");				//ladder
											 (cur_pos2=cur_pos2+21, "-P2-");
										}
										if( cur_pos2 == 21)
										{
											printf("Cheers! Up the ladder!\n\n");				//ladder
											 (cur_pos2=cur_pos2+18, "-P2-");
										}
										if( cur_pos2 == 27)
										{
											printf("Hiho! Up the ladder!\n\n");				//ladder
											 (cur_pos2=cur_pos2+47, "-P2-");
										}
										if( cur_pos2 == 43)
										{
											printf("Horray! Up the ladder!\n\n");				//ladder
											 (cur_pos2=cur_pos2+33, "-P2-");
										}
										if( cur_pos2 == 71)
										{
											printf("Bravo! Up the ladder!\n\n");				//ladder
											 (cur_pos2=cur_pos2+18, "-P2-");
										}
										if( cur_pos2 == 30)
										{
											printf("Ouch! Bitten by a snake!\n\n");								//snake
											 (cur_pos2=cur_pos2-23, "-P2-");
										}
										if( cur_pos2 == 47)
										{
											printf("Landed on a snake!Down we go '^'\n\n");						//snake
											 (cur_pos2=cur_pos2-32, "-P2-");
										}
										if( cur_pos2 == 56)
										{
											printf("Hmmm! You got bitten by a snake!Down we go '^'\n\n");			//snake
											 (cur_pos2=cur_pos2-37, "-P2-");
										}
										if( cur_pos2 == 73)
										{
											printf("Ouch! Bitten by a snake!Down we go '^'\n");					//snake
											 (cur_pos2=cur_pos2-22, "-P2-");
										}
										if( cur_pos2 == 82)
										{
											printf("Too bad you got bitten by a snake! Down we go '^'\n\n");		//snake
											 (cur_pos2=cur_pos2-40, "-P2-");
										}
										if( cur_pos2 == 92)
										{
											printf("Too bad you got bitten by a snake! Down we go '^'\n\n");		//snake
											 (cur_pos2=cur_pos2-12, "-P2-");
										}
										if( cur_pos2 == 98)
										{
											printf("Too bad you got bitten by a snake! Down we go '^'\n\n");		//snake
											 (cur_pos2=cur_pos2-43, "-P2-");
										}
										if (cur_pos2==48)
										{
											printf("WOW!Stepped on a power up. OPPONENTS will we deducted by %d steps!\n\n",dice);	//POWERUPS_Deduction bonus

											 (cur_pos1=cur_pos1-dice, "-P1-");
											 (cur_pos3=cur_pos3-dice, "-P3-");


										}
										if (cur_pos2==48)
										{
											printf("WOW!Stepped on a power up.ALL POSITION will we deducted by %d steps!\n\n",dice);	//POWERUPS_Deduction bonus
											 (cur_pos1=cur_pos1-dice, "-P1-");

											 (cur_pos2=cur_pos2-dice, "-P2-");
											 (cur_pos3=cur_pos3-dice, "-P3-");


										}
										if (cur_pos2==30)
										{
											printf("WOW!Stepped on a power up.Bonus %d steps added to ALL players !\n\n",dice);			//POWERUPS_Additional bonus
											 (cur_pos1=cur_pos1+dice, "-P1-");

											 (cur_pos2=cur_pos2+dice, "-P2-");
											 (cur_pos3=cur_pos3+dice, "-P3-");


										}
										if (cur_pos2==11)
										{
											printf("WOW!Stepped on a power up. Bonus %d steps added!\n\n",dice);			//POWERUPS_Additional bonus
											 (cur_pos2=cur_pos2+dice, "-P2-");
										}
										if (cur_pos2==20)
										{
											printf("WOW!Stepped on a power up. Bonus Five %d steps added!\n\n",dice);					//POWERUPS_Additional bonus
											 (cur_pos2=cur_pos2+dice, "-P2-");
										}
										if (cur_pos2==97)
										{
											printf("WOW!Stepped on a power up. ALL Player Position will divided by 2 !\n");			//POWERUPS_double loss
											 (cur_pos1=cur_pos1/2, "-P1-");
											 (cur_pos2=cur_pos2/2, "-P2-");
											 (cur_pos3=cur_pos3/2, "-P3-");



										}
                                        else
                                        {
                                            displaychart(cur_pos2,"-P2-");
                                        }
                                        printf("\t\t\t\tDice = %d\n",dice);
                                        printf("--------------------------------------------------------------------------\n");

									}
										else
                                                {

                                                    printf("Range exceeded of Player 1.\n");
                                                    displaychart(cur_pos2,"-P2-");
                                                }
                                                break;



							case '3':dice=rd();
                            system("cls");
                            printf("--------------------------------------------------------------------------\n");
                                    cur_pos3=dice+cur_pos3;
                                    if(cur_pos3<101)
                                    {
                                        if( cur_pos3 == 4)
										{
											printf("Horray! Up the ladder!\n\n");				//ladder
											 (cur_pos3=cur_pos3+21, "-P3-");
										}
										if( cur_pos3 == 21)
										{
											printf("Cheers! Up the ladder!\n\n");				//ladder
											 (cur_pos3=cur_pos3+18, "-P3-");
										}
										if( cur_pos3 == 27)
										{
											printf("Hiho! Up the ladder!\n\n");				//ladder
											 (cur_pos3=cur_pos3+47, "-P3-");
										}
										if( cur_pos3 == 43)
										{
											printf("Horray! Up the ladder!\n\n");				//ladder
											 (cur_pos3=cur_pos3+33, "-P3-");
										}
										if( cur_pos3 == 71)
										{
											printf("Bravo! Up the ladder!\n\n");				//ladder
											 (cur_pos3=cur_pos3+18, "-P3-");
										}
										if( cur_pos3 == 30)
										{
											printf("Ouch! Bitten by a snake!\n\n");								//snake
											 (cur_pos3=cur_pos3-23, "-P3-");
										}
										if( cur_pos3 == 47)
										{
											printf("Landed on a snake!Down we go '^'\n\n");						//snake
											 (cur_pos3=cur_pos3-32, "-P3-");
										}
										if( cur_pos3 == 56)
										{
											printf("Hmmm! You got bitten by a snake!Down we go '^'\n\n");			//snake
											 (cur_pos3=cur_pos3-37, "-P3-");
										}
										if( cur_pos3 == 73)
										{
											printf("Ouch! Bitten by a snake!Down we go '^'\n");					//snake
											 (cur_pos3=cur_pos3-22, "-P3-");
										}
										if( cur_pos3 == 82)
										{
											printf("Too bad you got bitten by a snake! Down we go '^'\n\n");		//snake
											 (cur_pos3=cur_pos3-40, "-P3-");
										}
										if( cur_pos3 == 92)
										{
											printf("Too bad you got bitten by a snake! Down we go '^'\n\n");		//snake
											 (cur_pos3=cur_pos3-12, "-P3-");
										}
										if( cur_pos3 == 98)
										{
											printf("Too bad you got bitten by a snake! Down we go '^'\n\n");		//snake
											 (cur_pos3=cur_pos3-43, "-P3-");
										}
										if (cur_pos3==48)
										{
											printf("WOW!Stepped on a power up. OPPONENTS will we deducted by %d steps!\n\n",dice);	//POWERUPS_Deduction bonus

											 (cur_pos2=cur_pos2-dice, "-P2-");
											 (cur_pos1=cur_pos1-dice, "-P1-");

										}
										if (cur_pos3==48)
										{
											printf("WOW!Stepped on a power up.ALL POSITION will we deducted by %d steps!\n\n",dice);	//POWERUPS_Deduction bonus
											 (cur_pos1=cur_pos1-dice, "-P1-");

											 (cur_pos2=cur_pos2-dice, "-P2-");
											 (cur_pos3=cur_pos3-dice, "-P3-");


										}
										if (cur_pos3==30)
										{
											printf("WOW!Stepped on a power up.Bonus %d steps added to you and opponets !\n\n",dice);			//POWERUPS_Additional bonus
											 (cur_pos1=cur_pos1+dice, "-P1-");

											 (cur_pos2=cur_pos2+dice, "-P2-");
											 (cur_pos3=cur_pos3+dice, "-P3-");


										}
										if (cur_pos3==11)
										{
											printf("WOW!Stepped on a power up.Bonus %d steps added!\n\n",dice);			//POWERUPS_Additional bonus
											 (cur_pos3=cur_pos3+dice, "-P3-");
										}
										if (cur_pos3==20)
										{
											printf("WOW!Stepped on a power up. Bonus Five %d steps added!\n\n",dice);					//POWERUPS_Additional bonus
											 (cur_pos3=cur_pos3+dice, "-P3-");
										}
										if (cur_pos3==97)
										{
											printf("WOW!Stepped on a power up. ALL Position will divided by 2 !\n");			//POWERUPS_double loss
											 (cur_pos1=cur_pos1/2, "-P1-");
											 (cur_pos2=cur_pos2/2, "-P2-");
											 (cur_pos3=cur_pos3/2, "-P3-");



										}
                                        else
                                        {
                                            displaychart(cur_pos3,"-P3-");
                                        }
                                        printf("\t\t\t\tDice = %d\n",dice);
                                        printf("--------------------------------------------------------------------------\n");

									}
										else
                                                {

                                                    printf("Range exceeded of Player 1.\n");
                                                    displaychart(cur_pos3,"-P3-");
                                                }
                                                break;

                 default:
                printf("\n\n\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
                printf("\n\n\t\t\t\t    Incorrect choice.Try Again\n");
                printf("\n\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");

		}

    }  //players3

    P4: while (6) // 4 PLAYERS LOOP
        {
            printf("\n\tFOUR PLAYERS\n\n\n");
            printf("\t[e] to Exit\n\n");
            printf("\t[1] TO Play %s",&name_1);
            printf("\t[2] TO Play %s\n",&name_2);
            printf("\t[3] TO Play %s",&name_3);
            printf("\t[4] TO Play %s\n\n",&name_4);

            printf("\t%s position is %d",&name_1,cur_pos1);
            printf("  |  %s position is %d  |\n",&name_2,cur_pos2);
            printf("\t%s position is %d",&name_3,cur_pos3);
            printf("  |  %s position is %d  |\n\n",&name_4,cur_pos4);


            printf("\tSNAKES: | 30 to 7 | 47 to 15 | 56 to 19 | 73 to 51 | 82 to 42 | 92 to 75 | 98 to 55  |\n");
  printf("\tLADDERS:| 4 to 25 | 21 to 39 | 27 to 74 | 43 to 76 | 71 to 89 | \n\n");            printf("\tPower Ups: | 48 = Random Deduction | 30 = Random Bonus To All | 11 = Random Bonus      |\n");
            printf("\t           | 20 = Random Bonus     | 97 = Double Loss         | 14 = Random Deduction |\n\n\n");
            printf("\tINPUT:  ");
		    scanf("%s", &plyr4);
            switch(plyr4)
                {
                    case 'e'://TO MAIN MENU
                    system("cls");
                    goto MM;
                    break;
                            case '1':dice=rd();
                            system("cls");
                            printf("--------------------------------------------------------------------------\n");
                                    cur_pos1=dice+cur_pos1;
                                    if(cur_pos1<101)
                                    {
                                        if( cur_pos1 == 4)
										{
											printf("Horray! Up the ladder!\n\n");				//ladder
											 (cur_pos1=cur_pos1+21, "-P1-");
										}
										if( cur_pos1 == 21)
										{
											printf("Cheers! Up the ladder!\n\n");				//ladder
											 (cur_pos1=cur_pos1+18, "-P1-");
										}
										if( cur_pos1 == 27)
										{
											printf("Hiho! Up the ladder!\n\n");				//ladder
											 (cur_pos1=cur_pos1+47, "-P1-");
										}
										if( cur_pos1 == 43)
										{
											printf("Horray! Up the ladder!\n\n");				//ladder
											 (cur_pos1=cur_pos1+33, "-P1-");
										}
										if( cur_pos1 == 71)
										{
											printf("Bravo! Up the ladder!\n\n");				//ladder
											 (cur_pos1=cur_pos1+18, "-P1-");
										}
										if( cur_pos1 == 30)
										{
											printf("Ouch! Bitten by a snake!\n\n");								//snake
											 (cur_pos1=cur_pos1-23, "-P1-");
										}
										if( cur_pos1 == 47)
										{
											printf("Landed on a snake!Down we go '^'\n\n");						//snake
											 (cur_pos1=cur_pos1-32, "-P1-");
										}
										if( cur_pos1 == 56)
										{
											printf("Hmmm! You got bitten by a snake!Down we go '^'\n\n");			//snake
											 (cur_pos1=cur_pos1-37, "-P1-");
										}
										if( cur_pos1 == 73)
										{
											printf("Ouch! Bitten by a snake!Down we go '^'\n");					//snake
											 (cur_pos1=cur_pos1-22, "-P1-");
										}
										if( cur_pos1 == 82)
										{
											printf("Too bad you got bitten by a snake! Down we go '^'\n\n");		//snake
											 (cur_pos1=cur_pos1-40, "-P1-");
										}
										if( cur_pos1 == 92)
										{
											printf("Too bad you got bitten by a snake! Down we go '^'\n\n");		//snake
											 (cur_pos1=cur_pos1-12, "-P1-");
										}
										if( cur_pos1 == 98)
										{
											printf("Too bad you got bitten by a snake! Down we go '^'\n\n");		//snake
											 (cur_pos1=cur_pos1-43, "-P1-");
										}
										if (cur_pos1==48)
										{
											printf("WOW!Stepped on a power up. OPPONENTS will we deducted by %d steps!\n\n",dice);	//POWERUPS_Deduction bonus

											 (cur_pos2=cur_pos2-dice, "-P2-");
											 (cur_pos3=cur_pos3-dice, "-P3-");
											 (cur_pos4=cur_pos4-dice, "-P4-");

										}
										if (cur_pos1==48)
										{
											printf("WOW!Stepped on a power up.ALL POSITION will we deducted by %d steps!\n\n",dice);	//POWERUPS_Deduction bonus
											 (cur_pos1=cur_pos1-dice, "-P1-");
											 (cur_pos2=cur_pos2-dice, "-P2-");
											 (cur_pos3=cur_pos3-dice, "-P3-");
											 (cur_pos4=cur_pos4-dice, "-P4-");
										}
										if (cur_pos1==30)
										{
											printf("WOW!Stepped on a power up.Bonus %d steps added to you and opponets !\n\n",dice);			//POWERUPS_Additional bonus
											 (cur_pos1=cur_pos1+dice, "-P1-");
											 (cur_pos2=cur_pos2+dice, "-P2-");
											 (cur_pos3=cur_pos3+dice, "-P3-");
											 (cur_pos4=cur_pos4+dice, "-P4-");
										}
										if (cur_pos1==11)
										{
											printf("WOW!Stepped on a power up.Bonus %d steps added!\n\n",dice);			//POWERUPS_Additional bonus
											 (cur_pos1=cur_pos1+dice, "-P1-");
										}
										if (cur_pos1==20)
										{
											printf("WOW!Stepped on a power up. Bonus Five %d steps added!\n\n",dice);					//POWERUPS_Additional bonus
											 (cur_pos1=cur_pos1+dice, "-P1-");
										}
										if (cur_pos1==97)
										{
											printf("WOW!Stepped on a power up. ALL Position will divided by 2!\n");			//POWERUPS_double loss
											 (cur_pos1=cur_pos1/2, "-P1-");
											 (cur_pos2=cur_pos2/2, "-P2-");
											 (cur_pos3=cur_pos3/2, "-P3-");
											 (cur_pos4=cur_pos4/2, "-P4-");

                                        }
                                        else
                                        {
                                            displaychart(cur_pos1,"-P1-");
                                        }
                                        printf("\t\t\t\tDice = %d\n",dice);
                                        printf("--------------------------------------------------------------------------\n");

									}
										else
                                                {

                                                    printf("Range exceeded of Player 1.\n");
                                                    displaychart(cur_pos1,"-P1-");
                                                }
                                                break;



							case '2':dice=rd();
                            system("cls");
                            printf("--------------------------------------------------------------------------\n");
                                    cur_pos2=dice+cur_pos2;
                                    if(cur_pos2<101)
                                    {
                                        if( cur_pos2 == 4)
										{
											printf("Horray! Up the ladder!\n\n");				//ladder
											 (cur_pos2=cur_pos2+21, "-P2-");
										}
										if( cur_pos2 == 21)
										{
											printf("Cheers! Up the ladder!\n\n");				//ladder
											 (cur_pos2=cur_pos2+18, "-P2-");
										}
										if( cur_pos2 == 27)
										{
											printf("Hiho! Up the ladder!\n\n");				//ladder
											 (cur_pos2=cur_pos2+47, "-P2-");
										}
										if( cur_pos2 == 43)
										{
											printf("Horray! Up the ladder!\n\n");				//ladder
											 (cur_pos2=cur_pos2+33, "-P2-");
										}
										if( cur_pos2 == 71)
										{
											printf("Bravo! Up the ladder!\n\n");				//ladder
											 (cur_pos2=cur_pos2+18, "-P2-");
										}
										if( cur_pos2 == 30)
										{
											printf("Ouch! Bitten by a snake!\n\n");								//snake
											 (cur_pos2=cur_pos2-23, "-P2-");
										}
										if( cur_pos2 == 47)
										{
											printf("Landed on a snake!Down we go '^'\n\n");						//snake
											 (cur_pos2=cur_pos2-32, "-P2-");
										}
										if( cur_pos2 == 56)
										{
											printf("Hmmm! You got bitten by a snake!Down we go '^'\n\n");			//snake
											 (cur_pos2=cur_pos2-37, "-P2-");
										}
										if( cur_pos2 == 73)
										{
											printf("Ouch! Bitten by a snake!Down we go '^'\n");					//snake
											 (cur_pos2=cur_pos2-22, "-P2-");
										}
										if( cur_pos2 == 82)
										{
											printf("Too bad you got bitten by a snake! Down we go '^'\n\n");		//snake
											 (cur_pos2=cur_pos2-40, "-P2-");
										}
										if( cur_pos2 == 92)
										{
											printf("Too bad you got bitten by a snake! Down we go '^'\n\n");		//snake
											 (cur_pos2=cur_pos2-12, "-P2-");
										}
										if( cur_pos2 == 98)
										{
											printf("Too bad you got bitten by a snake! Down we go '^'\n\n");		//snake
											 (cur_pos2=cur_pos2-43, "-P2-");
										}
										if (cur_pos2==48)
										{
											printf("WOW!Stepped on a power up. OPPONENTS will we deducted by %d steps!\n\n",dice);	//POWERUPS_Deduction bonus
											 (cur_pos1=cur_pos1-dice, "-P1-");
											 (cur_pos3=cur_pos3-dice, "-P3-");
											 (cur_pos4=cur_pos4-dice, "-P4-");
										}
										if (cur_pos2==48)
										{
											printf("WOW!Stepped on a power up.ALL POSITION will we deducted by %d steps!\n\n",dice);	//POWERUPS_Deduction bonus
											 (cur_pos1=cur_pos1-dice, "-P1-");
											 (cur_pos2=cur_pos2-dice, "-P2-");
											 (cur_pos3=cur_pos3-dice, "-P3-");
											 (cur_pos4=cur_pos4-dice, "-P4-");
										}
										if (cur_pos2==30)
										{
											printf("WOW!Stepped on a power up.Bonus %d steps added to ALL players !\n\n",dice);			//POWERUPS_Additional bonus
											 (cur_pos1=cur_pos1+dice, "-P1-");
											 (cur_pos2=cur_pos2+dice, "-P2-");
											 (cur_pos3=cur_pos3+dice, "-P3-");
											 (cur_pos4=cur_pos4+dice, "-P4-");
										}
										if (cur_pos2==11)
										{
											printf("WOW!Stepped on a power up.Bonus %d steps added!\n\n",dice);			//POWERUPS_Additional bonus
											 (cur_pos2=cur_pos2+dice, "-P2-");
										}
										if (cur_pos2==20)
										{
											printf("WOW!Stepped on a power up. Bonus Five %d steps added!\n\n",dice);					//POWERUPS_Additional bonus
											 (cur_pos2=cur_pos2+dice, "-P2-");
										}
										if (cur_pos2==97)
										{
											printf("WOW!Stepped on a power up. ALL Player Position will divided by 2 !\n");			//POWERUPS_double loss
											 (cur_pos1=cur_pos1/2, "-P1-");
											 (cur_pos2=cur_pos2/2, "-P2-");
											 (cur_pos3=cur_pos3/2, "-P3-");
											 (cur_pos4=cur_pos4/2, "-P4-");
										}
                                        else
                                        {
                                            displaychart(cur_pos2,"-P2-");
                                        }
                                        printf("\t\t\t\tDice = %d\n",dice);
                                        printf("--------------------------------------------------------------------------\n");

									}
										else
                                                {

                                                    printf("Range exceeded of Player 1.\n");
                                                    displaychart(cur_pos2,"-P2-");
                                                }
                                                break;



							case '3':dice=rd();
                            system("cls");
                            printf("--------------------------------------------------------------------------\n");
                                    cur_pos3=dice+cur_pos3;
                                    if(cur_pos3<101)
                                    {
                                        if( cur_pos3 == 4)
										{
											printf("Horray! Up the ladder!\n\n");				//ladder
											 (cur_pos3=cur_pos3+21, "-P3-");
										}
										if( cur_pos3 == 21)
										{
											printf("Cheers! Up the ladder!\n\n");				//ladder
											 (cur_pos3=cur_pos3+18, "-P3-");
										}
										if( cur_pos3 == 27)
										{
											printf("Hiho! Up the ladder!\n\n");				//ladder
											 (cur_pos3=cur_pos3+47, "-P3-");
										}
										if( cur_pos3 == 43)
										{
											printf("Horray! Up the ladder!\n\n");				//ladder
											 (cur_pos3=cur_pos3+33, "-P3-");
										}
										if( cur_pos3 == 71)
										{
											printf("Bravo! Up the ladder!\n\n");				//ladder
											 (cur_pos3=cur_pos3+18, "-P3-");
										}
										if( cur_pos3 == 30)
										{
											printf("Ouch! Bitten by a snake!\n\n");								//snake
											 (cur_pos3=cur_pos3-23, "-P3-");
										}
										if( cur_pos3 == 47)
										{
											printf("Landed on a snake!Down we go '^'\n\n");						//snake
											 (cur_pos3=cur_pos3-32, "-P3-");
										}
										if( cur_pos3 == 56)
										{
											printf("Hmmm! You got bitten by a snake!Down we go '^'\n\n");			//snake
											 (cur_pos3=cur_pos3-37, "-P3-");
										}
										if( cur_pos3 == 73)
										{
											printf("Ouch! Bitten by a snake!Down we go '^'\n");					//snake
											 (cur_pos3=cur_pos3-22, "-P3-");
										}
										if( cur_pos3 == 82)
										{
											printf("Too bad you got bitten by a snake! Down we go '^'\n\n");		//snake
											 (cur_pos3=cur_pos3-40, "-P3-");
										}
										if( cur_pos3 == 92)
										{
											printf("Too bad you got bitten by a snake! Down we go '^'\n\n");		//snake
											 (cur_pos3=cur_pos3-12, "-P3-");
										}
										if( cur_pos3 == 98)
										{
											printf("Too bad you got bitten by a snake! Down we go '^'\n\n");		//snake
											 (cur_pos3=cur_pos3-43, "-P3-");
										}
										if (cur_pos3==48)
										{
											printf("WOW!Stepped on a power up. OPPONENTS will we deducted by %d steps!\n\n",dice);	//POWERUPS_Deduction bonus
											 (cur_pos2=cur_pos2-dice, "-P2-");
											 (cur_pos1=cur_pos1-dice, "-P1-");
											 (cur_pos4=cur_pos4-dice, "-P4-");
										}
										if (cur_pos3==48)
										{
											printf("WOW!Stepped on a power up.ALL POSITION will we deducted by %d steps!\n\n",dice);	//POWERUPS_Deduction bonus
											 (cur_pos1=cur_pos1-dice, "-P1-");
											 (cur_pos2=cur_pos2-dice, "-P2-");
											 (cur_pos3=cur_pos3-dice, "-P3-");
											 (cur_pos4=cur_pos4-dice, "-P4-");
										}
										if (cur_pos3==30)
										{
											printf("WOW!Stepped on a power up.Bonus %d steps added to you and opponets !\n\n",dice);			//POWERUPS_Additional bonus
											 (cur_pos1=cur_pos1+dice, "-P1-");
											 (cur_pos2=cur_pos2+dice, "-P2-");
											 (cur_pos3=cur_pos3+dice, "-P3-");
											 (cur_pos4=cur_pos4+dice, "-P4-");
										}
										if (cur_pos3==11)
										{
											printf("WOW!Stepped on a power up.Bonus %d steps added!\n\n",dice);			//POWERUPS_Additional bonus
											 (cur_pos3=cur_pos3+dice, "-P3-");
										}
										if (cur_pos3==20)
										{
											printf("WOW!Stepped on a power up. Bonus Five %d steps added!\n\n",dice);					//POWERUPS_Additional bonus
											 (cur_pos3=cur_pos3+dice, "-P3-");
										}
										if (cur_pos3==97)
										{
											printf("WOW!Stepped on a power up. ALL Position will divided by 2 !\n");			//POWERUPS_double loss
											 (cur_pos1=cur_pos1/2, "-P1-");
											 (cur_pos2=cur_pos2/2, "-P2-");
											 (cur_pos3=cur_pos3/2, "-P3-");
											 (cur_pos4=cur_pos4/2, "-P4-");
										}
                                        else
                                        {
                                            displaychart(cur_pos3,"-P3-");
                                        }
                                        printf("\t\t\t\tDice = %d\n",dice);
                                        printf("--------------------------------------------------------------------------\n");

									}
										else
                                                {

                                                    printf("Range exceeded of Player 1.\n");
                                                    displaychart(cur_pos3,"-P3-");
                                                }
                                                break;




							case '4':dice=rd();
                            system("cls");
                            printf("--------------------------------------------------------------------------\n");
                                    cur_pos4=dice+cur_pos4;
                                    if(cur_pos4<101)
                                    {
                                        if( cur_pos4 == 4)
										{
											printf("Horray! Up the ladder!\n\n");				//ladder
											 (cur_pos4=cur_pos4+21, "-P4-");
										}
										if( cur_pos4 == 21)
										{
											printf("Cheers! Up the ladder!\n\n");				//ladder
											 (cur_pos4=cur_pos4+18, "-P4-");
										}
										if( cur_pos4 == 27)
										{
											printf("Hiho! Up the ladder!\n\n");				//ladder
											 (cur_pos4=cur_pos4+47, "-P4-");
										}
										if( cur_pos4 == 43)
										{
											printf("Horray! Up the ladder!\n\n");				//ladder
											 (cur_pos4=cur_pos4+33, "-P4-");
										}
										if( cur_pos4 == 71)
										{
											printf("Bravo! Up the ladder!\n\n");				//ladder
											 (cur_pos4=cur_pos4+18, "-P4-");
										}
										if( cur_pos4 == 30)
										{
											printf("Ouch! Bitten by a snake!\n\n");								//snake
											 (cur_pos4=cur_pos4-23, "-P4-");
										}
										if( cur_pos4 == 47)
										{
											printf("Landed on a snake!Down we go '^'\n\n");						//snake
											 (cur_pos4=cur_pos4-32, "-P4-");
										}
										if( cur_pos4 == 56)
										{
											printf("Hmmm! You got bitten by a snake!Down we go '^'\n\n");			//snake
											 (cur_pos4=cur_pos4-37, "-P4-");
										}
										if( cur_pos4 == 73)
										{
											printf("Ouch! Bitten by a snake!Down we go '^'\n");					//snake
											 (cur_pos4=cur_pos4-22, "-P4-");
										}
										if( cur_pos4 == 82)
										{
											printf("Too bad you got bitten by a snake! Down we go '^'\n\n");		//snake
											 (cur_pos4=cur_pos4-40, "-P4-");
										}
										if( cur_pos4 == 92)
										{
											printf("Too bad you got bitten by a snake! Down we go '^'\n\n");		//snake
											 (cur_pos4=cur_pos4-12, "-P4-");
										}
										if( cur_pos4 == 98)
										{
											printf("Too bad you got bitten by a snake! Down we go '^'\n\n");		//snake
											 (cur_pos4=cur_pos4-43, "-P4-");
										}
										if (cur_pos4==48)
										{
											printf("WOW!Stepped on a power up. OPPONENTS will we deducted by %d steps!\n\n",dice);	//POWERUPS_Deduction bonus
											 (cur_pos2=cur_pos2-dice, "-P2-");
											 (cur_pos3=cur_pos3-dice, "-P3-");
											 (cur_pos1=cur_pos1-dice, "-P1-");
											 (cur_pos5=cur_pos5-dice, "-P5-");
										}
										if (cur_pos4==48)
										{
											printf("WOW!Stepped on a power up.ALL POSITION will we deducted by %d steps!\n\n",dice);	//POWERUPS_Deduction bonus
											 (cur_pos1=cur_pos1-dice, "-P1-");
											 (cur_pos2=cur_pos2-dice, "-P2-");
											 (cur_pos3=cur_pos3-dice, "-P3-");
											 (cur_pos4=cur_pos4-dice, "-P4-");
										}
										if (cur_pos4==30)
										{
											printf("WOW!Stepped on a power up.Bonus %d steps added to ALL PLAYERS !\n\n",dice);			//POWERUPS_Additional bonus
											 (cur_pos1=cur_pos1+dice, "-P1-");
											 (cur_pos2=cur_pos2+dice, "-P2-");
											 (cur_pos3=cur_pos3+dice, "-P3-");
											 (cur_pos4=cur_pos4+dice, "-P4-");
										}
										if (cur_pos4==11)
										{
											printf("WOW!Stepped on a power up.Bonus %d steps added!\n\n",dice);			//POWERUPS_Additional bonus
											 (cur_pos4=cur_pos4+dice, "-P4-");
										}
										if (cur_pos4==20)
										{
											printf("WOW!Stepped on a power up. Bonus Five %d steps added!\n\n",dice);					//POWERUPS_Additional bonus
											 (cur_pos4=cur_pos4+dice, "-P4-");
										}
										if (cur_pos4==97)
										{
											printf("WOW!Stepped on a power up. ALL Position will divided by 2!\n");			//POWERUPS_double loss
											 (cur_pos1=cur_pos1/2, "-P1-");
											 (cur_pos2=cur_pos2/2, "-P2-");
											 (cur_pos3=cur_pos3/2, "-P3-");
											 (cur_pos4=cur_pos4/2, "-P4-");
										}
                                        else
                                        {
                                            displaychart(cur_pos4,"-P4-");
                                        }
                                        printf("\t\t\t\tDice = %d\n",dice);
                                        printf("--------------------------------------------------------------------------\n");

									}
										else
                                                {

                                                    printf("Range exceeded of Player 1.\n");
                                                    displaychart(cur_pos4,"-P4-");
                                                }
                                                break;
                default:
                printf("\n\n\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
                printf("\n\n\t\t\t\t    Incorrect choice.Try Again\n");
                printf("\n\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");

        }

    }  //players4

    P5: while (7) // 5 PLAYERS LOOP
        {
            printf("\n\tFIVE PLAYERS\n\n\n");
            printf("\t[e] to Exit\n\n");
            printf("\t[1] TO Play %s",&name_1);
            printf("\t[2] TO Play %s",&name_2);
            printf("\t[3] TO Play %s\n",&name_3);
            printf("\t[4] TO Play %s",&name_4);
            printf("\t[5] TO Play %s\n\n\n",&name_5);

            printf("\t%s position is %d",&name_1,cur_pos1);
            printf("  |  %s position is %d",&name_2,cur_pos2);
            printf("  |  %s position is %d\n",&name_3,cur_pos3);
            printf("\t%s position is %d",&name_4,cur_pos4);
            printf("  |  %s position is %d\n\n\n",&name_5,cur_pos5);

            printf("\tSNAKES: | 30 to 7 | 47 to 15 | 56 to 19 | 73 to 51 | 82 to 42 | 92 to 75 | 98 to 55  |\n");
            printf("\tLADDERS:| 4 to 25 | 21 to 39 | 27 to 74 | 43 to 76 | 71 to 89 | \n\n");
            printf("\tPower Ups: | 48 = Random Deduction | 30 = Random Bonus To All | 11 = Random Bonus      |\n");
            printf("\t           | 20 = Random Bonus     | 97 = Double Loss         | 14 = Random Deduction |\n\n\n");
            printf("\tINPUT:  ");
		    scanf("%s", &plyr5);
            switch(plyr5)
                {
                    case 'e'://TO MAIN MENU
                    system("cls");
                    goto MM;
                    break;

                            case '1':dice=rd();
                            system("cls");
                            printf("--------------------------------------------------------------------------\n");
                                    cur_pos1=dice+cur_pos1;
                                    if(cur_pos1<101)
                                    {
                                        if( cur_pos1 == 4)
										{
											printf("Horray! Up the ladder!\n\n");				//ladder
											 (cur_pos1=cur_pos1+21, "-P1-");
										}
										if( cur_pos1 == 21)
										{
											printf("Cheers! Up the ladder!\n\n");				//ladder
											 (cur_pos1=cur_pos1+18, "-P1-");
										}
										if( cur_pos1 == 27)
										{
											printf("Hiho! Up the ladder!\n\n");				//ladder
											 (cur_pos1=cur_pos1+47, "-P1-");
										}
										if( cur_pos1 == 43)
										{
											printf("Horray! Up the ladder!\n\n");				//ladder
											 (cur_pos1=cur_pos1+33, "-P1-");
										}
										if( cur_pos1 == 71)
										{
											printf("Bravo! Up the ladder!\n\n");				//ladder
											 (cur_pos1=cur_pos1+18, "-P1-");
										}
										if( cur_pos1 == 30)
										{
											printf("Ouch! Bitten by a snake!\n\n");								//snake
											 (cur_pos1=cur_pos1-23, "-P1-");
										}
										if( cur_pos1 == 47)
										{
											printf("Landed on a snake!Down we go '^'\n\n");						//snake
											 (cur_pos1=cur_pos1-32, "-P1-");
										}
										if( cur_pos1 == 56)
										{
											printf("Hmmm! You got bitten by a snake!Down we go '^'\n\n");			//snake
											 (cur_pos1=cur_pos1-37, "-P1-");
										}
										if( cur_pos1 == 73)
										{
											printf("Ouch! Bitten by a snake!Down we go '^'\n");					//snake
											 (cur_pos1=cur_pos1-22, "-P1-");
										}
										if( cur_pos1 == 82)
										{
											printf("Too bad you got bitten by a snake! Down we go '^'\n\n");		//snake
											 (cur_pos1=cur_pos1-40, "-P1-");
										}
										if( cur_pos1 == 92)
										{
											printf("Too bad you got bitten by a snake! Down we go '^'\n\n");		//snake
											 (cur_pos1=cur_pos1-12, "-P1-");
										}
										if( cur_pos1 == 98)
										{
											printf("Too bad you got bitten by a snake! Down we go '^'\n\n");		//snake
											 (cur_pos1=cur_pos1-43, "-P1-");
										}
										if (cur_pos1==48)
										{
											printf("WOW!Stepped on a power up. Opponents positions will we deducted by %d steps!\n\n",dice);	//POWERUPS_Deduction bonus

											 (cur_pos2=cur_pos2-dice, "-P2-");
											 (cur_pos3=cur_pos3-dice, "-P3-");
											 (cur_pos4=cur_pos4-dice, "-P4-");
											 (cur_pos5=cur_pos5-dice, "-P5-");
										}
										if (cur_pos1==48)
										{
											printf("WOW!Stepped on a power up. ALL positions will we deducted by %d steps!\n\n",dice);	//POWERUPS_Deduction bonus
											 (cur_pos1=cur_pos1-dice, "-P1-");

											 (cur_pos2=cur_pos2-dice, "-P2-");
											 (cur_pos3=cur_pos3-dice, "-P3-");
											 (cur_pos4=cur_pos4-dice, "-P4-");
											 (cur_pos5=cur_pos5-dice, "-P5-");
										}
										if (cur_pos1==30)
										{
											printf("WOW!Stepped on a power up. Bonus %d steps added to you and opponets !\n\n",dice);			//POWERUPS_Additional bonus
											 (cur_pos1=cur_pos1+dice, "-P1-");

											 (cur_pos2=cur_pos2+dice, "-P2-");
											 (cur_pos3=cur_pos3+dice, "-P3-");
											 (cur_pos4=cur_pos4+dice, "-P4-");
											 (cur_pos5=cur_pos5+dice, "-P5-");
										}
										if (cur_pos1==11)
										{
											printf("WOW!Stepped on a power up. Bonus %d steps added!\n\n",dice);			//POWERUPS_Additional bonus
											 (cur_pos1=cur_pos1+dice, "-P1-");
										}
										if (cur_pos1==20)
										{
											printf("WOW!Stepped on a power up. Bonus Five s%d steps added!\n\n",dice);			//POWERUPS_Additional bonus
											 (cur_pos1=cur_pos1+dice, "-P1-");
										}
										if (cur_pos1==97)
										{
											printf("WOW!Stepped on a power up. ALL Position will divided by 2!\n");			//POWERUPS_double loss
											 (cur_pos1=cur_pos1/2, "-P1-");
											 (cur_pos2=cur_pos2/2, "-P2-");
											 (cur_pos3=cur_pos3/2, "-P3-");
											 (cur_pos4=cur_pos4/2, "-P4-");
											 (cur_pos5=cur_pos5/2, "-P5-");

                                        }
                                        else
                                        {
                                            displaychart(cur_pos1,"-P1-");
                                        }
                                        printf("\t\t\t\tDice = %d\n",dice);
                                        printf("--------------------------------------------------------------------------\n");

									}
										else
                                                {

                                                    printf("Range exceeded of Player 1.\n");
                                                    displaychart(cur_pos1,"-P1-");
                                                }
                                                break;



							case '2':dice=rd();
                            system("cls");
                            printf("--------------------------------------------------------------------------\n");
                                    cur_pos2=dice+cur_pos2;
                                    if(cur_pos2<101)
                                    {
                                        if( cur_pos2 == 4)
										{
											printf("Horray! Up the ladder!\n\n");				//ladder
											 (cur_pos2=cur_pos2+21, "-P2-");
										}
										if( cur_pos2 == 21)
										{
											printf("Cheers! Up the ladder!\n\n");				//ladder
											 (cur_pos2=cur_pos2+18, "-P2-");
										}
										if( cur_pos2 == 27)
										{
											printf("Hiho! Up the ladder!\n\n");				//ladder
											 (cur_pos2=cur_pos2+47, "-P2-");
										}
										if( cur_pos2 == 43)
										{
											printf("Horray! Up the ladder!\n\n");				//ladder
											 (cur_pos2=cur_pos2+33, "-P2-");
										}
										if( cur_pos2 == 71)
										{
											printf("Bravo! Up the ladder!\n\n");				//ladder
											 (cur_pos2=cur_pos2+18, "-P2-");
										}
										if( cur_pos2 == 30)
										{
											printf("Ouch! Bitten by a snake!\n\n");								//snake
											 (cur_pos2=cur_pos2-23, "-P2-");
										}
										if( cur_pos2 == 47)
										{
											printf("Landed on a snake!Down we go '^'\n\n");						//snake
											 (cur_pos2=cur_pos2-32, "-P2-");
										}
										if( cur_pos2 == 56)
										{
											printf("Hmmm! You got bitten by a snake!Down we go '^'\n\n");			//snake
											 (cur_pos2=cur_pos2-37, "-P2-");
										}
										if( cur_pos2 == 73)
										{
											printf("Ouch! Bitten by a snake!Down we go '^'\n");					//snake
											 (cur_pos2=cur_pos2-22, "-P2-");
										}
										if( cur_pos2 == 82)
										{
											printf("Too bad you got bitten by a snake! Down we go '^'\n\n");		//snake
											 (cur_pos2=cur_pos2-40, "-P2-");
										}
										if( cur_pos2 == 92)
										{
											printf("Too bad you got bitten by a snake! Down we go '^'\n\n");		//snake
											 (cur_pos2=cur_pos2-12, "-P2-");
										}
										if( cur_pos2 == 98)
										{
											printf("Too bad you got bitten by a snake! Down we go '^'\n\n");		//snake
											 (cur_pos2=cur_pos2-43, "-P2-");
										}
										if (cur_pos2==48)
										{
											printf("WOW!Stepped on a power up. OPPONENTS will we deducted by %d steps!\n\n",dice);	//POWERUPS_Deduction bonus
											 (cur_pos1=cur_pos1-dice, "-P1-");
											 (cur_pos3=cur_pos3-dice, "-P3-");
											 (cur_pos4=cur_pos4-dice, "-P4-");
											 (cur_pos5=cur_pos5-dice, "-P5-");
										}
										if (cur_pos2==48)
										{
											printf("WOW!Stepped on a power up.ALL POSITION will we deducted by %d steps!\n\n",dice);	//POWERUPS_Deduction bonus
											 (cur_pos1=cur_pos1-dice, "-P1-");
											 (cur_pos2=cur_pos2-dice, "-P2-");
											 (cur_pos3=cur_pos3-dice, "-P3-");
											 (cur_pos4=cur_pos4-dice, "-P4-");
											 (cur_pos5=cur_pos5-dice, "-P5-");
										}
										if (cur_pos2==30)
										{
											printf("WOW!Stepped on a power up.Bonus %d steps added to ALL players !\n\n",dice);			//POWERUPS_Additional bonus
											 (cur_pos1=cur_pos1+dice, "-P1-");
											 (cur_pos2=cur_pos2+dice, "-P2-");
											 (cur_pos3=cur_pos3+dice, "-P3-");
											 (cur_pos4=cur_pos4+dice, "-P4-");
											 (cur_pos5=cur_pos5+dice, "-P5-");
										}
										if (cur_pos2==11)
										{
											printf("WOW!Stepped on a power up.Bonus %d steps added!\n\n",dice);			//POWERUPS_Additional bonus
											 (cur_pos2=cur_pos2+dice, "-P2-");
										}
										if (cur_pos2==20)
										{
											printf("WOW!Stepped on a power up. Bonus Five %d steps added!\n\n",dice);					//POWERUPS_Additional bonus
											 (cur_pos2=cur_pos2+dice, "-P2-");
										}
										if (cur_pos2==97)
										{
											printf("WOW!Stepped on a power up. ALL Player Position will divided by 2 !\n");			//POWERUPS_double loss
											 (cur_pos1=cur_pos1/2, "-P1-");
											 (cur_pos2=cur_pos2/2, "-P2-");
											 (cur_pos3=cur_pos3/2, "-P3-");
											 (cur_pos4=cur_pos4/2, "-P4-");
											 (cur_pos5=cur_pos5/2, "-P5-");
										}
                                        else
                                        {
                                            displaychart(cur_pos2,"-P2-");
                                        }
                                        printf("\t\t\t\tDice = %d\n",dice);
                                        printf("--------------------------------------------------------------------------\n");

									}
										else
                                                {

                                                    printf("Range exceeded of Player 1.\n");
                                                    displaychart(cur_pos2,"-P2-");
                                                }
                                                break;



							case '3':dice=rd();
                            system("cls");
                            printf("--------------------------------------------------------------------------\n");
                                    cur_pos3=dice+cur_pos3;
                                    if(cur_pos3<101)
                                    {
                                        if( cur_pos3 == 4)
										{
											printf("Horray! Up the ladder!\n\n");				//ladder
											 (cur_pos3=cur_pos3+21, "-P3-");
										}
										if( cur_pos3 == 21)
										{
											printf("Cheers! Up the ladder!\n\n");				//ladder
											 (cur_pos3=cur_pos3+18, "-P3-");
										}
										if( cur_pos3 == 27)
										{
											printf("Hiho! Up the ladder!\n\n");				//ladder
											 (cur_pos3=cur_pos3+47, "-P3-");
										}
										if( cur_pos3 == 43)
										{
											printf("Horray! Up the ladder!\n\n");				//ladder
											 (cur_pos3=cur_pos3+33, "-P3-");
										}
										if( cur_pos3 == 71)
										{
											printf("Bravo! Up the ladder!\n\n");				//ladder
											 (cur_pos3=cur_pos3+18, "-P3-");
										}
										if( cur_pos3 == 30)
										{
											printf("Ouch! Bitten by a snake!\n\n");								//snake
											 (cur_pos3=cur_pos3-23, "-P3-");
										}
										if( cur_pos3 == 47)
										{
											printf("Landed on a snake!Down we go '^'\n\n");						//snake
											 (cur_pos3=cur_pos3-32, "-P3-");
										}
										if( cur_pos3 == 56)
										{
											printf("Hmmm! You got bitten by a snake!Down we go '^'\n\n");			//snake
											 (cur_pos3=cur_pos3-37, "-P3-");
										}
										if( cur_pos3 == 73)
										{
											printf("Ouch! Bitten by a snake!Down we go '^'\n");					//snake
											 (cur_pos3=cur_pos3-22, "-P3-");
										}
										if( cur_pos3 == 82)
										{
											printf("Too bad you got bitten by a snake! Down we go '^'\n\n");		//snake
											 (cur_pos3=cur_pos3-40, "-P3-");
										}
										if( cur_pos3 == 92)
										{
											printf("Too bad you got bitten by a snake! Down we go '^'\n\n");		//snake
											 (cur_pos3=cur_pos3-12, "-P3-");
										}
										if( cur_pos3 == 98)
										{
											printf("Too bad you got bitten by a snake! Down we go '^'\n\n");		//snake
											 (cur_pos3=cur_pos3-43, "-P3-");
										}
										if (cur_pos3==48)
										{
											printf("WOW!Stepped on a power up. OPPONENTS will we deducted by %d steps!\n\n",dice);	//POWERUPS_Deduction bonus
											 (cur_pos2=cur_pos2-dice, "-P2-");
											 (cur_pos1=cur_pos1-dice, "-P1-");
											 (cur_pos4=cur_pos4-dice, "-P4-");
											 (cur_pos5=cur_pos5-dice, "-P5-");
										}
										if (cur_pos3==48)
										{
											printf("WOW!Stepped on a power up.ALL POSITION will we deducted by %d steps!\n\n",dice);	//POWERUPS_Deduction bonus
											 (cur_pos1=cur_pos1-dice, "-P6-");
											 (cur_pos6=cur_pos6-dice, "-P6-");
											 (cur_pos2=cur_pos2-dice, "-P2-");
											 (cur_pos3=cur_pos3-dice, "-P3-");
											 (cur_pos4=cur_pos4-dice, "-P4-");
											 (cur_pos5=cur_pos5-dice, "-P5-");
										}
										if (cur_pos3==30)
										{
											printf("WOW!Stepped on a power up.Bonus %d steps added to you and opponets !\n\n",dice);			//POWERUPS_Additional bonus
											 (cur_pos1=cur_pos1+dice, "-P1-");
											 (cur_pos2=cur_pos2+dice, "-P2-");
											 (cur_pos3=cur_pos3+dice, "-P3-");
											 (cur_pos4=cur_pos4+dice, "-P4-");
											 (cur_pos5=cur_pos5+dice, "-P5-");
										}
										if (cur_pos3==11)
										{
											printf("WOW!Stepped on a power up.Bonus %d steps added!\n\n",dice);			//POWERUPS_Additional bonus
											 (cur_pos3=cur_pos3+dice, "-P3-");
										}
										if (cur_pos3==20)
										{
											printf("WOW!Stepped on a power up. Bonus Five %d steps added!\n\n",dice);					//POWERUPS_Additional bonus
											 (cur_pos3=cur_pos3+dice, "-P3-");
										}
										if (cur_pos3==97)
										{
											printf("WOW!Stepped on a power up. ALL Position will divided by 2 !\n");			//POWERUPS_double loss
											 (cur_pos1=cur_pos1/2, "-P1-");
											 (cur_pos2=cur_pos2/2, "-P2-");
											 (cur_pos3=cur_pos3/2, "-P3-");
											 (cur_pos4=cur_pos4/2, "-P4-");
											 (cur_pos5=cur_pos5/2, "-P5-");
										}
                                        else
                                        {
                                            displaychart(cur_pos3,"-P3-");
                                        }
                                        printf("\t\t\t\tDice = %d\n",dice);
                                        printf("--------------------------------------------------------------------------\n");

									}
										else
                                                {

                                                    printf("Range exceeded of Player 1.\n");
                                                    displaychart(cur_pos3,"-P3-");
                                                }
                                                break;




							case '4':dice=rd();
                            system("cls");
                            printf("--------------------------------------------------------------------------\n");
                                    cur_pos4=dice+cur_pos4;
                                    if(cur_pos4<101)
                                    {
                                        if( cur_pos4 == 4)
										{
											printf("Horray! Up the ladder!\n\n");				//ladder
											 (cur_pos4=cur_pos4+21, "-P4-");
										}
										if( cur_pos4 == 21)
										{
											printf("Cheers! Up the ladder!\n\n");				//ladder
											 (cur_pos4=cur_pos4+18, "-P4-");
										}
										if( cur_pos4 == 27)
										{
											printf("Hiho! Up the ladder!\n\n");				//ladder
											 (cur_pos4=cur_pos4+47, "-P4-");
										}
										if( cur_pos4 == 43)
										{
											printf("Horray! Up the ladder!\n\n");				//ladder
											 (cur_pos4=cur_pos4+33, "-P4-");
										}
										if( cur_pos4 == 71)
										{
											printf("Bravo! Up the ladder!\n\n");				//ladder
											 (cur_pos4=cur_pos4+18, "-P4-");
										}
										if( cur_pos4 == 30)
										{
											printf("Ouch! Bitten by a snake!\n\n");								//snake
											 (cur_pos4=cur_pos4-23, "-P4-");
										}
										if( cur_pos4 == 47)
										{
											printf("Landed on a snake!Down we go '^'\n\n");						//snake
											 (cur_pos4=cur_pos4-32, "-P4-");
										}
										if( cur_pos4 == 56)
										{
											printf("Hmmm! You got bitten by a snake!Down we go '^'\n\n");			//snake
											 (cur_pos4=cur_pos4-37, "-P4-");
										}
										if( cur_pos4 == 73)
										{
											printf("Ouch! Bitten by a snake!Down we go '^'\n");					//snake
											 (cur_pos4=cur_pos4-22, "-P4-");
										}
										if( cur_pos4 == 82)
										{
											printf("Too bad you got bitten by a snake! Down we go '^'\n\n");		//snake
											 (cur_pos4=cur_pos4-40, "-P4-");
										}
										if( cur_pos4 == 92)
										{
											printf("Too bad you got bitten by a snake! Down we go '^'\n\n");		//snake
											 (cur_pos4=cur_pos4-12, "-P4-");
										}
										if( cur_pos4 == 98)
										{
											printf("Too bad you got bitten by a snake! Down we go '^'\n\n");		//snake
											 (cur_pos4=cur_pos4-43, "-P4-");
										}
										if (cur_pos4==48)
										{
											printf("WOW!Stepped on a power up. OPPONENTS will we deducted by %d steps!\n\n",dice);	//POWERUPS_Deduction bonus
											 (cur_pos2=cur_pos2-dice, "-P2-");
											 (cur_pos3=cur_pos3-dice, "-P3-");
											 (cur_pos1=cur_pos1-dice, "-P1-");
											 (cur_pos5=cur_pos5-dice, "-P5-");
										}
										if (cur_pos4==48)
										{
											printf("WOW!Stepped on a power up.ALL POSITION will we deducted by %d steps!\n\n",dice);	//POWERUPS_Deduction bonus
											 (cur_pos1=cur_pos1-dice, "-P1-");
											 (cur_pos2=cur_pos2-dice, "-P2-");
											 (cur_pos3=cur_pos3-dice, "-P3-");
											 (cur_pos4=cur_pos4-dice, "-P4-");
											 (cur_pos5=cur_pos5-dice, "-P5-");
										}
										if (cur_pos4==30)
										{
											printf("WOW!Stepped on a power up.Bonus %d steps added to ALL PLAYERS !\n\n",dice);			//POWERUPS_Additional bonus
											 (cur_pos1=cur_pos1+dice, "-P1-");
											 (cur_pos2=cur_pos2+dice, "-P2-");
											 (cur_pos3=cur_pos3+dice, "-P3-");
											 (cur_pos4=cur_pos4+dice, "-P4-");
											 (cur_pos5=cur_pos5+dice, "-P5-");
										}
										if (cur_pos4==11)
										{
											printf("WOW!Stepped on a power up.Bonus %d steps added!\n\n",dice);			//POWERUPS_Additional bonus
											 (cur_pos4=cur_pos4+dice, "-P4-");
										}
										if (cur_pos4==20)
										{
											printf("WOW!Stepped on a power up. Bonus Five %d steps added!\n\n",dice);					//POWERUPS_Additional bonus
											 (cur_pos4=cur_pos4+dice, "-P4-");
										}
										if (cur_pos4==97)
										{
											printf("WOW!Stepped on a power up. ALL Position will divided by 2!\n");			//POWERUPS_double loss
											 (cur_pos1=cur_pos1/2, "-P1-");
											 (cur_pos2=cur_pos2/2, "-P2-");
											 (cur_pos3=cur_pos3/2, "-P3-");
											 (cur_pos4=cur_pos4/2, "-P4-");
											 (cur_pos5=cur_pos5/2, "-P5-");
										}
                                        else
                                        {
                                            displaychart(cur_pos4,"-P4-");
                                        }
                                        printf("\t\t\t\tDice = %d\n",dice);
                                        printf("--------------------------------------------------------------------------\n");

									}
										else
                                                {

                                                    printf("Range exceeded of Player 1.\n");
                                                    displaychart(cur_pos4,"-P4-");
                                                }
                                                break;

							case '5':dice=rd();
                            system("cls");
                            printf("--------------------------------------------------------------------------\n");
                                    cur_pos5=dice+cur_pos5;
                                    if(cur_pos5<101)
                                    {
                                        if( cur_pos5 == 4)
										{
											printf("Horray! Up the ladder!\n\n");				//ladder
											 (cur_pos5=cur_pos5+21, "-P5-");
										}
										if( cur_pos5 == 21)
										{
											printf("Cheers! Up the ladder!\n\n");				//ladder
											 (cur_pos5=cur_pos5+18, "-P5-");
										}
										if( cur_pos5 == 27)
										{
											printf("Hiho! Up the ladder!\n\n");				//ladder
											 (cur_pos5=cur_pos5+47, "-P5-");
										}
										if( cur_pos5 == 43)
										{
											printf("Horray! Up the ladder!\n\n");				//ladder
											 (cur_pos5=cur_pos5+33, "-P5-");
										}
										if( cur_pos5 == 71)
										{
											printf("Bravo! Up the ladder!\n\n");				//ladder
											 (cur_pos5=cur_pos5+18, "-P5-");
										}
										if( cur_pos5 == 30)
										{
											printf("Ouch! Bitten by a snake!\n\n");								//snake
											 (cur_pos5=cur_pos5-23, "-P5-");
										}
										if( cur_pos5 == 47)
										{
											printf("Landed on a snake!Down we go '^'\n\n");						//snake
											 (cur_pos5=cur_pos5-32, "-P5-");
										}
										if( cur_pos5 == 56)
										{
											printf("Hmmm! You got bitten by a snake!Down we go '^'\n\n");			//snake
											 (cur_pos5=cur_pos5-37, "-P5-");
										}
										if( cur_pos5 == 73)
										{
											printf("Ouch! Bitten by a snake!Down we go '^'\n");					//snake
											 (cur_pos5=cur_pos5-22, "-P5-");
										}
										if( cur_pos5 == 82)
										{
											printf("Too bad you got bitten by a snake! Down we go '^'\n\n");		//snake
											 (cur_pos5=cur_pos5-40, "-P5-");
										}
										if( cur_pos5 == 92)
										{
											printf("Too bad you got bitten by a snake! Down we go '^'\n\n");		//snake
											 (cur_pos5=cur_pos5-12, "-P5-");
										}
										if( cur_pos5 == 98)
										{
											printf("Too bad you got bitten by a snake! Down we go '^'\n\n");		//snake
											 (cur_pos5=cur_pos5-43, "-P5-");
										}
										if (cur_pos5==48)
										{
											printf("WOW!Stepped on a power up.OPONETS possotion will be DEDUCTED by %d steps!\n\n",dice);	//POWERUPS_Deduction bonus
											 (cur_pos2=cur_pos2-dice, "-P2-");
											 (cur_pos3=cur_pos3-dice, "-P3-");
											 (cur_pos4=cur_pos4-dice, "-P4-");
											 (cur_pos1=cur_pos1-dice, "-P1-");
										}
										if (cur_pos5==48)
										{
											printf("WOW!Stepped on a power up.ALL POSITION will we deducted by %d steps!\n\n",dice);	//POWERUPS_Deduction bonus
											 (cur_pos1=cur_pos1-dice, "-P1-");
											 (cur_pos2=cur_pos2-dice, "-P2-");
											 (cur_pos3=cur_pos3-dice, "-P3-");
											 (cur_pos4=cur_pos4-dice, "-P4-");
											 (cur_pos5=cur_pos5-dice, "-P5-");

										}
										if (cur_pos5==30)
										{
											printf("WOW!Stepped on a power up.Bonus %d steps added to you and opponets !\n\n",dice);			//POWERUPS_Additional bonus
											 (cur_pos1=cur_pos1+dice, "-P1-");
											 (cur_pos2=cur_pos2+dice, "-P2-");
											 (cur_pos3=cur_pos3+dice, "-P3-");
											 (cur_pos4=cur_pos4+dice, "-P4-");
											 (cur_pos5=cur_pos5+dice, "-P5-");

										}
										if (cur_pos5==11)
										{
											printf("WOW!Stepped on a power up.Bonus %d steps added!\n\n",dice);			//POWERUPS_Additional bonus
											 (cur_pos5=cur_pos5+dice, "-P5-");
										}
										if (cur_pos5==20)
										{
											printf("WOW!Stepped on a power up. Bonus Five %d steps added!\n\n",dice);					//POWERUPS_Additional bonus
											 (cur_pos5=cur_pos5+dice, "-P5-");
										}
										if (cur_pos5==97)
										{
											printf("WOW!Stepped on a power up. ALL Position will divided by 2!\n");			//POWERUPS_double loss
											 (cur_pos1=cur_pos5/2, "-P1-");
											 (cur_pos2=cur_pos2/2, "-P2-");
											 (cur_pos3=cur_pos3/2, "-P3-");
											 (cur_pos4=cur_pos4/2, "-P4-");
											 (cur_pos5=cur_pos5/2, "-P5-");

										}
                                        else
                                        {
                                            displaychart(cur_pos5,"-P5-");
                                        }
                                        printf("\t\t\t\tDice = %d\n",dice);
                                        printf("--------------------------------------------------------------------------\n");

									}
										else
                                                {

                                                    printf("Range exceeded of Player 1.\n");
                                                    displaychart(cur_pos5,"-P5-");
                                                }
                                                break;

                      default:
                printf("\n\n\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
                printf("\n\n\t\t\t\t    Incorrect choice.Try Again\n");
                printf("\n\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");


		}

    }  //players5

    P6: while (8) // 6 PLAYERS LOOP
        {
            printf("\n\tSIX PLAYERS\n\n\n");
            printf("\t[e] to Exit\n\n");
            printf("\t[1] TO Play %s",&name_1);
            printf("\t[2] TO Play %s",&name_2);
            printf("\t[3] TO Play %s\n",&name_3);
            printf("\t[4] TO Play %s",&name_4);
            printf("\t[5] TO Play %s",&name_5);
            printf("\t[6] TO Play %s\n\n\n",&name_6);

            printf("\t%s position is %d",&name_1,cur_pos1);
            printf("  |  %s position is %d",&name_2,cur_pos2);
            printf("  |  %s position is %d\n",&name_3,cur_pos3);
            printf("\t%s position is %d",&name_4,cur_pos4);
            printf("  |  %s position is %d",&name_5,cur_pos5);
            printf("  |  %s position is %d\n\n\n",&name_6,cur_pos6);


            printf("\tSNAKES: | 30 to 7 | 47 to 15 | 56 to 19 | 73 to 51 | 82 to 42 | 92 to 75 | 98 to 55  |\n");
            printf("\tLADDERS:| 4 to 25 | 21 to 39 | 27 to 74 | 43 to 76 | 71 to 89 | \n\n");
            printf("\tPower Ups: | 48 = Random Deduction | 30 = Random Bonus To All | 11 = Random Bonus      |\n");
            printf("\t           | 20 = Random Bonus     | 97 = Double Loss         | 14 = Random Deduction |\n\n\n");
            printf("\tINPUT:  ");
		    scanf("%s", &plyr6);
            switch(plyr6)
                {
                    case 'e'://TO MAIN MENU
                    system("cls");
                    goto MM;
                    break;
                            case '1':dice=rd();
                            system("cls");
                            printf("--------------------------------------------------------------------------\n");
                                    cur_pos1=dice+cur_pos1;
                                    if(cur_pos1<101)
                                    {
                                        if( cur_pos1 == 4)
										{
											printf("Horray! Up the ladder!\n\n");				//ladder
											 (cur_pos1=cur_pos1+21, "-P1-");
										}
										if( cur_pos1 == 21)
										{
											printf("Cheers! Up the ladder!\n\n");				//ladder
											 (cur_pos1=cur_pos1+18, "-P1-");
										}
										if( cur_pos1 == 27)
										{
											printf("Hiho! Up the ladder!\n\n");				//ladder
											 (cur_pos1=cur_pos1+47, "-P1-");
										}
										if( cur_pos1 == 43)
										{
											printf("Horray! Up the ladder!\n\n");				//ladder
											 (cur_pos1=cur_pos1+33, "-P1-");
										}
										if( cur_pos1 == 71)
										{
											printf("Bravo! Up the ladder!\n\n");				//ladder
											 (cur_pos1=cur_pos1+18, "-P1-");
										}
										if( cur_pos1 == 30)
										{
											printf("Ouch! Bitten by a snake!\n\n");								//snake
											 (cur_pos1=cur_pos1-23, "-P1-");
										}
										if( cur_pos1 == 47)
										{
											printf("Landed on a snake!Down we go '^'\n\n");						//snake
											 (cur_pos1=cur_pos1-32, "-P1-");
										}
										if( cur_pos1 == 56)
										{
											printf("Hmmm! You got bitten by a snake!Down we go '^'\n\n");			//snake
											 (cur_pos1=cur_pos1-37, "-P1-");
										}
										if( cur_pos1 == 73)
										{
											printf("Ouch! Bitten by a snake!Down we go '^'\n");					//snake
											 (cur_pos1=cur_pos1-22, "-P1-");
										}
										if( cur_pos1 == 82)
										{
											printf("Too bad you got bitten by a snake! Down we go '^'\n\n");		//snake
											 (cur_pos1=cur_pos1-40, "-P1-");
										}
										if( cur_pos1 == 92)
										{
											printf("Too bad you got bitten by a snake! Down we go '^'\n\n");		//snake
											 (cur_pos1=cur_pos1-12, "-P1-");
										}
										if( cur_pos1 == 98)
										{
											printf("Too bad you got bitten by a snake! Down we go '^'\n\n");		//snake
											 (cur_pos1=cur_pos1-43, "-P1-");
										}

										if (cur_pos1==48)
										{
											printf("WOW!Stepped on a power up. ALL positions will we deducted by %d steps!\n\n",dice);	//POWERUPS_Deduction bonus
											 (cur_pos1=cur_pos1-dice, "-P1-");
											 (cur_pos6=cur_pos6-dice, "-P6-");
											 (cur_pos2=cur_pos2-dice, "-P2-");
											 (cur_pos3=cur_pos3-dice, "-P3-");
											 (cur_pos4=cur_pos4-dice, "-P4-");
											 (cur_pos5=cur_pos5-dice, "-P5-");
										}
										if (cur_pos1==30)
										{
											printf("WOW!Stepped on a power up. Bonus %d steps added to you and opponets !\n\n",dice);			//POWERUPS_Additional bonus
											 (cur_pos1=cur_pos1+dice, "-P1-");
											 (cur_pos1=cur_pos6+dice, "-P6-");
											 (cur_pos2=cur_pos2+dice, "-P2-");
											 (cur_pos3=cur_pos3+dice, "-P3-");
											 (cur_pos4=cur_pos4+dice, "-P4-");
											 (cur_pos5=cur_pos5+dice, "-P5-");
										}
										if (cur_pos1==11)
										{
											printf("WOW!Stepped on a power up. Bonus %d steps added!\n\n",dice);			//POWERUPS_Additional bonus
											 (cur_pos1=cur_pos1+dice, "-P1-");
										}
										if (cur_pos1==20)
										{
											printf("WOW!Stepped on a power up. Bonus Five s%d steps added!\n\n",dice);			//POWERUPS_Additional bonus
											 (cur_pos1=cur_pos1+dice, "-P1-");
										}
										if (cur_pos1==97)
										{
											printf("WOW!Stepped on a power up. Your Opponents of Position will divided by 2!\n");			//POWERUPS_double loss
											 (cur_pos1=cur_pos1/2, "-P1-");
											 (cur_pos2=cur_pos2/2, "-P2-");
											 (cur_pos3=cur_pos3/2, "-P3-");
											 (cur_pos4=cur_pos4/2, "-P4-");
											 (cur_pos5=cur_pos5/2, "-P5-");

                                        }
                                        else
                                        {
                                            displaychart(cur_pos1,"-P1-");
                                        }
                                        printf("\t\t\t\tDice = %d\n",dice);
                                        printf("--------------------------------------------------------------------------\n");

									}
										else
                                                {

                                                    printf("Range exceeded of Player 1.\n");
                                                    displaychart(cur_pos1,"-P1-");
                                                }
                                                break;



							case '2':dice=rd();
                            system("cls");
                            printf("--------------------------------------------------------------------------\n");
                                    cur_pos2=dice+cur_pos2;
                                    if(cur_pos2<101)
                                    {
                                        if( cur_pos2 == 4)
										{
											printf("Horray! Up the ladder!\n\n");				//ladder
											 (cur_pos2=cur_pos2+21, "-P2-");
										}
										if( cur_pos2 == 21)
										{
											printf("Cheers! Up the ladder!\n\n");				//ladder
											 (cur_pos2=cur_pos2+18, "-P2-");
										}
										if( cur_pos2 == 27)
										{
											printf("Hiho! Up the ladder!\n\n");				//ladder
											 (cur_pos2=cur_pos2+47, "-P2-");
										}
										if( cur_pos2 == 43)
										{
											printf("Horray! Up the ladder!\n\n");				//ladder
											 (cur_pos2=cur_pos2+33, "-P2-");
										}
										if( cur_pos2 == 71)
										{
											printf("Bravo! Up the ladder!\n\n");				//ladder
											 (cur_pos2=cur_pos2+18, "-P2-");
										}
										if( cur_pos2 == 30)
										{
											printf("Ouch! Bitten by a snake!\n\n");								//snake
											 (cur_pos2=cur_pos2-23, "-P2-");
										}
										if( cur_pos2 == 47)
										{
											printf("Landed on a snake!Down we go '^'\n\n");						//snake
											 (cur_pos2=cur_pos2-32, "-P2-");
										}
										if( cur_pos2 == 56)
										{
											printf("Hmmm! You got bitten by a snake!Down we go '^'\n\n");			//snake
											 (cur_pos2=cur_pos2-37, "-P2-");
										}
										if( cur_pos2 == 73)
										{
											printf("Ouch! Bitten by a snake!Down we go '^'\n");					//snake
											 (cur_pos2=cur_pos2-22, "-P2-");
										}
										if( cur_pos2 == 82)
										{
											printf("Too bad you got bitten by a snake! Down we go '^'\n\n");		//snake
											 (cur_pos2=cur_pos2-40, "-P2-");
										}
										if( cur_pos2 == 92)
										{
											printf("Too bad you got bitten by a snake! Down we go '^'\n\n");		//snake
											 (cur_pos2=cur_pos2-12, "-P2-");
										}
										if( cur_pos2 == 98)
										{
											printf("Too bad you got bitten by a snake! Down we go '^'\n\n");		//snake
											 (cur_pos2=cur_pos2-43, "-P2-");
										}

										if (cur_pos2==48)
										{
											printf("WOW!Stepped on a power up. ALL position will we deducted by %d steps!\n\n",dice);	//POWERUPS_Deduction bonus
											 (cur_pos1=cur_pos1-dice, "-P1-");
											 (cur_pos6=cur_pos6-dice, "-P6-");
											 (cur_pos2=cur_pos2-dice, "-P2-");
											 (cur_pos3=cur_pos3-dice, "-P3-");
											 (cur_pos4=cur_pos4-dice, "-P4-");
											 (cur_pos5=cur_pos5-dice, "-P5-");
										}
										if (cur_pos2==30)
										{
											printf("WOW!Stepped on a power up. Bonus %d steps added to ALL players!\n\n",dice);			//POWERUPS_Additional bonus
											 (cur_pos1=cur_pos1+dice, "-P1-");
											 (cur_pos6=cur_pos6+dice, "-P6-");
											 (cur_pos2=cur_pos2+dice, "-P2-");
											 (cur_pos3=cur_pos3+dice, "-P3-");
											 (cur_pos4=cur_pos4+dice, "-P4-");
											 (cur_pos5=cur_pos5+dice, "-P5-");
										}
										if (cur_pos2==11)
										{
											printf("WOW!Stepped on a power up.Bonus %d steps added!\n\n",dice);			//POWERUPS_Additional bonus
											 (cur_pos2=cur_pos2+dice, "-P2-");
										}
										if (cur_pos2==20)
										{
											printf("WOW!Stepped on a power up. Bonus Random %d steps added!\n\n",dice);					//POWERUPS_Additional bonus
											 (cur_pos2=cur_pos2+dice, "-P2-");
										}
										if (cur_pos2==97)
										{
											printf("WOW!Stepped on a power up. ALL Player Position will divided by 2 !\n");			//POWERUPS_double loss
											 (cur_pos1=cur_pos1/2, "-P1-");
											 (cur_pos2=cur_pos2/2, "-P2-");
											 (cur_pos3=cur_pos3/2, "-P3-");
											 (cur_pos4=cur_pos4/2, "-P4-");
											 (cur_pos5=cur_pos5/2, "-P5-");
											 (cur_pos6=cur_pos6/2, "-P5-");
										}
                                        else
                                        {
                                            displaychart(cur_pos2,"-P2-");
                                        }
                                        printf("\t\t\t\tDice = %d\n",dice);
                                        printf("--------------------------------------------------------------------------\n");

									}
										else
                                                {

                                                    printf("Range exceeded of Player 1.\n");
                                                    displaychart(cur_pos2,"-P2-");
                                                }
                                                break;



							case '3':dice=rd();
                            system("cls");
                            printf("--------------------------------------------------------------------------\n");
                                    cur_pos3=dice+cur_pos3;
                                    if(cur_pos3<101)
                                    {
                                        if( cur_pos3 == 4)
										{
											printf("Horray! Up the ladder!\n\n");				//ladder
											 (cur_pos3=cur_pos3+21, "-P3-");
										}
										if( cur_pos3 == 21)
										{
											printf("Cheers! Up the ladder!\n\n");				//ladder
											 (cur_pos3=cur_pos3+18, "-P3-");
										}
										if( cur_pos3 == 27)
										{
											printf("Hiho! Up the ladder!\n\n");				//ladder
											 (cur_pos3=cur_pos3+47, "-P3-");
										}
										if( cur_pos3 == 43)
										{
											printf("Horray! Up the ladder!\n\n");				//ladder
											 (cur_pos3=cur_pos3+33, "-P3-");
										}
										if( cur_pos3 == 71)
										{
											printf("Bravo! Up the ladder!\n\n");				//ladder
											 (cur_pos3=cur_pos3+18, "-P3-");
										}
										if( cur_pos3 == 30)
										{
											printf("Ouch! Bitten by a snake!\n\n");								//snake
											 (cur_pos3=cur_pos3-23, "-P3-");
										}
										if( cur_pos3 == 47)
										{
											printf("Landed on a snake!Down we go '^'\n\n");						//snake
											 (cur_pos3=cur_pos3-32, "-P3-");
										}
										if( cur_pos3 == 56)
										{
											printf("Hmmm! You got bitten by a snake!Down we go '^'\n\n");			//snake
											 (cur_pos3=cur_pos3-37, "-P3-");
										}
										if( cur_pos3 == 73)
										{
											printf("Ouch! Bitten by a snake!Down we go '^'\n");					//snake
											 (cur_pos3=cur_pos3-22, "-P3-");
										}
										if( cur_pos3 == 82)
										{
											printf("Too bad you got bitten by a snake! Down we go '^'\n\n");		//snake
											 (cur_pos3=cur_pos3-40, "-P3-");
										}
										if( cur_pos3 == 92)
										{
											printf("Too bad you got bitten by a snake! Down we go '^'\n\n");		//snake
											 (cur_pos3=cur_pos3-12, "-P3-");
										}
										if( cur_pos3 == 98)
										{
											printf("Too bad you got bitten by a snake! Down we go '^'\n\n");		//snake
											 (cur_pos3=cur_pos3-43, "-P3-");
										}

										if (cur_pos3==48)
										{
											printf("WOW!Stepped on a power up.ALL positions will we deducted by %d steps!\n\n",dice);	//POWERUPS_Deduction bonus
											 (cur_pos1=cur_pos1-dice, "-P1-");
											 (cur_pos6=cur_pos6-dice, "-P6-");
											 (cur_pos2=cur_pos2-dice, "-P2-");
											 (cur_pos3=cur_pos3-dice, "-P3-");
											 (cur_pos4=cur_pos4-dice, "-P4-");
											 (cur_pos5=cur_pos5-dice, "-P5-");
										}
										if (cur_pos3==30)
										{
											printf("WOW!Stepped on a power up.Bonus %d steps added to you and opponents !\n\n",dice);			//POWERUPS_Additional bonus
											 (cur_pos1=cur_pos1+dice, "-P1-");
											 (cur_pos6=cur_pos6+dice, "-P6-");
											 (cur_pos2=cur_pos2+dice, "-P2-");
											 (cur_pos3=cur_pos3+dice, "-P3-");
											 (cur_pos4=cur_pos4+dice, "-P4-");
											 (cur_pos5=cur_pos5+dice, "-P5-");
										}
										if (cur_pos3==11)
										{
											printf("WOW!Stepped on a power up.Bonus %d steps added!\n\n",dice);			//POWERUPS_Additional bonus
											 (cur_pos3=cur_pos3+dice, "-P3-");
										}
										if (cur_pos3==20)
										{
											printf("WOW!Stepped on a power up. Bonus Five %d steps added!\n\n",dice);					//POWERUPS_Additional bonus
											 (cur_pos3=cur_pos3+dice, "-P3-");
										}
										if (cur_pos3==97)
										{
											printf("WOW!Stepped on a power up. ALL Position will divided by 2 !\n");			//POWERUPS_double loss
											 (cur_pos1=cur_pos1/2, "-P1-");
											 (cur_pos2=cur_pos2/2, "-P2-");
											 (cur_pos3=cur_pos3/2, "-P3-");
											 (cur_pos4=cur_pos4/2, "-P4-");
											 (cur_pos5=cur_pos5/2, "-P5-");
											 (cur_pos6=cur_pos6/2, "-P6-");
										}
                                        else
                                        {
                                            displaychart(cur_pos3,"-P3-");
                                        }
                                        printf("\t\t\t\tDice = %d\n",dice);
                                        printf("--------------------------------------------------------------------------\n");

									}
										else
                                                {

                                                    printf("Range exceeded of Player 1.\n");
                                                    displaychart(cur_pos3,"-P3-");
                                                }
                                                break;




							case '4':dice=rd();
                            system("cls");
                            printf("--------------------------------------------------------------------------\n");
                                    cur_pos4=dice+cur_pos4;
                                    if(cur_pos4<101)
                                    {
                                        if( cur_pos4 == 4)
										{
											printf("Horray! Up the ladder!\n\n");				//ladder
											 (cur_pos4=cur_pos4+21, "-P4-");
										}
										if( cur_pos4 == 21)
										{
											printf("Cheers! Up the ladder!\n\n");				//ladder
											 (cur_pos4=cur_pos4+18, "-P4-");
										}
										if( cur_pos4 == 27)
										{
											printf("Hiho! Up the ladder!\n\n");				//ladder
											 (cur_pos4=cur_pos4+47, "-P4-");
										}
										if( cur_pos4 == 43)
										{
											printf("Horray! Up the ladder!\n\n");				//ladder
											 (cur_pos4=cur_pos4+33, "-P4-");
										}
										if( cur_pos4 == 71)
										{
											printf("Bravo! Up the ladder!\n\n");				//ladder
											 (cur_pos4=cur_pos4+18, "-P4-");
										}
										if( cur_pos4 == 30)
										{
											printf("Ouch! Bitten by a snake!\n\n");								//snake
											 (cur_pos4=cur_pos4-23, "-P4-");
										}
										if( cur_pos4 == 47)
										{
											printf("Landed on a snake!Down we go '^'\n\n");						//snake
											 (cur_pos4=cur_pos4-32, "-P4-");
										}
										if( cur_pos4 == 56)
										{
											printf("Hmmm! You got bitten by a snake!Down we go '^'\n\n");			//snake
											 (cur_pos4=cur_pos4-37, "-P4-");
										}
										if( cur_pos4 == 73)
										{
											printf("Ouch! Bitten by a snake!Down we go '^'\n");					//snake
											 (cur_pos4=cur_pos4-22, "-P4-");
										}
										if( cur_pos4 == 82)
										{
											printf("Too bad you got bitten by a snake! Down we go '^'\n\n");		//snake
											 (cur_pos4=cur_pos4-40, "-P4-");
										}
										if( cur_pos4 == 92)
										{
											printf("Too bad you got bitten by a snake! Down we go '^'\n\n");		//snake
											 (cur_pos4=cur_pos4-12, "-P4-");
										}
										if( cur_pos4 == 98)
										{
											printf("Too bad you got bitten by a snake! Down we go '^'\n\n");		//snake
											 (cur_pos4=cur_pos4-43, "-P4-");
										}


										if (cur_pos4==48)
										{
											printf("WOW!Stepped on a power up. ALL position will we deducted by %d steps!\n\n",dice);	//POWERUPS_Deduction bonus
											 (cur_pos1=cur_pos1-dice, "-P1-");
											 (cur_pos6=cur_pos6-dice, "-P6-");
											 (cur_pos2=cur_pos2-dice, "-P2-");
											 (cur_pos3=cur_pos3-dice, "-P3-");
											 (cur_pos4=cur_pos4-dice, "-P4-");
											 (cur_pos5=cur_pos5-dice, "-P5-");
										}
										if (cur_pos4==30)
										{
											printf("WOW!Stepped on a power up. Bonus %d steps added to ALL PLAYERS !\n\n",dice);			//POWERUPS_Additional bonus
											 (cur_pos1=cur_pos1+dice, "-P1-");
											 (cur_pos6=cur_pos6+dice, "-P6-");
											 (cur_pos2=cur_pos2+dice, "-P2-");
											 (cur_pos3=cur_pos3+dice, "-P3-");
											 (cur_pos4=cur_pos4+dice, "-P4-");
											 (cur_pos5=cur_pos5+dice, "-P5-");
										}
										if (cur_pos4==11)
										{
											printf("WOW!Stepped on a power up. Bonus %d steps added!\n\n",dice);			//POWERUPS_Additional bonus
											 (cur_pos4=cur_pos4+dice, "-P4-");
										}
										if (cur_pos4==20)
										{
											printf("WOW!Stepped on a power up. Bonus Five s%d steps added!\n\n",dice);			//POWERUPS_Additional bonus
											 (cur_pos4=cur_pos4+dice, "-P4-");
										}
										if (cur_pos4==97)
										{
											printf("WOW!Stepped on a power up. ALL Position will divided by 2!\n");			//POWERUPS_double loss
											 (cur_pos1=cur_pos1/2, "-P1-");
											 (cur_pos2=cur_pos2/2, "-P2-");
											 (cur_pos3=cur_pos3/2, "-P3-");
											 (cur_pos4=cur_pos4/2, "-P4-");
											 (cur_pos5=cur_pos5/2, "-P5-");
											 (cur_pos6=cur_pos6/2, "-P6-");
										}
                                        else
                                        {
                                            displaychart(cur_pos4,"-P4-");
                                        }
                                        printf("\t\t\t\tDice = %d\n",dice);
                                        printf("--------------------------------------------------------------------------\n");

									}
										else
                                                {

                                                    printf("Range exceeded of Player 1.\n");
                                                    displaychart(cur_pos4,"-P4-");
                                                }
                                                break;

							case '5':dice=rd();
                            system("cls");
                            printf("--------------------------------------------------------------------------\n");
                                    cur_pos5=dice+cur_pos5;
                                    if(cur_pos5<101)
                                    {
                                        if( cur_pos5 == 4)
										{
											printf("Horray! Up the ladder!\n\n");				//ladder
											 (cur_pos5=cur_pos5+21, "-P5-");
										}
										if( cur_pos5 == 21)
										{
											printf("Cheers! Up the ladder!\n\n");				//ladder
											 (cur_pos5=cur_pos5+18, "-P5-");
										}
										if( cur_pos5 == 27)
										{
											printf("Hiho! Up the ladder!\n\n");				//ladder
											 (cur_pos5=cur_pos5+47, "-P5-");
										}
										if( cur_pos5 == 43)
										{
											printf("Horray! Up the ladder!\n\n");				//ladder
											 (cur_pos5=cur_pos5+33, "-P5-");
										}
										if( cur_pos5 == 71)
										{
											printf("Bravo! Up the ladder!\n\n");				//ladder
											 (cur_pos5=cur_pos5+18, "-P5-");
										}
										if( cur_pos5 == 30)
										{
											printf("Ouch! Bitten by a snake!\n\n");								//snake
											 (cur_pos5=cur_pos5-23, "-P5-");
										}
										if( cur_pos5 == 47)
										{
											printf("Landed on a snake!Down we go '^'\n\n");						//snake
											 (cur_pos5=cur_pos5-32, "-P5-");
										}
										if( cur_pos5 == 56)
										{
											printf("Hmmm! You got bitten by a snake!Down we go '^'\n\n");			//snake
											 (cur_pos5=cur_pos5-37, "-P5-");
										}
										if( cur_pos5 == 73)
										{
											printf("Ouch! Bitten by a snake!Down we go '^'\n");					//snake
											 (cur_pos5=cur_pos5-22, "-P5-");
										}
										if( cur_pos5 == 82)
										{
											printf("Too bad you got bitten by a snake! Down we go '^'\n\n");		//snake
											 (cur_pos5=cur_pos5-40, "-P5-");
										}
										if( cur_pos5 == 92)
										{
											printf("Too bad you got bitten by a snake! Down we go '^'\n\n");		//snake
											 (cur_pos5=cur_pos5-12, "-P5-");
										}
										if( cur_pos5 == 98)
										{
											printf("Too bad you got bitten by a snake! Down we go '^'\n\n");		//snake
											 (cur_pos5=cur_pos5-43, "-P5-");
										}
										if (cur_pos5==48)
										{
											printf("WOW!Stepped on a power up. OPPONETS position will be DEDUCTED by %d steps!\n\n",dice);	//POWERUPS_Deduction bonus
											 (cur_pos6=cur_pos6-dice, "-P1-");
											 (cur_pos2=cur_pos2-dice, "-P2-");
											 (cur_pos3=cur_pos3-dice, "-P3-");
											 (cur_pos4=cur_pos4-dice, "-P4-");
											 (cur_pos1=cur_pos1-dice, "-P1-");
										}

										if (cur_pos5==30)
										{
											printf("WOW!Stepped on a power up. Bonus %d steps added to you and opponets!\n\n",dice);			//POWERUPS_Additional bonus
											 (cur_pos1=cur_pos1+dice, "-P1-");
											 (cur_pos6=cur_pos6+dice, "-P6-");
											 (cur_pos2=cur_pos2+dice, "-P2-");
											 (cur_pos3=cur_pos3+dice, "-P3-");
											 (cur_pos4=cur_pos4+dice, "-P4-");
											 (cur_pos5=cur_pos5+dice, "-P5-");

										}
										if (cur_pos5==11)
										{
											printf("WOW!Stepped on a power up.Bonus %d steps added!\n\n",dice);			//POWERUPS_Additional bonus
											 (cur_pos5=cur_pos5+dice, "-P5-");
										}
										if (cur_pos5==20)
										{
											printf("WOW!Stepped on a power up. Bonus Five %d steps added!\n\n",dice);					//POWERUPS_Additional bonus
											 (cur_pos5=cur_pos5+dice, "-P5-");
										}
										if (cur_pos5==97)
										{
											printf("WOW!Stepped on a power up. ALL Position will divided by 2!\n");			//POWERUPS_double loss
											 (cur_pos1=cur_pos5/2, "-P1-");
											 (cur_pos2=cur_pos2/2, "-P2-");
											 (cur_pos3=cur_pos3/2, "-P3-");
											 (cur_pos4=cur_pos4/2, "-P4-");
											 (cur_pos5=cur_pos5/2, "-P5-");
											 (cur_pos6=cur_pos6/2, "-P6-");

										}
                                        else
                                        {
                                            displaychart(cur_pos5,"-P5-");
                                        }
                                        printf("\t\t\t\tDice = %d\n",dice);
                                        printf("--------------------------------------------------------------------------\n");

									}
										else
                                                {

                                                    printf("Range exceeded of Player 1.\n");
                                                    displaychart(cur_pos5,"-P5-");
                                                }
                                                break;

							case '6':dice=rd();
                            system("cls");
                            printf("--------------------------------------------------------------------------\n");
                                    cur_pos6=dice+cur_pos6;
                                    if(cur_pos6<101)
                                    {
                                        if( cur_pos6 == 4)
										{
											printf("Horray! Up the ladder!\n\n");				//ladder
											 (cur_pos6=cur_pos6+21, "-P6-");
										}
										if( cur_pos6 == 21)
										{
											printf("Cheers! Up the ladder!\n\n");				//ladder
											 (cur_pos6=cur_pos6+18, "-P6-");
										}
										if( cur_pos6 == 27)
										{
											printf("Hiho! Up the ladder!\n\n");				//ladder
											 (cur_pos6=cur_pos6+47, "-P6-");
										}
										if( cur_pos6 == 43)
										{
											printf("Horray! Up the ladder!\n\n");				//ladder
											 (cur_pos6=cur_pos6+33, "-P6-");
										}
										if( cur_pos6 == 71)
										{
											printf("Bravo! Up the ladder!\n\n");				//ladder
											 (cur_pos6=cur_pos6+18, "-P6-");
										}
										if( cur_pos6 == 30)
										{
											printf("Ouch! Bitten by a snake!\n\n");								//snake
											 (cur_pos6=cur_pos6-23, "-P6-");
										}
										if( cur_pos6 == 47)
										{
											printf("Landed on a snake!Down we go '^'\n\n");						//snake
											 (cur_pos6=cur_pos6-32, "-P6-");
										}
										if( cur_pos6 == 56)
										{
											printf("Hmmm! You got bitten by a snake!Down we go '^'\n\n");			//snake
											 (cur_pos6=cur_pos6-37, "-P6-");
										}
										if( cur_pos6 == 73)
										{
											printf("Ouch! Bitten by a snake!Down we go '^'\n");					//snake
											 (cur_pos6=cur_pos6-22, "-P6-");
										}
										if( cur_pos6 == 82)
										{
											printf("Too bad you got bitten by a snake! Down we go '^'\n\n");		//snake
											 (cur_pos6=cur_pos6-40, "-P6-");
										}
										if( cur_pos6 == 92)
										{
											printf("Too bad you got bitten by a snake! Down we go '^'\n\n");		//snake
											 (cur_pos6=cur_pos6-12, "-P6-");
										}
										if( cur_pos6 == 98)
										{
											printf("Too bad you got bitten by a snake! Down we go '^'\n\n");		//snake
											 (cur_pos6=cur_pos6-43, "-P6-");
										}

										if (cur_pos6==48)
										{
											printf("WOW!Stepped on a power up. ALL possitions will we deducted by %d steps!\n\n",dice);	//POWERUPS_Deduction bonus
											 (cur_pos1=cur_pos1-dice, "-P1-");
											 (cur_pos6=cur_pos6-dice, "-P6-");
											 (cur_pos2=cur_pos2-dice, "-P2-");
											 (cur_pos3=cur_pos3-dice, "-P3-");
											 (cur_pos4=cur_pos4-dice, "-P4-");
											 (cur_pos5=cur_pos5-dice, "-P5-");
										}
										if (cur_pos6==30)
										{
											printf("WOW!Stepped on a power up. Bonus %d steps added to ALL PLAYERS !\n\n",dice);			//POWERUPS_Additional bonus
											 (cur_pos1=cur_pos1+dice, "-P1-");
											 (cur_pos6=cur_pos6+dice, "-P6-");
											 (cur_pos2=cur_pos2+dice, "-P2-");
											 (cur_pos3=cur_pos3+dice, "-P3-");
											 (cur_pos4=cur_pos4+dice, "-P4-");
											 (cur_pos5=cur_pos5+dice, "-P5-");
										}
										if (cur_pos6==11)
										{
											printf("WOW!Stepped on a power up. Bonus %d steps added!\n\n",dice);			//POWERUPS_Additional bonus
											 (cur_pos6=cur_pos6+dice, "-P6-");
										}
										if (cur_pos6==20)
										{
											printf("WOW!Stepped on a power up. Bonus Five %d steps added!\n\n",dice);					//POWERUPS_Additional bonus
											 (cur_pos6=cur_pos6+dice, "-P6-");
										}
										if (cur_pos6==97)
										{
											printf("WOW!Stepped on a power up. ALL Position will divided by 2!\n");			//POWERUPS_double loss
											 (cur_pos6=cur_pos6/2, "-P1-");
											 (cur_pos2=cur_pos2/2, "-P2-");
											 (cur_pos3=cur_pos3/2, "-P3-");
											 (cur_pos4=cur_pos4/2, "-P4-");
											 (cur_pos5=cur_pos5/2, "-P5-");
											 (cur_pos1=cur_pos1/2, "-P1-");
										}
                                        else
                                        {
                                            displaychart(cur_pos6,"-P6-");
                                        }
                                        printf("\t\t\t\tDice = %d\n",dice);
                                        printf("--------------------------------------------------------------------------\n");

									}
										else
                                                {

                                                    printf("Range exceeded of Player 1.\n");
                                                    displaychart(cur_pos6,"-P6-");
                                                }
                                                break;
                default:
                printf("\n\n\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
                printf("\n\n\t\t\t\t    Incorrect choice.Try Again\n");
                printf("\n\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");



		 }
      }  //players6


} //void







