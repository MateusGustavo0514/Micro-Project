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
                    printf("4.Non-Fiction & Self-Development\n");
                    printf("5.Children & Youth\n");
                    printf("6.Society & Culture\n");
                    printf("7.Back\nInsert Here:");
                    scanf("%d",&op_category);

                    switch (op_category) // swicth case to see the books of each category
                    {
                        case 1: // Academic books
                        { 
                            int op_academic;
                            int working_menu_academic = 1;

                            while (working_menu_academic)
                            {
                                printf("\n<<< ACADEMIC BOOKS >>>\n");
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
                                            printf("We don't have business administration books yet... come back later");
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
                                            printf("We don't have computer science books yet... come back later");
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
                                    case 3: 
                                    {
                                        int working_menu_Beconomic = 1;

                                        while(working_menu_Beconomic)
                                        {
                                            printf("\n<<< Economics >>>\n");
                                            printf("We don't have business economic yet... come back later");
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
                                    case 4: 
                                    {
                                        int working_menu_Blaw = 1;

                                        while(working_menu_Blaw)
                                        {
                                            printf("\n<<< Law >>>\n");
                                            printf("We don't have business law yet... come back later");
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
                                    case 5:
                                    {
                                        int working_menu_Bengineering = 1;

                                        while(working_menu_Bengineering)
                                        {
                                            printf("\n<<< Engineering >>>\n");
                                            printf("We don't have business engineering yet... come back later");
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
                                    case 6:
                                    {
                                        int working_menu_Bmathematics = 1;

                                        while (working_menu_Bmathematics)
                                        {
                                            printf("\n<<< Mathematics >>>\n");
                                            printf("We don't have business mathematics  yet... come back later");
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
                                    case 7:
                                    {
                                        int working_menu_Bmedicine = 1;

                                        while(working_menu_Bmedicine)
                                        {
                                            printf("\n<<< Medice >>>\n");
                                            printf("We don't have business medice yet... come back later");
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
                                    case 8:
                                    {
                                        working_menu_academic = 0;
                                        break; 
                                    }
                                    default:
                                        printf("Insert a avalible option\n");
                                        break;
                                }
                            }
                        } 
                        case 2: // Literature books
                        {
                            break;
                        }
                        case 3: // Pop Culture books 
                        {
                            break;
                        }
                        case 4: // Non-Ficition books
                        {
                            break;
                        } 
                        case 5: // Children books 
                        {
                            break;
                        } 
                        case 6:  // Society & Culture books
                        {
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
                break;
            } 
        }
    }
}