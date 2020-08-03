# 42_ft_printf (new curriculum)
- The aim of the project is to recode the libc’s printf function.

## About [printf](https://linux.die.net/man/3/printf)

```
man 3 printf
```
The printf() function writes the output under the control of a format string that specifies how subsequent arguments (or arguments accessed via the variable-length argument facilities of stdarg(3)) are converted for output.

#### Return value

Upon successful return, pfrintf returns the number of characters printed (excluding the null byte used to end output to strings).
If an output error is encountered, a negative value is returned.

## About ft_printf
prototype:
```
int    ft_printf(const char *format, ... );
```
```
supported specifiers : cspdiuxX%
```

| specifier | description |
|:--------: | :-----------|
| c | unsigned char |
| s | string |
| p | pointer |
| d / i | integers|
| u | unsinged int|
| x | lowercase hexadecimal |
| X | uppercase hexadecimal | 
| % | percent sign |

```
supported flags : 0-.*
```

| flags | description |
|:-----: | :-----------|
| 0 | zero padding |
| - | left justify (right justification by default) |
| . | precision |
| * | wildcard for field width and precision |

## Usage
Download and compile repo:
```
git clone https://github.com/khodizoda/42_ft_printf && cd 42_ft_printf && make
```
Execute with:
```
gcc -Wall -Wextra -Werror -L. -lftprintf test.c && ./a.out
```
## Moulinette
```
FT_PRINTF: 100/100
test_spdxiucpercent: 8/8 correct functions | test_fields: 4/4 correct functions

```
