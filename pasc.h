#ifndef PASC_H
#define PASC_H

//checking libraries
#if defined(__has_include)
#if __has_include(<stdio.h>)
#include<stdio.h>
#define STDIW
#endif
#endif
#if defined(__has_include)
#if __has_include(<stdlib.h>)
#include<stdlib.h>
#define STDLW
#endif
#endif

//STDIO
#ifdef STDIW
#define pt(...) printf(__VA_ARGS__)
#define pc(a) printf("%c", a)
#define pn(a) printf("%d", a)
#define pln(a) printf("%ld", a)
#define pf(a) printf("%f", a)
#define pld(a) printf("%ld", a)
#define psu(a) printf("%u", a)
#define px(a)  printf("%x", a)
#define sn(a) scanf("%d", &a)
#define sf(a) scanf("%f", &a)
#define sc(a) scanf("%c", &a)
#define ss(a) scanf("%s", a)
#define sld(a) scanf("%ld", &a)
#define slf(a) scanf("%lf", &a)
#define su(a) scanf("%u", &a)
#define nl printf("\n")
#define fo(a, b) fopen(a, b)
#define fc(a) fclose(a)
#define del(a) remove(a)
#define fg(a) fgetc(a)
#endif

//STDLIB
#ifdef STDLW
#define mal(type,w) (type*)malloc(w)
#define real(type, p, w) (p = (type*)realloc(p, w))
#define cal(type, p, w) (type*)calloc(p, w)
#define fr(a) free(a)
#define mod(a) abs(a)
#define rem(a, b)  ((a) % (b))
#define q(base, n, size, comp) qsort(base, n, size, comp)
#define b(key, a, n, w, f) bsearch(key, a, n, w, f)
#define srd(a) srand(a)
#define dr() rand()
#define stn(a) atoi(a)
#define stdo(a) atof(a)
#define sys(s) system(s)
#define e(a) exit(a)
#endif

//count and operations (pc)
#define wh while
#define unt until
#define f(a, b) for(int a = 0; a < b; a++)
#define cycle(a, b, c) while((a) < (b)) { ((a) += (c));
#define noteq(a, b, c) while((a) != (b)) { ((a) += (c));
#define eqorl(a, b, c) while((a) <= (b)) { ((a) += (c));
#define eq(a, b, c) while((a) == (b)) {((a) += (c));
#define ifeq(a, b) if ((a) == (b))
#define ifne(a, b) if ((a) != (b))
#define ifbi(a, b) if ((a) > (b))
#define ifsm(a, b) if((a) < (b))
#define ceq(a, b) ((a) == (b))
#define cne(a, b) ((a) != (b))
#define cbi(a, b) ((a) > (b))
#define csm(a, b) ((a) < (b))
#define other else
#define s(a, b) ((a) += (b))
#define m(a, b) ((a) -= b)
#define mu(a, b) ((a) * (b))
#define di(a, b) ((a) / (b))

//variables
#define in  int
#define ui unsigned int
#define us unsigned short
#define ul unsigned long
#define ull unsigned long long
#define fl float
#define db double
#define ch char
#define bo bool
#define vo void
#define l long
#define ll long long
#define bi(p, n) unsigned int p : n
#define sh short

//main comands
#define beginc  int main(int argc, char *argv[]) {
#define mas(x) sizeof(x)
#define co(a, i) a[i]
#define mar(type, name, count, count_1,...) type name[count][count_1] = {__VA_ARGS__}
#define mimar(type, name,count, ...) type name[count] = {__VA_ARGS__}
#define pcns(type, name) const type name
#define stc struct
#define func(type, name, ...) type name(__VA_ARGS__)
#define arp(a, b) *(a + b)
#define swi(a) switch(a) 
#define sce(a, act) case a: act; break
#define def(act) default: act; break; 

//additional
#define swap(type, a, b) go type t = a; a = b; b = t; end
#define ensure(cond, msg) if (!(cond)) go pt("ERROR: %s\n", msg); exit(1); end
#define forever while(1) 
#define cls printf("\033[H\033[J")
#define ask(msg, x) pt(msg); sn(x)
#define line pt("--------------------------\n")
#define go {
#define ret return
#define end }
#endif
