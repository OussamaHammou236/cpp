CXX= c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
NAME= zombie
SRC = main.cpp zombieHorde.cpp  Zombie.cpp 
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