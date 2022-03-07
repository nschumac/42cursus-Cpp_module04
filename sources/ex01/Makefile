NAME = polymorphism

SOURCES=	Animal.cpp		\
			Cat.cpp			\
			Dog.cpp			\
			main.cpp		\
			WrongCat.cpp	\
			WrongAnimal.cpp	\
			Brain.cpp		\

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
	@rm $(NAME)

re: fclean all