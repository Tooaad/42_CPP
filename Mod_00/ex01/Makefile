# Project compilation files and directories

NAME					=	phonebook

C_PHONEBOOK				=	main.cpp 		\
							PhoneBook.cpp	\
							Contact.cpp		\

SRCSFD			=	srcs/
OBJSFD			=	objs/

OBJS_FILES	=	$(addprefix $(SRCSFD), $(C_PHONEBOOK:.c=.o))
# # # # # # # # # # # # # # # # # # # # # # # # # # # # #

# Compilation
CFLAGS			=	-Wall -Wextra -Werror -I./includes
# # # # # # # # # # # # # # # # # # # # # # # # # # # # #

# Colors
RED 			=	\033[0;31m
GREEN			=	\033[0;32m
NONE			=	\033[0m
# # # # # # # # # # # # # # # # # # # # # # # # # # # # # 

all: project $(NAME)
	@echo "... project ready"

project:
	@echo "Checking project ..."

$(OBJSFD):
	@mkdir $@
	@echo "\t[ $(GREEN)✔$(NONE) ] $@ directory"

$(NAME): $(OBJSFD) $(SRCS_PHONEBOOK)
	@clang++ $(CFLAGS) $(OBJS_FILES) -o phonebook
	@echo "\t[ $(GREEN)✔$(NONE) ] phonebook executable"

$(OBJSFD)%.o: $(SRCSFD)%.cpp
	@clang++ $(CFLAGS) -o $(NAME)
	@echo "\t[ $(GREEN)✔$(NONE) ] $@ object"

clean:
	@echo "Cleaning project ..."
	@/bin/rm -rf $(OBJSFD)
	@echo "\t[ $(RED)✗$(NONE) ] Objects directory"

fclean: clean
	@/bin/rm -f phonebook
	@echo "\t[ $(RED)✗$(NONE) ] phonebook executable"

re: fclean all

.PHONY: project all clean fclean re