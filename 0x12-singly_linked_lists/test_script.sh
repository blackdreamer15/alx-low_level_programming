#!/bin/bash

printf "\t--------------------------------------\n";
printf "\t----    TESTING THE C PROGRAMS    ----\n";
printf "\t--------------------------------------\n\n";

isTesting=1;

while [ $isTesting -eq 1 ]
do
	read -p "Which task would you like to test? (0-4): " taskID;

	case $taskID in
		0)
			printf "\n\t----    TESTING TASK 0    ----\n\n";
			gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_list.c -o a;
			./a
			;;
		1)
			printf "\n\t----    TESTING TASK 1    ----\n\n";
			gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-list_len.c -o b;
			./b
			;;
		2)
			printf "\n\t----    TESTING TASK 2    ----\n\n";
			gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-add_node.c 0-print_list.c -o c;
			./c
			;;
		3)
			printf "\n\t----    TESTING TASK 3    ----\n\n";
			gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-add_node_end.c 0-print_list.c -o d;
			./d
			;;
		4)
			printf "\n\t----    TESTING TASK 4    ----\n\n";
			gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-free_list.c 3-add_node_end.c 0-print_list.c -o e;
			./e
			;;
		*)
			printf "\n\t----    TESTING ALL TASKS    ----\n\n";
			gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_list.c -o a;
			gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-list_len.c -o b;
			gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-add_node.c 0-print_list.c -o c;
			gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-add_node_end.c 0-print_list.c -o d;
			gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-free_list.c 3-add_node_end.c 0-print_list.c -o e;
			./a
			./b
			./c
			./d
			./e
			;;
	esac
	printf "\n\n";
	read -p "Would you like to test another task? (1 for yes | 2 for no): " isTesting;
done

printf "EXIT TEST SCRIPT SUCCESSFULLY!!!\n";