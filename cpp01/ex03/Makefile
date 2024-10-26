CXX= c++
CXXFLAGS = -Wall -Wextra -Werror 
NAME= Weapon
SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp 
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