*This project has been created as part of the 42 curriculum by stcozaci*

# Description

In this proyect we will sort numbers using 2 stacks (stack a and b) and a limited set of instructions, trying to achieve the lowest possible number of actions.

The movements that we can use are the next ones:
- **sa** (swap a): Swap the first 2 elements at the top of stack a. Do nothing if there is only one element or none.
- **sb** (swap b): Swap the first 2 elements at the top of stack b. Do nothing if there is only one element or none.
- **ss** : sa and sb at the same time.
- **pa** (push a): Take the first element at the top of b and put it at the top of a. Do nothing if b is empty.
- **pb** (push b): Take the first element at the top of a and put it at the top of b. Do nothing if a is empty.
- **ra** (rotate a): Shift up all elements of stack a by 1. The first element becomes the last one.
- **rb** (rotate b): Shift up all elements of stack b by 1.
The first element becomes the last one.
- **rr** : ra and rb at the same time.
- **rra** (reverse rotate a): Shift down all elements of stack a by 1. The last element becomes the first one.
- **rrb** (reverse rotate b): Shift down all elements of stack b by 1. The last element becomes the first one.
- **rrr** : rra and rrb at the same time.

Every instruction must be shown on the terminal, separated by a '\n'

# Instructions

- `make`: compile the push_swap program.
- `make clean`: delete all the .o files created.
- `make fclean`: ejecute make clean and delete the push_swap program.
- `make re`: execute make fclean and compile the push_swap program.
- `./push_swap <numbers>`: it will execute the push_swap program taking the arguments as numbers. 
It only accepts numbers. Any other character will result in an error. If any nummber is repeated or it's bigger then the int limits it will also result in an error.
- `./push_swap <numbers> | wc -l`: to check the number of actions that the push_swap made
- `./push_swap <numbers> | ./checker_OS <numbers>`: to check if the numbers are correctly ordenate. Ok if they're correcctly ordenated, KO if not. Error if there's an invalid argument.
- `ARG=$(shuf -i 1-500 -n 500 | tr '\n' ' ');`: shuffles 500 numbers. It can be used to not write manually 500 numbers, and can be used like this: `ARG=$(shuf -i 1-500 -n 500 | tr '\n' ' '); ./push_swap $ARG`

# Resources

The most important sources for me was guide to the [turk algorithm](https://medium.com/@ayogun/push-swap-c1f5d2d41e97), that explains the algorithm way better than I could. Although my execution was slightly different, such as the structure of each node in the list, or that I took into account combined moves like rr or rrr, practically the algorithm I used was that one.

**NO AI WAS USED FOR ANYTHING**