
#include "game.hpp"
#include "board.hpp"
#include "game_options.hpp"
#include "game_solver.hpp"
#include "input.hpp"
#include "main_menu.hpp"
#include "random.hpp"
#include <chrono>
#include <fstream>
#include <iostream>
#include <thread>

namespace bulls_and_cows {

    void user_plays_against_computer(const GameOptions& game_options)
    {
        std::cout << "TODO:\n"
                     "    Create a board with a randomly generated secret code\n"
                     "    DO\n"
                     "       Display the board and the list of attempts so far\n"
                     "       Ask the user to make another attempt\n"
                     "       Compare the user's attempt with the secret code and deduce the number of bulls and cows\n"
                     "       Add the user's attempt to the list of attempts of the board\n"
                     "    WHILE not end of game\n"
                     "    Display the board and the list of attempts so far\n"
                     "    Display a message telling if the user won or lost\n";
        char motsecret[5];
        char motrecuperer[13][5];
        int i,j;

       
        for (i = 0; i < 5; i++) //Create an array with the secret code 
        {
            motsecret[i] = generate_random_character(65, 72 );
            std::cout << motsecret[i];
        }


         std::cout << "\n\nLets Play!!\n\n"
                     "-----------------------------------------\n"
                     "| Secret       * * * * * |              |\n"
                     "-----------------------------------------\n"
                     "|ATTEMPTS                | BULLS | COWS |\n"
                     "-----------------------------------------\n"
                     "| #12          - - - - - |       |      |\n"
                     "| #11          - - - - - |       |      |\n"
                     "| #10          - - - - - |       |      |\n"
                     "| #9           - - - - - |       |      |\n"
                     "| #8           - - - - - |       |      |\n"
                     "| #7           - - - - - |       |      |\n"
                     "| #6           - - - - - |       |      |\n"
                     "| #5           - - - - - |       |      |\n"
                     "| #4           - - - - - |       |      |\n"
                     "| #3           - - - - - |       |      |\n"
                     "| #2           - - - - - |       |      |\n"
                     "| #1           - - - - - |       |      |\n"
                     "-----------------------------------------\n"
                     "Now is your turn to guess #01(5 characters between 'A' and 'H')\n?";
       
        for (i = 0; i < 12; i++)
         {
            for (j = 0; j < 5;j++)
            {
                motrecuperer[i][j] = '- ';
            }
         }
         
         
         for (i = 0; i < 12; i++)
        {
           std::cout << "\n\n"
                        "-----------------------------------------\n"
                        "| Secret       * * * * * |              |\n"
                        "-----------------------------------------\n"
                        "|ATTEMPTS                | BULLS | COWS |\n"
                        "-----------------------------------------\n"
                        "| #12          - - - - - |       |      |\n"
                        "| #11          - - - - - |       |      |\n"
                        "| #10          - - - - - |       |      |\n"
                        "| #9           - - - - - |       |      |\n"
                        "| #8           - - - - - |       |      |\n"
                        "| #7           - - - - - |       |      |\n"
                        "| #6           - - - - - |       |      |\n"
                        "| #5           - - - - - |       |      |\n"
                        "| #4           - - - - - |       |      |\n"
                        "| #3           - - - - - |       |      |\n"
                        "| #2           - - - - - |       |      |\n"
                        "| #1           - - - - - |       |      |\n"
                        "-----------------------------------------\n"
                        "Now is your turn to guess #01(5 characters between 'A' and 'H')\n?";

          
           
           
           switch (i)
           {
           case 0:
               std::cout << "\n\n"
                            "-----------------------------------------\n"
                            "| Secret       * * * * * |              |\n"
                            "-----------------------------------------\n"
                            "|ATTEMPTS                | BULLS | COWS |\n"
                            "-----------------------------------------\n"
                            "| #12          - - - - - |       |      |\n"
                            "| #11          - - - - - |       |      |\n"
                            "| #10          - - - - - |       |      |\n"
                            "| #9           - - - - - |       |      |\n"
                            "| #8           - - - - - |       |      |\n"
                            "| #7           - - - - - |       |      |\n"
                            "| #6           - - - - - |       |      |\n"
                            "| #5           - - - - - |       |      |\n"
                            "| #4           - - - - - |       |      |\n"
                            "| #3           - - - - - |       |      |\n"
                            "| #2           - - - - - |       |      |\n"
                            "| #1          " +
                                motrecuperer[i]
                         << " |       |      |\n"
                            "-----------------------------------------\n"
                            "Now is your turn to guess #01(5 characters between 'A' and 'H')\n?";
               break;
           case 1:
               for (j = 0; j < 5; j++)
               {
                  motrecuperer[i][j] = generate_random_character(65, 72);
               }

               std::cout << "\n\n"
                            "-----------------------------------------\n"
                            "| Secret       * * * * * |              |\n"
                            "-----------------------------------------\n"
                            "|ATTEMPTS                | BULLS | COWS |\n"
                            "-----------------------------------------\n"
                            "| #12          - - - - - |       |      |\n"
                            "| #11          - - - - - |       |      |\n"
                            "| #10          - - - - - |       |      |\n"
                            "| #9           - - - - - |       |      |\n"
                            "| #8           - - - - - |       |      |\n"
                            "| #7           - - - - - |       |      |\n"
                            "| #6           - - - - - |       |      |\n"
                            "| #5           - - - - - |       |      |\n"
                            "| #4           - - - - - |       |      |\n"
                            "| #3           - - - - - |       |      |\n"
                            "| #2          "+motrecuperer[i]<<" |       |      |\n"
                            "| #1          "+motrecuperer[i-1]<<" |       |      |\n"
                            "-----------------------------------------\n"
                            "Now is your turn to guess #01(5 characters between 'A' and 'H')\n?";

               break;
           case 2:
               std::cout << "\n\n"
                            "-----------------------------------------\n"
                            "| Secret       * * * * * |              |\n"
                            "-----------------------------------------\n"
                            "|ATTEMPTS                | BULLS | COWS |\n"
                            "-----------------------------------------\n"
                            "| #12          - - - - - |       |      |\n"
                            "| #11          - - - - - |       |      |\n"
                            "| #10          - - - - - |       |      |\n"
                            "| #9           - - - - - |       |      |\n"
                            "| #8           - - - - - |       |      |\n"
                            "| #7           - - - - - |       |      |\n"
                            "| #6           - - - - - |       |      |\n"
                            "| #5           - - - - - |       |      |\n"
                            "| #4           - - - - - |       |      |\n"
                            "| #3          " +
                                motrecuperer[i]
                         << " |       |      |\n"
                            "| #2          " +
                                motrecuperer[i-1]
                         << " |       |      |\n"
                            "| #1          " +
                                motrecuperer[i - 2]
                         << " |       |      |\n"
                            "-----------------------------------------\n"
                            "Now is your turn to guess #01(5 characters between 'A' and 'H')\n?";
               break;
           case 3:
               for (j = 0; j < 5; j++)
               {
                   motrecuperer[i][j] = generate_random_character(65, 72);
               }
               std::cout << "\n\n"
                            "-----------------------------------------\n"
                            "| Secret       * * * * * |              |\n"
                            "-----------------------------------------\n"
                            "|ATTEMPTS                | BULLS | COWS |\n"
                            "-----------------------------------------\n"
                            "| #12          - - - - - |       |      |\n"
                            "| #11          - - - - - |       |      |\n"
                            "| #10          - - - - - |       |      |\n"
                            "| #9           - - - - - |       |      |\n"
                            "| #8           - - - - - |       |      |\n"
                            "| #7           - - - - - |       |      |\n"
                            "| #6           - - - - - |       |      |\n"
                            "| #5           - - - - - |       |      |\n"
                            "| #4          " +
                                motrecuperer[i]
                         << "|       |      |\n"
                            "| #3          " +
                                motrecuperer[i-1]
                         << " |       |      |\n"
                            "| #2          " +
                                motrecuperer[i - 2]
                         << " |       |      |\n"
                            "| #1          " +
                                motrecuperer[i - 3]
                         << " |       |      |\n"
                            "-----------------------------------------\n"
                            "Now is your turn to guess #01(5 characters between 'A' and 'H')\n?";
               break;
           case 4:


               std::cout << "\n\n"
                            "-----------------------------------------\n"
                            "| Secret       * * * * * |              |\n"
                            "-----------------------------------------\n"
                            "|ATTEMPTS                | BULLS | COWS |\n"
                            "-----------------------------------------\n"
                            "| #12          - - - - - |       |      |\n"
                            "| #11          - - - - - |       |      |\n"
                            "| #10          - - - - - |       |      |\n"
                            "| #9           - - - - - |       |      |\n"
                            "| #8           - - - - - |       |      |\n"
                            "| #7           - - - - - |       |      |\n"
                            "| #6           - - - - - |       |      |\n"
                            "| #5           - - - - - |       |      |\n"
                            "| #4          " +
                              motrecuperer[i-1]
                         << "|       |      |\n"
                            "| #3          " +
                                motrecuperer[i - 2]
                         << " |       |      |\n"
                            "| #2          " +
                                motrecuperer[i - 3]
                         << " |       |      |\n"
                            "| #1          " +
                                motrecuperer[i - 4]
                         << " |       |      |\n"
                            "-----------------------------------------\n"
                            "Now is your turn to guess #01(5 characters between 'A' and 'H')\n?";

               break;
           case 5:
               for (j = 0; j < 5; j++)
               {
                   motrecuperer[i][j] = generate_random_character(65, 72);
               }
               break;
           case 6:
               break;
           case 7:
               for (j = 0; j < 5; j++)
               {
                   motrecuperer[i][j] = generate_random_character(65, 72);
               }
               break;
           case 8:
               break;
           case 9:
               for (j = 0; j < 5; j++)
               {
                   motrecuperer[i][j] = generate_random_character(65, 72);
               }
               break;
           case 10:
               break;
           case 11:
               for (j = 0; j < 5; j++)
               {
                   motrecuperer[i][j] = generate_random_character(65, 72);
               }
               break;
           default:
               break;
           }
           
           
           
           
        

        }
      
       
        


       
        
    }

