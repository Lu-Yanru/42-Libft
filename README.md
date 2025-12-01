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
