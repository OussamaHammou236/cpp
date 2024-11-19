CXX= c++
CXXFLAGS= -Wall -Wextra -Werror
NAME= Account
OBJ= Account.cpp tests.cpp
OBJ_O= ${OBJ:.cpp=.o}

all: $(NAME)

$(NAME): $(OBJ_O)
	$(CXX) $(CXXFLAGS) $(OBJ_O) -o $(NAME)

clean:
	rm -rf $(OBJ_O)

fclean: clean
	rm -rf $(NAME)

re:  fclean all

.SECONDARY: $(OBJ_O)