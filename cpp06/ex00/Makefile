CXX= c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
NAME= ScalarConverte
SRC = main.cpp ScalarConverte.cpp
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