    void computer_plays_against_computer(const GameOptions& game_options)
    {
        std::cout
            << "TODO:\n"
               "    Create a board with a randomly generated secret code\n"
               "    Generate the list of all the possible codes\n"
               "    DO\n"
               "       Display the board and the list of attempts so far\n"
               "       Display the number of remaining possible codes so far\n"
               "       Wait for 2 seconds\n"
               "       Pick a random attempt among in the list of remaining possible codes\n"
               "       Compare the computer's attempt with the secret code and deduce the number of bulls and cows\n"
               "       Add the computer's attempt to the list of attempts of the board\n"
               "       Remove all the codes that are incompatible with the attempt's feedback from the list of "
               "possible codes\n"
               "    WHILE not end of game\n"
               "    Display the board and the list of attempts so far\n"
               "    Display a message telling if the computer won or lost\n";
    }

    void configure_game_options(GameOptions& game_options)
    {
        std::cout << "TODO:\n"
                     "    DO\n"
                     "       Display the current game options\n"
                     "       Display the game options menu\n"
                     "       Ask the user to type its choice\n"
                     "       Treat the user's choice\n"
                     "    UNTIL user's choice is to go back to main menu\n";
    }

    void play_game()
    {
        GameOptions game_options{};

        while (true)
        {
            std::cout << "\n#################################\n";
            display_main_menu(std::cout);

            const auto user_choice = ask_main_menu_choice(std::cin);
            switch (user_choice)
            {
            case MainMenuChoice::Quit:
                std::cout << "\nBye bye!\n";
                return;
            case MainMenuChoice::UserPlaysAgainstComputer:
                user_plays_against_computer(game_options);
                break;
            case MainMenuChoice::ComputerPlaysAgainstComputer:
                computer_plays_against_computer(game_options);
                break;
            case MainMenuChoice::ConfigureOptions:
                configure_game_options(game_options);
                break;
            case MainMenuChoice::Error:
                std::cout << "\nYou did not enter a valid choice, please try again\n";
                break;
            }
        }
    }

} // namespace bulls_and_cows
