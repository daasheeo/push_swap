# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jesmunoz <jesmunoz@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/08 09:58:28 by jesmunoz          #+#    #+#              #
#    Updated: 2023/12/27 13:08:57 by jesmunoz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#------------------------------------------------------------------------------#
#------------------------------------COLORS------------------------------------#
#------------------------------------------------------------------------------#
ITALIC 		=	\033[3m
BOLD 		=	\033[1m
DEF_COLOR 	=	\033[0;39m
RED 		=	\033[0;91m
GREEN 		=	\033[0;92m
YELLOW 		=	\033[0;93m
BLUE 		=	\033[0;94m
MAGENTA 	=	\033[0;95m
CYAN 		=	\033[0;96m
WHITE 		=	\033[0;97m
BROWN 		=	\033[38;2;184;143;29m

#------------------------------------------------------------------------------#
#-----------------------------------PROGRAM------------------------------------#
#------------------------------------------------------------------------------#
NAME 		= 	push_swap
BONUS_NAME	=	checker

#------------------------------------------------------------------------------#
#---------------------------------INSTRUCTIONS---------------------------------#
#------------------------------------------------------------------------------#
CC			= 	gcc	-Wall -Wextra -Werror -MMD -g -I${INCLUDE}
RM			= 	rm -rf

#------------------------------------------------------------------------------#
#------------------------------------INIT--------------------------------------#
#------------------------------------------------------------------------------#
SRC_DIR  			= 	src
INPUT_DIR			= 	src/input
CORE_DIR			= 	src/sorting/core
MOVES_DIR			= 	src/sorting/moves
STK_OP_DIR			= 	src/stack_operations
UTILS_DIR			= 	src/utils

SRC_BONUS_DIR 		= 	bonus
BONUS_INPUT_DIR		= 	bonus/input
BONUS_OP_DIR		= 	bonus/operations
BONUS_MOVES_DIR		= 	bonus/moves
BONUS_READER_DIR	= 	bonus/reader
BONUS_STK_OP_DIR	=	bonus/stack_operations
BONUS_UTILS_DIR		= 	bonus/utils

OBJ_DIR				= 	obj
INCLUDE 			=   ./includes
#------------------------------------------------------------------------------#
#-----------------------------------FILES--------------------------------------#
#------------------------------------------------------------------------------#

SRC_FILES   		= 	${SRC_DIR}/main.c \
					${INPUT_DIR}/check_params.c \
					${CORE_DIR}/cost.c ${CORE_DIR}/execute_cheapest_move.c ${CORE_DIR}/position.c \
					${CORE_DIR}/sort_path.c ${CORE_DIR}/sort_three.c ${CORE_DIR}/sort.c \
					${MOVES_DIR}/push_stack.c ${MOVES_DIR}/reverse_rotate_stack.c \
					${MOVES_DIR}/rotate_stack.c ${MOVES_DIR}/swap_stack.c \
					${STK_OP_DIR}/check_stack.c ${STK_OP_DIR}/create_stack.c ${STK_OP_DIR}/validate_stack.c \
					${STK_OP_DIR}/delete_stack.c ${STK_OP_DIR}/index_stack.c \
					${UTILS_DIR}/error.c ${UTILS_DIR}/free.c ${UTILS_DIR}/numbers.c \
					${UTILS_DIR}/split.c ${UTILS_DIR}/strings.c ${UTILS_DIR}/validators.c \
					${UTILS_DIR}/check_duplicated.c \

SRC_BONUS_FILES 	=	${SRC_BONUS_DIR}/checker.c \
					${BONUS_INPUT_DIR}/check_instructions.c ${BONUS_INPUT_DIR}/check_params.c \
					${BONUS_MOVES_DIR}/push_stack.c ${BONUS_MOVES_DIR}/reverse_rotate_stack.c \
					${BONUS_MOVES_DIR}/rotate_stack.c ${BONUS_MOVES_DIR}/swap_stack.c \
					${BONUS_OP_DIR}/execute.c \
					${BONUS_READER_DIR}/get_next_line.c ${BONUS_READER_DIR}/get_next_line_utils.c \
					${BONUS_STK_OP_DIR}/create_stack.c ${BONUS_STK_OP_DIR}/validate_stack.c \
					${BONUS_STK_OP_DIR}/delete_stack.c ${BONUS_STK_OP_DIR}/check_stack.c \
					${BONUS_STK_OP_DIR}/index_stack.c \
					${BONUS_UTILS_DIR}/error.c ${BONUS_UTILS_DIR}/free.c \
					${BONUS_UTILS_DIR}/split.c ${BONUS_UTILS_DIR}/strings.c ${BONUS_UTILS_DIR}/validators.c \
					${BONUS_UTILS_DIR}/check_duplicated.c \

OBJ			=	$(patsubst %.c, $(OBJ_DIR)/%.o, $(SRC_FILES))
BONUS_OBJ	=	$(patsubst %.c, $(OBJ_DIR)/%.o, $(SRC_BONUS_FILES))
DEP			= 	$(addsuffix .d, $(basename $(SRC_FILES)))
BONUS_DEP	= 	$(addsuffix .d, $(basename $(SRC_BONUS_FILES)))
#------------------------------------------------------------------------------#
#---------------------------------DEPENDENCIES---------------------------------#
#------------------------------------------------------------------------------#
# CUnit library for testing
# CUNIT_LNK	=	-L/Users/jesmunoz/.brew/Cellar/cunit/2.1-3/lib -lcunit
# CUNIT_LNK	=	-L/usr/include/CUnit -lcunit
#------------------------------------------------------------------------------#
#-----------------------------------RULES--------------------------------------#
#------------------------------------------------------------------------------#

all: 
	@echo "  \033[0;31m▄███████▄ ███    █▄     ▄████████    ▄█    █▄       ▄████████  ▄█     █▄     ▄████████    ▄███████▄" 
	@echo "  \033[0;32m███    ███ ███    ███   ███    ███   ███    ███     ███    ███ ███     ███   ███    ███   ███    ███ "
	@echo "  \033[0;33m███    ███ ███    ███   ███    █▀    ███    ███     ███    █▀  ███     ███   ███    ███   ███    ███ "
	@echo "  \033[0;34m███    ███ ███    ███   ███         ▄███▄▄▄▄███▄▄   ███        ███     ███   ███    ███   ███    ███ "
	@echo "\033[0;35m▀█████████▀  ███    ███ ▀███████████ ▀▀███▀▀▀▀███▀  ▀███████████ ███     ███ ▀███████████ ▀█████████▀  "
	@echo "  \033[0;36m███        ███    ███          ███   ███    ███            ███ ███     ███   ███    ███   ███        "
	@echo "  \033[0;37m███        ███    ███    ▄█    ███   ███    ███      ▄█    ███ ███ ▄█▄ ███   ███    ███   ███        "
	@echo "  \033[0m▄████▀      ████████▀   ▄████████▀    ███    █▀     ▄████████▀   ▀███▀███▀    ███    █▀   ▄████▀     " 
	@$(MAKE) $(NAME)

$(OBJ_DIR)/%.o: %.c Makefile
	@mkdir -p $(dir $@)
	@echo  "${WHITE}+---------------------------------------+${DEF_COLOR}"
	@echo  "${WHITE}|${BLUE} File Name: ${BROWN}$(notdir $<)"
	@echo  "${WHITE}|${CYAN} Path:      ${YELLOW}$(dir $<)"
	@echo  "${WHITE}+---------------------------------------+${DEF_COLOR}"
	@$(CC) -c $< -o $@

-include $(DEP)

$(NAME):	$(OBJ)
	@echo
	@echo "${ITALIC}${BOLD}${MAGENTA}+---------------------------------------------+${DEF_COLOR}"
	@echo "${ITALIC}${BOLD}${MAGENTA}|${BLUE} Compiling ${NAME}...${MAGENTA}                      |${DEF_COLOR}"
	@echo "${ITALIC}${BOLD}${MAGENTA}+---------------------------------------------+${DEF_COLOR}"
	@$(CC) $(OBJ) $(CUNIT_LNK) -o $(NAME) 
	@echo "\n${BLUE} ◎ $(GREEN)$(NAME) compiled successfully ${BLUE}◎$(DEF_COLOR)\n"


$(OBJ_DIR)/%.o: %.c
	@mkdir -p $(dir $@)
	@echo  "${WHITE}+---------------------------------------+${DEF_COLOR}"
	@echo  "${WHITE}|${BLUE} File Name: ${BROWN}$(notdir $<)"
	@echo  "${WHITE}|${CYAN} Path:      ${YELLOW}$(dir $<)"
	@echo  "${WHITE}+---------------------------------------+${DEF_COLOR}"
	@${CC} -c $< -o $@

-include $(BONUS_DEP)

bonus:	$(BONUS_OBJ) 
	@echo
	@echo "${ITALIC}${BOLD}${MAGENTA}+---------------------------------------------+${DEF_COLOR}"
	@echo "${ITALIC}${BOLD}${MAGENTA}|${BLUE} Compiling ${BONUS_NAME}...${MAGENTA}                      |${DEF_COLOR}"
	@echo "${ITALIC}${BOLD}${MAGENTA}+---------------------------------------------+${DEF_COLOR}"
	@$(CC) $(BONUS_OBJ) $(CUNIT_LNK) -o $(BONUS_NAME)
	@echo "\n${BLUE} ◎ $(GREEN)$(BONUS_NAME) compiled successfully ${BLUE}◎$(DEF_COLOR)\n"

clean:
	@${RM} ${OBJ} ${DEP} ${BONUS_DEP} 
	@$(RM) ./$(OBJ_DIR)
	@echo "\n${BLUE} ◎ $(RED)All objects cleaned successfully ${BLUE}◎$(DEF_COLOR)\n"

fclean: clean
	@$(RM) $(NAME) $(BONUS_NAME)
	@echo "\n${BLUE} ◎ $(RED)All objects and executable cleaned successfully${BLUE} ◎$(DEF_COLOR)\n"


re: fclean all

.PHONY: all clean fclean re