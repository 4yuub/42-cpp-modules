NAME = forms
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
CC = c++

SRCS =	main.cpp Bureaucrat.cpp Form.cpp \
		ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o:%.cpp	Bureaucrat.hpp Form.hpp \
			ShrubberyCreationForm.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp Intern.hpp
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "compiling..."

clean:
	@$(RM) $(OBJS)
	@echo "successfuly cleaned"

fclean: clean
	@$(RM) $(NAME)
	@echo "executable removed successfuly"

re: fclean all
