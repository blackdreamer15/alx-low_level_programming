#!/bin/bash

printf "\t--------------------------------------\n";
printf "\t----    TESTING THE C PROGRAMS    ----\n";
printf "\t--------------------------------------\n\n";

read -p "Which task would you like to test? (0-4): " taskID;

isTesting=1;

while [ $isTesting -eq 1 ]
do
    case $taskID in
        1)
            printf "\n\t----    TESTING TASK 1    ----\n\n";
            gcc -Wall -Werror -Wextra -pedantic 0-print_list.c 1-list_len.c 101-main.c -o len;
            ./len;
            ;;
        2)
            printf "\n\t----    TESTING TASK 2    ----\n\n";
            gcc -Wall -Werror -Wextra -pedantic 0-print_list.c 2-add_node.c 102-main.c -o add;
            ./add;
            ;;
        3)
            printf "\n\t----    TESTING TASK 3    ----\n\n";
            gcc -Wall -Werror -Wextra -pedantic 0-print_list.c 3-add_node_end.c 103-main.c -o end;
            ./end;
            ;;
        4)
            printf "\n\t----    TESTING TASK 4    ----\n\n";
            gcc -Wall -Werror -Wextra -pedantic 0-print_list.c 4-free_list.c 104-main.c -o free;
            ./free;
            ;;
        *)
            printf "\n\t----    TESTING ALL TASKS    ----\n\n";
            gcc -Wall -Werror -Wextra -pedantic 0-print_list.c 1-list_len.c 101-main.c -o len;
            gcc -Wall -Werror -Wextra -pedantic 0-print_list.c 2-add_node.c 102-main.c -o add;
            gcc -Wall -Werror -Wextra -pedantic 0-print_list.c 3-add_node_end.c 103-main.c -o end;
            gcc -Wall -Werror -Wextra -pedantic 0-print_list.c 4-free_list.c 104-main.c -o free;
            ./len;
            ./add;
            ./end;
            ./free;
            ;;
    esac

    read -p "\nWould you like to test another task? (y/n): " isTesting;
done