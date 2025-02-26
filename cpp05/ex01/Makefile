CXX= c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
NAME= Form
SRC =  Bureaucrat.cpp Form.cpp main.cpp
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