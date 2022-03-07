NAME = polymorphism

SOURCES=	Character.cpp		\
			Cure.cpp			\
			Ice.cpp				\
			MateriaSource.cpp	\
			AMateria.cpp		\
			main.cpp			\

FLAGS = -Werror -Wall -Wextra

OBJECTS= $(SOURCES:.cpp=.o)

%.o: %.cpp
	@clang++ -Wall -Werror -Wextra -o $@ -c $<

$(NAME): $(OBJECTS)
	clang++ $(FLAGS) $(OBJECTS) -o $@

all: $(NAME)

clean: 
	@rm -f $(OBJECTS)

fclean:
	@make clean
	@rm -f $(NAME)

re: fclean all