CXX= c++
CXXFLAGS = -Wall -Wextra -Werror 
NAME= zombie
SRC = main.cpp newZombie.cpp randomChump.cpp  Zombie.cpp 
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