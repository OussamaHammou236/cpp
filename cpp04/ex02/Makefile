CXX= c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
NAME= Animal
SRC = main.cpp PrefixAnimal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re:  fclean all

.SECONDARY: $(OBJ)