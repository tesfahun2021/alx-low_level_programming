Skip to content
Search or jump to…
Pull requests
Issues
Marketplace
Explore
 
@tesfahun2021 
DennisWanjeri
/
alx-low_level_programming
Public
1
11
Code
Issues
Pull requests
Actions
Projects
Wiki
Security
Insights
You’re making changes in a project you don’t have write access to. We’ve created a fork of this project for you to commit your proposed changes to. Submitting a change will write it to a new branch in your fork, so you can send a pull request.
alx-low_level_programming
/
0x17-doubly_linked_lists
/
103-keygen.c
in
DennisWanjeri:main
 

Tabs

8

No wrap
1
#include <stdio.h>
2
#include <stdlib.h>
3
#include <string.h>
4
​
5
/**
6
 * main - Generates and prints passwords for the crackme5 executable.
7
 * @argc: The number of arguments supplied to the program.
8
 * @argv: An array of pointers to the arguments.
9
 *
10
 * Return: Always 0.
11
 */
12
int main(int __attribute__((__unused__)) argc, char *argv[])
13
{
14
        char password[7], *codex;
15
        int len = strlen(argv[1]), i, tmp;
16
​
17
        codex = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
18
​
19
        tmp = (len ^ 59) & 63;
20
        password[0] = codex[tmp];
21
​
22
        tmp = 0;
23
        for (i = 0; i < len; i++)
24
                tmp += argv[1][i];
25
        password[1] = codex[(tmp ^ 79) & 63];
26
​
27
        tmp = 1;
28
        for (i = 0; i < len; i++)
29
                tmp *= argv[1][i];
30
        password[2] = codex[(tmp ^ 85) & 63];
31
​
32
        tmp = 0;
33
        for (i = 0; i < len; i++)
34
        {
35
                if (argv[1][i] > tmp)
36
                        tmp = argv[1][i];
37
        }
38
        srand(tmp ^ 14);
39
        password[3] = codex[rand() & 63];
40
​
41
        tmp = 0;
42
        for (i = 0; i < len; i++)
43
                tmp += (argv[1][i] * argv[1][i]);
44
        password[4] = codex[(tmp ^ 239) & 63];
45
​
46
        for (i = 0; i < argv[1][0]; i++)
47
                tmp = rand();
48
        password[5] = codex[(tmp ^ 229) & 63];
49
​
50
        password[6] = '\0';
51
        printf("%s", password);
52
        return (0);
53
}
54
​
@tesfahun2021
Propose changes
Commit summary
Create 103-keygen.c
Optional extended description
Add an optional extended description…
 
© 2021 GitHub, Inc.
Terms
Privacy
Security
Status
Docs
Contact GitHub
Pricing
API
Training
Blog
About
