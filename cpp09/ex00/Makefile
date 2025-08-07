CXX= c++
CXXFLAGS = -Wall -Wextra -Werror 
NAME= btc
SRC = main.cpp BitcoinExchange.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ);

fclean: clean
	rm -rf $(NAME)

re:  fclean all