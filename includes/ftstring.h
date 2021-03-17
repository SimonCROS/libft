#ifndef FTSTRING_H
# define FTSTRING_H

# include "libft.h"

char	*ft_strninsert(char *dst, const char *src, size_t start, size_t max);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_substr(const char *s, unsigned int start, size_t len);
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char));
char	*ft_strinsert(char *dst, const char *src, size_t start);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strtrim(const char *s1, const char *set);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_strcpy(char *dest, const char *src);
int		ft_strcnt(const char *str, char c);
int		ft_strindex_of(char *str, char c);
char	*ft_strrchr(const char *s, int c);
char	**ft_split(const char *s, char c);
char	*ft_strchr(const char *s, int c);
int		ft_strcmp(char *s1, char *s2);
char	**ft_splitf(char *s, char c);
char	*ft_strdup(const char *s1);
char	*ft_strtoupper(char *str);
char	*ft_strtolower(char *str);
size_t	ft_strlen(const char *s);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_isprint(int c);
int		ft_isdigit(int c);
int		ft_isascii(int c);
int		ft_isalpha(int c);
int		ft_isalnum(int c);

#endif