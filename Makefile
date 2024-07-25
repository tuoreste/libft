# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: otuyishi <otuyishi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/22 11:04:08 by otuyishi          #+#    #+#              #
#    Updated: 2024/07/25 09:55:48 by otuyishi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCDIR = srcs
INCDIR = includes
OBJDIR = obj

# Collect all .c files in SRCDIR and its subdirectories
SRCS = $(shell find $(SRCDIR) -name '*.c')
# Convert .c file paths to .o file paths
OBJS = $(SRCS:$(SRCDIR)/%.c=$(OBJDIR)/%.o)

all: $(NAME)

$(NAME): $(OBJS)
	@echo "Creating archive $@ with objects: $^"
	ar rcs $(NAME) $(OBJS)

# Rule to compile .c files into .o files
$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@mkdir -p $(OBJDIR)/$(*D)  # Create directory structure for object files
	@echo "Compiling $< to $@"
	$(CC) $(CFLAGS) -I $(INCDIR) -c $< -o $@

clean:
	rm -f $(OBJS)
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
