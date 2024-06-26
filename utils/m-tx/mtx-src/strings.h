#ifndef STRINGS_H
#define STRINGS_H


#ifdef STRINGS_G
# define vextern
#else
# define vextern extern
#endif

/* Uncomment if necessary:  */
/* typedef char Char; */
/* typedef unsigned char  boolean; */


extern void scan1(Char *s, short p, short *n);
/* Read an integer at position p of s */
extern boolean startsWith(Char *s1, Char *s2);
extern short pos1(Char c, Char *s);
extern short posNot(Char c, Char *s);
extern void insertChar(Char c, Char *s, short p);
extern Char *substr_(Char *Result, Char *s, short start, short count);
extern void getNum(Char *line, short *k);
extern void getTwoNums(Char *line, short *k1, short *k2);
extern void toUpper(Char *s);
extern void delete1(Char *s, short p);
extern void predelete(Char *s, short l);
extern void shorten(Char *s, short new_length);
extern short nextWordBound(Char *s, Char trigger, short p);
/* find end of first word starting with trigger after s[p] */


#undef vextern

#endif /*STRINGS_H*/

/* End. */
