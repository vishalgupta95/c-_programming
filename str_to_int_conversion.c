#include <stdio.h>

/*
 ASCII character '0' evaluates to 48 or 0x30.
 '\0' is defined to be a null character  \0 is 0
 
ascii code  48  0   (number zero)           
ascii code  49  1   (number one)            
ascii code  50  2   (number two)            
ascii code  51  3   (number three)          
ascii code  52  4   (number four)           
ascii code  53  5   (number five)           
ascii code  54  6   (number six)            
ascii code  55  7   (number seven)          
ascii code  56  8   (number eight)          
ascii code  57  9   (number nine)           
ascii code  58  :   (Colon)         
ascii code  59  ;   (Semicolon)         
ascii code  60  <   (Less-than sign )           
ascii code  61  =   (Equals sign)           
ascii code  62  >   (Greater-than sign ; Inequality)            
ascii code  63  ?   (Question mark)         
ascii code  64  @   (At sign)           
ascii code  65  A   (Capital A )            
ascii code  66  B   (Capital B )            
ascii code  67  C   (Capital C )            
ascii code  68  D   (Capital D )            
ascii code  69  E   (Capital E )            
ascii code  70  F   (Capital F )            
ascii code  71  G   (Capital G )            
ascii code  72  H   (Capital H )            
ascii code  73  I   (Capital I )            
ascii code  74  J   (Capital J )            
ascii code  75  K   (Capital K )            
ascii code  76  L   (Capital L )            
ascii code  77  M   (Capital M )            
ascii code  78  N   (Capital N )            
ascii code  79  O   (Capital O )            
ascii code  80  P   (Capital P )            
ascii code  81  Q   (Capital Q )            
ascii code  82  R   (Capital R )            
ascii code  83  S   (Capital S )            
ascii code  84  T   (Capital T )            
ascii code  85  U   (Capital U )            
ascii code  86  V   (Capital V )            
ascii code  87  W   (Capital W )            
ascii code  88  X   (Capital X )            
ascii code  89  Y   (Capital Y )            
ascii code  90  Z   (Capital Z )            
ascii code  91  [   (square brackets or box brackets)           
ascii code  92  \   (Backslash)         
ascii code  93  ]   (square brackets or box brackets)           
ascii code  94  ^   (Caret or circumflex accent)            
ascii code  95  _   (underscore , understrike , underbar or low line)           
ascii code  96  `   (Grave accent)          
ascii code  97  a   (Lowercase  a )         
ascii code  98  b   (Lowercase  b )         
ascii code  99  c   (Lowercase  c )         
ascii code  100 d   (Lowercase  d )         
ascii code  101 e   (Lowercase  e )         
ascii code  102 f   (Lowercase  f )         
ascii code  103 g   (Lowercase  g )         
ascii code  104 h   (Lowercase  h )         
ascii code  105 i   (Lowercase  i )         
ascii code  106 j   (Lowercase  j )         
ascii code  107 k   (Lowercase  k )         
ascii code  108 l   (Lowercase  l )         
ascii code  109 m   (Lowercase  m )         
ascii code  110 n   (Lowercase  n )         
ascii code  111 o   (Lowercase  o )         
ascii code  112 p   (Lowercase  p )         
ascii code  113 q   (Lowercase  q )         
ascii code  114 r   (Lowercase  r )         
ascii code  115 s   (Lowercase  s )         
ascii code  116 t   (Lowercase  t )         
ascii code  117 u   (Lowercase  u )         
ascii code  118 v   (Lowercase  v )         
ascii code  119 w   (Lowercase  w )         
ascii code  120 x   (Lowercase  x )         
ascii code  121 y   (Lowercase  y )         
ascii code  122 z   (Lowercase  z )         
ascii code  123 {   (curly brackets 
*/

int charToInt(char c){
    int num = 0;

    //Substract '0' from entered char to get
    //corresponding digit
    num = c - '0';

    return num;
}


int main(void)
{
    int number=71;

    char charValue = number+'0';
    printf("The character value is :%c",charValue);

    return 0;
}
