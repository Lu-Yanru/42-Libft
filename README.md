# 42-Libft
42 project Libft. Creates a library of common C functions to be used in future projects.

## Functions from Libc
Recreates the following functions from Libc:
- isalpha
- isdigit
- isalnum
- isascii
- isprint
- strlen
- memset
- bzero
- memcpy
- memmove
- strlcpy
- strlcat
- toupper
- tolower
- strchr
- strrchr
- strncmp
- memchr
- memcmp
- strnstr
- atoi
- calloc
- strdup

## Additional functions
- char *ft_substr(char const *s, unsigned int start, size_t len);
  - Allocates memory (using malloc(3)) and returns a substring from the string ’s’. The substring starts at index ’start’ and has a maximum length of ’len’.
  - param1: s: The original string from which to create the substring.
  - param2: start: The starting index of the substring within ’s’.
  - param3: len: The maximum length of the substring.
  - return: The substring. NULL if the allocation fails.

- char *ft_strjoin(char const *s1, char const *s2);
  - Allocates memory (using malloc(3)) and returns a new string, which is the result of concatenating ’s1’ and ’s2’.
  - param1: s1: The 1st string.
  - param2: s2: The 2nd string.
  - return: The new string. NULL if the allocation fails.

- char *ft_strtrim(char const *s1, char const *set);
  - Allocates memory (using malloc(3)) and returns a copy of ’s1’ with characters from ’set’ removed from the beginning and the end.
  - param1: s1: The string to be trimmed.
  - param2: set: The string containing the set of characters to be removed.
  - The trimmed string. NULL if the allocation fails.
 
- char **ft_split(char const *s, char c);
  - Allocates memory (using malloc(3)) and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter. The array must end with a NULL pointer.
  - param1: s: The string to be split.
  - param2: c: The delimiter character.
  - return: The array of new strings resulting from the split. NULL if the allocation fails.

- char *ft_itoa(int n);
  - Allocates memory (using malloc(3)) and returns a string representing the integer received as an argument.
  - param: n: The integer to convert.
  - return: The string representing the integer. NULL if the allocation fails.

- char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
  - Applies the function f to each character of the string s, passing its index as the first argument and the character itself as the second. A new string is created (using malloc(3)) to store the results from the successive applications of f.
  - param1: s: The string to iterate over.
  - param2: f: The function to apply to each character.
  - return: The string created from the successive applications of ’f’. Returns NULL if the allocation fails.

- void ft_striteri(char *s, void (*f)(unsigned int, char*));
  - Applies the function ’f’ to each character of the string passed as argument, passing its index as the first argument. Each character is passed by address to ’f’ so it can be modified if necessary. Compared to ft_strmapi, this function doesn't create a new string but modifies the input string.
  - param1: s: The string to iterate over.
  - param2: f: The function to apply to each character.

- void ft_putchar_fd(char c, int fd);
  - Outputs the character ’c’ to the specified file descriptor.
  - param1: c: The character to output.
  - param2: fd: The file descriptor on which to write.

- void ft_putstr_fd(char *s, int fd);
  - Outputs the string ’s’ to the specified file descriptor.
  - param1: s: The string to output.
  - param2: fd: The file descriptor on which to write.

- void ft_putendl_fd(char *s, int fd);
  - Outputs the string ’s’ to the specified file descriptor followed by a newline.
  - param1: s: The string to output.
  - param1: fd: The file descriptor on which to write.
 
- void ft_putnbr_fd(int n, int fd);
  - Outputs the integer ’n’ to the specified file descriptor.
  - param1: n: The integer to output.
  - param2: fd: The file descriptor on which to write.

## Bonus functions: linked lists
- t_list *ft_lstnew(void *content);
  - Allocates memory (using malloc(3)) and returns a new node. The ’content’ member variable is initialized with the given parameter ’content’. The variable ’next’ is initialized to NULL.
  - param: content: The content to store in the new node.
  - return: A pointer to the new node.

- void ft_lstadd_front(t_list **lst, t_list *new);
  - Adds the node ’new’ at the beginning of the list.
  - param1: lst: The address of a pointer to the first node of a list.
  - param2: new: The address of a pointer to the node to be added.
 
- int ft_lstsize(t_list *lst);
  - Counts the number of nodes in the list.
  - param: lst: The beginning of the list.
  - return: The number of nodes in the list.
 
- t_list *ft_lstlast(t_list *lst);
  - Returns the last node of the list.
  - param: lst: The beginning of the list.
  - return: The last node of the list.
 
- void ft_lstadd_back(t_list **lst, t_list *new);
  - Adds the node ’new’ at the end of the list.
  - param1: lst: The address of a pointer to the first node of a list.
  - param2: new: The address of a pointer to the node to be added.
 
- void ft_lstdelone(t_list *lst, void (*del)(void *));
  - Takes a node as parameter and frees its content using the function ’del’. Free the node itself but does NOT free the next node.
  - param1: lst: The node to free.
  - param2: del: The address of the function used to delete the content.
 
- void ft_lstclear(t_list **lst, void (*del)(void *));
  - Deletes and frees the given node and all its successors, using the function ’del’ and free(3). Finally, set the pointer to the list to NULL.
  - param1: lst: The address of a pointer to a node.
  - param2: del: The address of the function used to delete the content of the node.
 
- void ft_lstiter(t_list *lst, void (*f)(void *));
  - Iterates through the list ’lst’ and applies the function ’f’ to the content of each node.
  - param1: lst: The address of a pointer to a node.
  - param2: f: The address of the function to apply to each node’s content.
 
- t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
  - Iterates through the list ’lst’, applies the function ’f’ to each node’s content, and creates a new list resulting of the successive applications of the function ’f’. The ’del’ function is used to delete the content of a node if needed.
  - param1: lst: The address of a pointer to a node.
  - param2: f: The address of the function applied to each node’s content.
  - param3: del: The address of the function used to delete a node’s content if needed.
  - return: The new list. NULL if the allocation fails.
