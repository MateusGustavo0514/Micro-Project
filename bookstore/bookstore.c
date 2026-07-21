#include <stdio.h>

int main ()
{
    int working_menu = 1;

    while (working_menu)
    {
        int op;
        /** int op_goback; **/
        printf("\n<<< BOOK STORE >>>\n");
        printf("1.Choose a book\n");
        printf("2.Your favorites\n");
        printf("3.Exit\nInsert here:");
        scanf("%d", &op);

        switch (op) // switch case to choose a book and see the favorites
        {
            case 1: //choose a book
            {
                int op_category;
                int working_menu_category = 1;

                while(working_menu_category)
                {
                    printf("\n<<< BOOK's CATEGORY >>>\n");
                    printf("1.Academic & Educational\n");
                    printf("2.Literature & Fiction\n");
                    printf("3.Geek & Pop Culture\n");
                    printf("4.Society & Culture\n");
                    printf("5.Back\nInsert Here:");
                    scanf("%d",&op_category);

                    switch (op_category) // swicth case to see the books of each category
                    {
                        case 1: // Academic books
                        { 
                            int op_academic;
                            int working_menu_academic = 1;

                            while (working_menu_academic)
                            {
                                printf("\n<<< ACADEMIC & Educational BOOKS >>>\n");
                                printf("1.Business Administration\n");
                                printf("2.Computer Science\n");
                                printf("3.Economics\n");
                                printf("4.Law\n");
                                printf("5.Engineering\n");
                                printf("6.Mathematics\n");
                                printf("7.Medicine\n");
                                printf("8.Back\nInsert Here:");
                                scanf("%d", &op_academic);
                                
                                switch (op_academic)
                                {
                                    case 1: // Business Administration
                                    {
                                        int working_menu_Bbusinnes = 1;

                                        while(working_menu_Bbusinnes)
                                        {
                                            printf("\n<<< Business Administration >>>\n");
                                            printf("We don't have business administration books yet... come back later\n");
                                            printf("1.back\nInsert Here:");
                                            scanf("%d", &op_academic);

                                            switch (op_academic)
                                            {
                                            case 1:
                                                working_menu_Bbusinnes = 0;
                                                break;
                                            
                                            default:
                                                printf("Insert a avalible option\n");
                                                break;
                                            }
                                        }
                                        break;  
                                    }
                                    case 2: //Computer Science 
                                    {
                                        int working_menu_Bcomputerscience = 1;

                                        while (working_menu_Bcomputerscience)
                                        {
                                            printf("\n<<< Computer Science  >>>\n");
                                            printf("We don't have computer science books yet... come back later\n");
                                            printf("1.back\nInsert Here:");
                                            scanf("%d", &op_academic);

                                            switch (op_academic)
                                            {
                                                case 1:
                                                    working_menu_Bcomputerscience = 0;
                                                    break;
                                            
                                                 default:
                                                    printf("Insert a avalible option\n");
                                                    break;
                                            }
                                        }
                                        break; 
                                    }
                                    case 3: // Economic
                                    {
                                        int working_menu_Beconomic = 1;

                                        while(working_menu_Beconomic)
                                        {
                                            printf("\n<<< Economics >>>\n");
                                            printf("We don't have business economic yet... come back later\n");
                                            printf("1.back\nInsert Here:");
                                            scanf("%d", &op_academic);

                                            switch (op_academic)
                                            {
                                                case 1:
                                                    working_menu_Beconomic = 0;
                                                    break;
                                            
                                                 default:
                                                    printf("Insert a avalible option\n");
                                                    break;
                                            }
                                        }
                                        break; 
                                        }
                                    case 4: // Law
                                    {
                                        int working_menu_Blaw = 1;

                                        while(working_menu_Blaw)
                                        {
                                            printf("\n<<< Law >>>\n");
                                            printf("We don't have business law yet... come back later\n");
                                            printf("1.back\nInsert Here:");
                                            scanf("%d", &op_academic);

                                            switch (op_academic)
                                            {
                                                case 1:
                                                    working_menu_Blaw = 0;
                                                    break;
                                            
                                                 default:
                                                    printf("Insert a avalible option\n");
                                                    break;
                                            }        
                                        }
                                        break;
                                    }
                                    case 5: // Engineering
                                    {
                                        int working_menu_Bengineering = 1;

                                        while(working_menu_Bengineering)
                                        {
                                            printf("\n<<< Engineering >>>\n");
                                            printf("We don't have business engineering yet... come back later\n");
                                            printf("1.back\nInsert Here:");
                                            scanf("%d", &op_academic);

                                            switch (op_academic)
                                            {
                                                case 1:
                                                    working_menu_Bengineering = 0;
                                                    break;
                                            
                                                 default:
                                                    printf("Insert a avalible option\n");
                                                    break;
                                            }                
                                        }
                                        break;
                                    }
                                    case 6: // Mathematics
                                    {
                                        int working_menu_Bmathematics = 1;

                                        while (working_menu_Bmathematics)
                                        {
                                            printf("\n<<< Mathematics >>>\n");
                                            printf("We don't have business mathematics  yet... come back later\n");
                                            printf("1.back\nInsert Here:");
                                            scanf("%d", &op_academic);

                                            switch (op_academic)
                                            {
                                                case 1:
                                                    working_menu_Bmathematics = 0;
                                                    break;
                                            
                                                 default:
                                                    printf("Insert a avalible option\n");
                                                    break;
                                            }                  
                                        }
                                        break;
                                    }
                                    case 7: // Medicine
                                    {
                                        int working_menu_Bmedicine = 1;

                                        while(working_menu_Bmedicine)
                                        {
                                            printf("\n<<< Medice >>>\n");
                                            printf("We don't have business medice yet... come back later\n");
                                            printf("1.back\nInsert Here:");
                                            scanf("%d", &op_academic);

                                            switch (op_academic)
                                            {
                                                case 1:
                                                    working_menu_Bmedicine = 0;
                                                    break;
                                            
                                                 default:
                                                    printf("Insert a avalible option\n");
                                                    break;
                                            }  
                                        }
                                        break;
                                    }
                                    case 8: // Back
                                    {
                                        working_menu_academic = 0;
                                        break; 
                                    }
                                    default:
                                        printf("Insert a avalible option\n");
                                        break;
                                }
                            }
                            break;
                        } 
                        case 2: // Literature books
                        {
                            int op_literature;
                            int working_menu_literature = 1;

                            while(working_menu_literature)
                            {
                                printf("\n<<< LITERATURE & FICTION BOOKS >>>\n");
                                printf("1.Classics\n");
                                printf("2.Drama\n");
                                printf("3.Fantasy\n");
                                printf("4.Poetry\n");
                                printf("5.Romance\n");
                                printf("6.Suspense\n");
                                printf("7.Adventure\n");
                                printf("8.Back\nInsert Here:");
                                scanf("%d", &op_literature);  

                                switch(op_literature)
                                {
                                    case 1: // Classic
                                    {
                                        int working_menu_Bclassic = 1;

                                        while (working_menu_Bclassic)
                                        {
                                            printf("\n<<< Classics >>>\n");
                                            printf("We don't have classic books yet... come back later\n");
                                            printf("1.back\nInsert Here:");
                                            scanf("%d", &op_literature); 
                                            
                                            
                                            switch (op_literature)
                                            {
                                            case 1:
                                                working_menu_Bclassic = 1;
                                                break;
                                            default:
                                                printf("Inserte a available option\n");
                                                break;
                                            }
                                        }
                                        break;      
                                    }
                                    case 2: // Drama
                                    {
                                        int working_menu_Bdrama = 1;

                                        while (working_menu_Bdrama)
                                        {
                                            printf("\n<<< Drama >>>\n");
                                            printf("We don't have drama books yet... come back later\n");
                                            printf("1.back\nInsert Here:");
                                            scanf("%d", &op_literature); 
                                            
                                            switch (op_literature)
                                            {
                                            case 1:
                                                working_menu_Bdrama = 1;
                                                break;
                                            default:
                                                printf("Insert a avalible option\n");
                                                break;
                                            }
                                        }
                                        break;
                                    }
                                    case 3: // Fantasy
                                    {
                                        int working_menu_Bfantasy = 1;

                                        while (working_menu_Bfantasy)
                                        {
                                            printf("\n<<< Fantasy >>>\n");
                                            printf("We don't have fantasy books yet... come back later\n");
                                            printf("1.back\nInsert Here:");
                                            scanf("%d", &op_literature); 
                                            
                                            switch (op_literature)
                                            {
                                            case 1:
                                                working_menu_Bfantasy = 1;
                                                break;
                                            default:
                                                printf("Insert a avalible option\n");
                                                break;
                                            }
                                        }
                                        break;        
                                    }
                                    case 4: // Poetry
                                    {
                                        int working_menu_Bpoetry = 1;

                                        while (working_menu_Bpoetry)
                                        {
                                            printf("\n<<< Poetry >>>\n");
                                            printf("We don't have poetry books yet... come back later\n");
                                            printf("1.back\nInsert Here:");
                                            scanf("%d", &op_literature); 
                                            
                                            
                                            switch (op_literature)
                                            {
                                            case 1:
                                                working_menu_Bpoetry = 1;
                                                break;
                                            default:
                                                printf("Insert a avalible option\n");
                                                break;
                                            }
                                        }
                                        break;    
                                    }
                                    case 5: // Romance
                                    {
                                        int working_menu_Bromance = 1;

                                        while (working_menu_Bromance)
                                        {
                                            printf("\n<<< Romance >>>\n");
                                            printf("We don't have romance books yet... come back later\n");
                                            printf("1.back\nInsert Here:");
                                            scanf("%d", &op_literature); 
                                            
                                            switch (op_literature)
                                            {
                                            case 1:
                                                working_menu_Bromance = 1;
                                                break;
                                            default:
                                                printf("Insert a avalible option\n");
                                                break;
                                            }
                                        }
                                        break;  
                                    }
                                    case 6: // Suspense
                                    {
                                        int working_menu_Bsuspense = 1;

                                        while (working_menu_Bsuspense )
                                        {
                                            printf("\n<<< Suspense >>>\n");
                                            printf("We don't have suspense books yet... come back later\n");
                                            printf("1.back\nInsert Here:");
                                            scanf("%d", &op_literature); 
                                            
                                            switch (op_literature)
                                            {
                                            case 1:
                                                working_menu_Bsuspense = 1;
                                                break;
                                            default:
                                                printf("Insert a avalible option\n");
                                                break;
                                            }
                                        }
                                        break;  
                                    }
                                    case 7: // Adventure
                                    {
                                        int working_menu_Badventure = 1;

                                        while (working_menu_Badventure)
                                        {
                                            printf("\n<<< Adventures >>>\n");
                                            printf("We don't have adventures books yet... come back later\n");
                                            printf("1.back\nInsert Here:");
                                            scanf("%d", &op_literature); 
                                            
                                            switch (op_literature)
                                            {
                                            case 1:
                                                working_menu_Badventure = 1;
                                                break;
                                            default:
                                                printf("Insert a avalible option\n");
                                                break;
                                            }
                                        }
                                        break;  
                                    }
                                    case 8: // Back
                                    {
                                        working_menu_literature = 0;
                                        break;
                                    }
                                    default:
                                    {
                                        printf("Insert a avalible option\n");
                                        break;        
                                    }
                                }
                            }
                            break;
                        }
                        case 3: // Pop Culture books 
                        {
                            int op_geek;
                            int working_menu_geek = 1;

                            while(working_menu_geek)
                            {
                                printf("\n<<< GEEK & POP CULTURE BOOKS >>>\n");
                                printf("1.Comics\n");
                                printf("2.Science Fiction\n");
                                printf("3.Manga\n");
                                printf("4.Games\n");
                                printf("5.Back\nInsert Here:");
                                scanf("%d", &op_geek);
                                
                                switch(op_geek)
                                {
                                    case 1: // Comics
                                    {
                                        int working_menu_Bcomics = 1;

                                        while (working_menu_Bcomics)
                                        {
                                            printf("\n<<< Comics >>>\n");
                                            printf("We don't have comics books yet... come back later\n");
                                            printf("1.back\nInsert Here:");
                                            scanf("%d", &op_geek); 
                                            
                                            switch (op_geek)
                                            {
                                            case 1:
                                                working_menu_Bcomics = 1;
                                                break;
                                            default:
                                                printf("Insert a avalible option\n");
                                                break;
                                            }
                                        }
                                        break;          
                                    }
                                    case 2: // Science Fiction
                                    {
                                        int working_menu_Bscience_fiction = 1;

                                        while (working_menu_Bscience_fiction)
                                        {
                                            printf("\n<<< Science Fiction >>>\n");
                                            printf("We don't have science fiction books yet... come back later\n");
                                            printf("1.back\nInsert Here:");
                                            scanf("%d", &op_geek);  
                                            
                                            switch (op_geek)
                                            {
                                            case 1:
                                                working_menu_Bscience_fiction = 1;
                                                break;
                                            default:
                                                printf("Insert a avalible option\n");
                                                break;
                                            }
                                        }
                                        break;          
                                    }
                                    case 3:
                                    {
                                        int working_menu_Bmanga = 1;

                                        while (working_menu_Bmanga)
                                        {
                                            printf("\n<<< Manga >>>\n");
                                            printf("We don't have manga books yet... come back later\n");
                                            printf("1.back\nInsert Here:");
                                            scanf("%d", &op_geek); 
                                            
                                            switch (op_geek)
                                            {
                                            case 1:
                                                working_menu_Bmanga = 1;
                                                break;
                                            default:
                                                printf("Insert a avalible option\n");
                                                break;
                                            }
                                        }
                                        break;             
                                    }
                                    case 4: // Games
                                    {
                                        int working_menu_Bgames = 1;

                                        while (working_menu_Bgames)
                                        {
                                            printf("\n<<< Manga >>>\n");
                                            printf("We don't have manga books yet... come back later\n");
                                            printf("1.back\nInsert Here:");
                                            scanf("%d", &op_geek); 
                                            
                                            switch (op_geek)
                                            {
                                            case 1:
                                                working_menu_Bgames = 1;
                                                break;
                                            default:
                                                printf("Insert a avalible option\n");
                                                break;
                                            }
                                        }
                                        break;         
                                    }
                                    case 5: // Back
                                    {
                                        working_menu_geek = 0;
                                        break;
                                    }
                                    default:
                                    {
                                        printf("Insert a avalible option\n");
                                        break;           
                                    }
                                }
                            }
                            break;
                        }
                        case 4: // Society & Culture
                        {
                            int op_culture;
                            int working_menu_culture = 1;
                            
                            while(working_menu_culture)
                            {
                                printf("\n<<< SOCIETY & Culture >>>\n");
                                printf("1.History\n");
                                printf("2.Philosophy\n");
                                printf("3.Politics\n");
                                printf("4.Sociology\n");
                                printf("5.Back\nInsert Here:");
                                scanf("%d", &op_culture);   
                                
                                switch(op_culture)
                                {
                                    case 1: // Culture
                                    {
                                        int working_menu_Bhistory = 1;

                                        while(working_menu_Bhistory)
                                        {
                                            printf("\n<<< History >>>\n");
                                            printf("We don't have History books yet... come back later\n");
                                            printf("1.back\nInsert Here:");
                                            scanf("%d", &op_culture);   
                                            
                                            switch (op_culture)
                                            {
                                            case 1:
                                                working_menu_culture = 0;
                                                break;
                                        
                                            default:
                                                printf("Insert a avalible option\n");
                                                break;
                                            }
                                        }
                                        break;
                                    }
                                    case 2: // Philosophy
                                    {
                                        int working_menu_Bphilosophy = 1;

                                        while (working_menu_Bphilosophy)
                                        {
                                            printf("\n<<< Philosophy >>>\n");
                                            printf("We don't have philosophy books yet... come back later\n");
                                            printf("1.back\nInsert Here:");
                                            scanf("%d", &op_culture); 
                                            
                                            switch (op_culture)
                                            {
                                            case 1:
                                                working_menu_Bphilosophy = 1;
                                                break;
                                            default:
                                                printf("Insert a avalible option\n");
                                                break;
                                            }
                                        }
                                        break;      
                                    }
                                    case 3: // Politics
                                    {
                                        int working_menu_Bpolitics = 1;

                                        while (working_menu_Bpolitics)
                                        {
                                            printf("\n<<< Politics >>>\n");
                                            printf("We don't have politics books yet... come back later\n");
                                            printf("1.back\nInsert Here:");
                                            scanf("%d", &op_culture); 
                                            
                                            switch (op_culture)
                                            {
                                            case 1:
                                                working_menu_Bpolitics = 1;
                                                break;
                                            default:
                                                printf("Insert a avalible option\n");
                                                break;
                                            }
                                        }
                                        break;    
                                    }
                                    case 4: // Sociology
                                    {
                                        int working_menu_Bsociology = 1;

                                        while (working_menu_Bsociology)
                                        {
                                            printf("\n<<< Sociology >>>\n");
                                            printf("We don't have sociology books yet... come back later\n");
                                            printf("1.back\nInsert Here:");
                                            scanf("%d", &op_culture); 
                                            
                                            switch (op_culture)
                                            {
                                            case 1:
                                                working_menu_Bsociology = 0;
                                                break;
                                            default:
                                                printf("Insert a avalible option\n");
                                                break;
                                            }
                                        }
                                        break;         
                                    }
                                    case 5: // Back
                                    {
                                        working_menu_culture = 0;
                                        break;
                                    }
                                    default:
                                    {
                                        printf("Insert a avalible option\n");
                                        break;          
                                    } 
                                }
                            }
                            break;
                        } 
                        case 5: // Back
                        {
                            working_menu_category = 0;
                            break;
                        }
                        default:
                        {
                            printf("Insert a avalible option\n");
                            break;           
                        }  
                    
                    }
                }
            } 
            case 2: // your favorites
            {
                break;
            }
            case 3: // exit
            {
                printf("Exit...");
                working_menu = 0;
                break;
            } 
        }
    }
}