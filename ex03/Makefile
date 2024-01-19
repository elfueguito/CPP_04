NAME = Materia
S = srcs/
HEADERS = ./includes/AMateria.hpp ./includes/Character.hpp ./includes/ICharacter.hpp ./includes/MateriaSource.hpp ./includes/IMateriaSource.hpp ./includes/Ice.hpp ./includes/Cure.hpp

CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98 -g3

SRCS =  $Smain.cpp \
		$SAMateria.cpp \
		$SCharacter.cpp \
		$SIce.cpp \
		$SCure.cpp \
		$SMateriaSource.cpp \

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