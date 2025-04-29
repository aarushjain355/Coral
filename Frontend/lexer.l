%%
[0-9]+      { printf("Integer: %s\n", yytext); }
[a-zA-Z]+   { printf("Word: %s\n", yytext); }
%%


