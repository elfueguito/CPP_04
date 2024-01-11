NAME = Animal
S = srcs/
HEADERS = ./includes/Animal.hpp ./includes/Cat.hpp ./includes/Dog.hpp ./includes/WrongAnimal.hpp ./includes/Brain.hpp

CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98 -g3

SRCS =  $Smain.cpp \
		$SAnimal.cpp \
		$SDog.cpp \
		$SCat.cpp \
		$SWrongAnimal.cpp \
		$SWrongCat.cpp \
		$SBrain.cpp \

OBJ = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) $(HEADERS) Makefile
	$(CC) $(CFLAGS) $(OBJ) -o $@ -I ./includes

%.o: %.cpp $(HEADERS) Makefile
	$(CC) $(CFLAGS) -c $< -o $@ -I ./includes

clean:
	rm -f $S*.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean