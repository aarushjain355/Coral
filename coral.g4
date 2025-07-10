grammar coral;

options {
  visitor = true;
}

// Lexer rules

INTEGER     : [0-9]+ ;
FLOAT
  : [0-9]+ '.' [0-9]+      // e.g. 123.456
  | '.' [0-9]+             // e.g. .456
  | [0-9]+ '.'             // e.g. 123.
  ;
STRING : '"' (~["\r\n])* '"' ; 
LET : 'Let' ;
BE : 'be' ;
IF : 'if' ;
SET_BREAKPOINT : 'set_breakpoint' ;
FROM : 'From' ;
UNTIL : 'Until' ;
BY : 'by' ;
REWIND : 'Rewind' ;
COMMA  : ',' ;
LPAREN : '(' ;
RPAREN : ')' ;
LBRACKET : '{' ;
RBRACKET : '}' ;
WS     : [ \t\r\n]+ -> skip ;
IS : 'is' ;
ID : [a-zA-Z]+ ;



// Parser Rules



command_first
  : REWIND LPAREN arg_first RPAREN
  ;

// Single argument is a STRING, INTEGER, or FLOAT
arg_first
  : STRING
  | INTEGER
  ;

command_second
  : SET_BREAKPOINT LPAREN arg_second RPAREN
  ;

// Single argument is a STRING, INTEGER, or FLOAT
arg_second
  : STRING
  ; INTEGER

loop
  : FROM INTEGER UNTIL INTEGER BY INTEGER IS block 
  ;

block
  : LBRACKET statement* RBRACKET
  ;

// Statements can be commands, loops, if-statements, etc.
statement
  : command_first
  | command_second
  | loop
  | ifStatement
  | assignment
  ;

// Example if statement (expand as needed)
ifStatement
  : IF condition block 
  ;


// Conditions (simplified)
condition
  : expr (('==' | '!=' | '<' | '<=' | '>' | '>=') expr)?
  ;

// Expressions (simple arithmetic expressions)


assignment 
  : LET ID BE expr
  ;

expr
  : expr op=('*'|'/') expr     # MulDiv
  | expr op=('+'|'-') expr     # AddSub
  | INTEGER                    # Int
  | ID                         # ANOTHERVARIABLE
  | FLOAT                      # Float
  | STRING                     # String
  | '(' expr ')'               # Parens
  ;
program : statement* EOF ;