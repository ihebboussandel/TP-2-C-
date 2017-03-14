/* 
 * File:   main.cpp
 * Author: iheb
 *
 * Created on March 11, 2017, 9:52 PM
 */

#include <cstdlib>
#include <iostream>
#include <cstring>
using namespace std;

/*
 * 
 */
char *Mystrcpy1(char *s, const char *cs);
char *Mystrcpy2(char *s, const char *cs);
void func1(char *src, char *sub);
int main(int argc, char** argv) {
char ch[32], *substr = "aa";
char *stirn="ababa";
Mystrcpy2(ch,stirn);
cout<<"From the string:"<<ch<<endl;
cout<<"We will attempt to remove substring :"<<substr<<endl;
func1(ch,substr);
cout<<"The result:"<<ch<<endl;

//Mystrcpy2(ch,stirn);

return 0;
}

char *Mystrcpy1(char *s, const char *cs)
{ /* Copy from beginning of string  to the end */
char *s1;
const char *cs1;

for(s1 = s,cs1 = cs; '\0' != (*s1 = *cs1); s1++,cs1++) ;
return s;
}

char *Mystrcpy2(char *s, const char *cs)
{ /* Copy from the end of string cs to the beginning */
const char *tmp;
size_t n = strlen(cs);

for(tmp = cs+n; ; tmp--,n--)
{
*(s+n) = *tmp;
if(!n) break;
}
return s;
}

void func1(char *src, char *sub)
{ /* Using function Mystrcpy1 */
char *p;

if ((p=strstr(src,sub)) != NULL)
Mystrcpy1(p,p+strlen(sub));
}
